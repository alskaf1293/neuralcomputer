`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32(real r);
import "DPI-C" function real f32_to_real(int unsigned bits);

module tb_scale_function #(
  // Input -> output order.
  parameter string LAYERS = "2,4,3",

  // One entry per layer: 0=linear, 1=ReLU, 2=tanh.
  parameter string ACTIVATIONS = "0,1,0",

  parameter int MAX_SAMPLES = 1024
);

  // ------------------------------------------------------------
  // Compile-time configuration
  // ------------------------------------------------------------

  function automatic int list_length(input string text);
    int count;
    count = 1;

    for (int i=0; i<text.len(); i++) begin
      if (text.getc(i) == 8'd44)
        count++;
    end

    return count;
  endfunction

  function automatic int list_item(
    input string text,
    input int index
  );
    int field, value;
    bit seen;

    field = 0;
    value = 0;
    seen = 0;

    for (int i=0; i<text.len(); i++) begin
      if (text.getc(i) == 8'd44) begin
        if (field == index)
          return seen ? value : -1;

        field++;
        value = 0;
        seen = 0;
      end else if (
        text.getc(i) >= 8'd48 &&
        text.getc(i) <= 8'd57
      ) begin
        value = value*10 + int'(text.getc(i)) - 48;
        seen = 1;
      end else if (text.getc(i) != 8'd32) begin
        return -1;
      end
    end

    return (field == index && seen) ? value : -1;
  endfunction

  function automatic int maximum_width();
    int largest, width;
    largest = 1;

    for (int i=0; i<list_length(LAYERS); i++) begin
      width = list_item(LAYERS, i);
      if (width > largest)
        largest = width;
    end

    return largest;
  endfunction

  localparam int NUM_LAYERS = list_length(LAYERS);
  localparam int MAX_K = maximum_width();

  typedef int widths_t [NUM_LAYERS];
  typedef act_kind_e activations_t [NUM_LAYERS];

  function automatic widths_t make_widths();
    int width;

    for (int l=0; l<NUM_LAYERS; l++) begin
      width = list_item(LAYERS, NUM_LAYERS-1-l);
      make_widths[l] = (width > 0) ? width : 1;
    end
  endfunction

  function automatic activations_t make_activations();
    int kind;

    for (int l=0; l<NUM_LAYERS; l++) begin
      kind = list_item(ACTIVATIONS, NUM_LAYERS-1-l);
      make_activations[l] =
          act_kind_e'((kind >= 0 && kind <= 2) ? kind : 0);
    end
  endfunction

  // RTL indexing is output -> input.
  localparam widths_t K_LUT = make_widths();
  localparam activations_t ACT_LUT = make_activations();

  localparam int INPUT_LAYER = NUM_LAYERS-1;
  localparam int INPUTS = K_LUT[INPUT_LAYER];
  localparam int OUTPUTS = K_LUT[0];

  // ------------------------------------------------------------
  // DUT
  // ------------------------------------------------------------

  logic clk = 1'b0;
  logic rst_n;
  logic start_tick;
  logic learn_en;
  logic busy_o, done_o;

  logic [NUM_LAYERS-1:0][MAX_K-1:0] x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  always #5 clk = ~clk;

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .ACT_LUT(ACT_LUT),
    .M0(0)
  ) uut (
    .clk(clk),
    .rst_n(rst_n),
    .start_tick(start_tick),
    .learn_en(learn_en),
    .x_set_en_all(x_set_en_all),
    .x_obs_flat_all(x_obs_flat_all),
    .busy_o(busy_o),
    .done_o(done_o)
  );

  wire [31:0] output_ieee [OUTPUTS];

  for (genvar i=0; i<OUTPUTS; i++) begin : G_OUTPUT_TO_IEEE
    hf_rec2f32 u_convert (
      .in_rec(
        uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[i].u_core.x_i_eff
      ),
      .out_ieee(output_ieee[i])
    );
  end

  // ------------------------------------------------------------
  // Runtime settings and experiment storage
  // ------------------------------------------------------------

  int samples = 64;
  int seed = 0;
  int epochs = 5;
  int settle_ticks = 0;
  int train_ticks = 220;
  int eval_ticks = 500;
  int grid_points = 6;
  int tick_timeout;
  bit print_teacher = 0;

  string dataset = "random";
  string csv_path = "runs/scale.csv";

  real x_low [MAX_K];
  real x_high [MAX_K];

  real x_samples [MAX_SAMPLES][MAX_K];
  real y_targets [MAX_SAMPLES][MAX_K];

  // W[l][i][j]: source neuron j in layer l+1 -> neuron i in layer l.
  real teacher_w [NUM_LAYERS][MAX_K][MAX_K];
  real teacher_b [NUM_LAYERS][MAX_K];

  integer csv_fd;
  longint unsigned cycles = 0;
  longint unsigned updates = 0;

  always @(posedge clk) begin
    if (!rst_n)
      cycles <= 0;
    else
      cycles <= cycles + 1;
  end

  function automatic logic [31:0] f2b(input real value);
    return real_to_f32(value);
  endfunction

  function automatic real b2f(input logic [31:0] value);
    return f32_to_real(value);
  endfunction

  function automatic real activate(
    input real value,
    input act_kind_e kind
  );
    case (kind)
      ACT_RELU: return value > 0.0 ? value : 0.0;
      ACT_TANH: return $tanh(value);
      default:  return value;
    endcase
  endfunction

  // ------------------------------------------------------------
  // Configuration and checks
  // ------------------------------------------------------------

  task automatic configure();
    int n;
    real bound, override_value;

    if (NUM_LAYERS < 2)
      $fatal(1, "At least two layers are required.");

    if (MAX_SAMPLES < 1)
      $fatal(1, "MAX_SAMPLES must be positive.");

    if (list_length(ACTIVATIONS) != NUM_LAYERS)
      $fatal(1, "Specify one activation for every layer.");

    for (int l=0; l<NUM_LAYERS; l++) begin
      if (list_item(LAYERS, l) <= 0)
        $fatal(1, "Layer sizes must be positive integers.");

      if (
        list_item(ACTIVATIONS, l) < 0 ||
        list_item(ACTIVATIONS, l) > 2
      )
        $fatal(1, "Activations must be 0, 1, or 2.");
    end

    tick_timeout = 32*MAX_K + 1024;

    void'($value$plusargs("N_SAMPLES=%d", samples));
    void'($value$plusargs("SEED=%d", seed));
    void'($value$plusargs("EPOCHS=%d", epochs));
    void'($value$plusargs("SETTLE_TICKS=%d", settle_ticks));
    void'($value$plusargs("TRAIN_TICKS=%d", train_ticks));
    void'($value$plusargs("EVAL_TICKS=%d", eval_ticks));
    void'($value$plusargs("TICK_TIMEOUT=%d", tick_timeout));
    void'($value$plusargs("GRID=%d", grid_points));
    void'($value$plusargs("DATASET=%s", dataset));
    void'($value$plusargs("CSV=%s", csv_path));

    print_teacher = $test$plusargs("PRINT_TEACHER");

    for (int j=0; j<MAX_K; j++) begin
      bound = 1.2 - 0.1*real'(j);
      if (bound < 0.4)
        bound = 0.4;

      x_low[j] = -bound;
      x_high[j] = bound;

      // Read into a scalar. Assign the array only on success.
      if ($value$plusargs(
        $sformatf("X%0d_LOW=%%f", j), override_value
      ))
        x_low[j] = override_value;

      if ($value$plusargs(
        $sformatf("X%0d_HIGH=%%f", j), override_value
      ))
        x_high[j] = override_value;

      if (x_high[j] < x_low[j])
        $fatal(1, "Input range %0d has HIGH < LOW.", j);
    end

    if (dataset == "grid") begin
      if (grid_points < 1)
        $fatal(1, "GRID must be positive.");

      samples = 1;

      for (int j=0; j<INPUTS; j++) begin
        if (samples > MAX_SAMPLES / grid_points)
          $fatal(1, "Grid exceeds MAX_SAMPLES.");

        samples *= grid_points;
      end
    end else if (dataset != "random" && dataset != "diagonal") begin
      $fatal(1, "DATASET must be random, grid, or diagonal.");
    end

    if (samples < 1 || samples > MAX_SAMPLES)
      $fatal(1, "N_SAMPLES must be between 1 and MAX_SAMPLES.");

    if (
      epochs < 0 || settle_ticks < 0 ||
      train_ticks < 0 || eval_ticks < 1 ||
      tick_timeout < 1
    )
      $fatal(1, "Invalid epoch or tick count.");

    // The current RTL has fixed initialization tables for layers 0 and 1.
    // Check their row and column capacities.
    for (int l=0; l<NUM_LAYERS; l++) begin
      n = (l == INPUT_LAYER) ? K_LUT[l-1] : K_LUT[l+1];

      if (l == 0 && (K_LUT[l] > 8 || n > 16))
        $fatal(1, "Layer 0 exceeds its 8x16 RTL initialization table.");

      if (l == 1 && (K_LUT[l] > 16 || n > 8))
        $fatal(1, "Layer 1 exceeds its 16x8 RTL initialization table.");
    end

    if (NUM_LAYERS > 3)
      $display(
        "[TB] NOTE: RTL layers above index 1 currently initialize weights to zero."
      );

    if (f2b(1.0) !== 32'h3f800000)
      $fatal(1, "DPI FP32 conversion failed.");
  endtask

  // ------------------------------------------------------------
  // Teacher
  //
  // Default coefficients reproduce the original 2->4->3 teacher.
  // Other widths extend its coefficient motifs.
  //
  // Overrides use RTL layer indexing, with output layer = 0:
  //   +W_layer_neuron_input=value
  //   +B_layer_neuron=value
  // ------------------------------------------------------------

  task automatic build_teacher();
    int n, base, j0, j1;
    real override_value;

    for (int l=0; l<NUM_LAYERS; l++) begin
      for (int i=0; i<MAX_K; i++) begin
        teacher_b[l][i] = 0.0;
        for (int j=0; j<MAX_K; j++)
          teacher_w[l][i][j] = 0.0;
      end
    end

    for (int l=0; l<INPUT_LAYER; l++) begin
      n = K_LUT[l+1];

      for (int i=0; i<K_LUT[l]; i++) begin
        if (l == 0) begin
          base = (n <= 4) ? 0 : (2*i) % n;

          for (int j=0; j<n; j++) begin
            case (i % 3)
              0: begin
                case (j-base)
                  0: teacher_w[l][i][j] =  0.90;
                  1: teacher_w[l][i][j] = -0.45;
                  2: teacher_w[l][i][j] =  0.30;
                  default: ;
                endcase
              end
              1: begin
                case (j-base)
                  0: teacher_w[l][i][j] = -0.70;
                  1: teacher_w[l][i][j] =  0.85;
                  3: teacher_w[l][i][j] =  0.25;
                  default: ;
                endcase
              end
              2: begin
                case (j-base)
                  0: teacher_w[l][i][j] =  0.50;
                  1: teacher_w[l][i][j] =  0.60;
                  2: teacher_w[l][i][j] = -0.20;
                  3: teacher_w[l][i][j] =  0.35;
                  default: ;
                endcase
              end
            endcase
          end
        end else begin
          j0 = (2*(i/4)) % n;
          j1 = (j0+1) % n;

          case (i % 4)
            0: begin
              teacher_w[l][i][j0] = 1.00;
              if (n > 1) teacher_w[l][i][j1] = -0.20;
            end
            1: begin
              teacher_w[l][i][j0] = -0.15;
              if (n > 1) teacher_w[l][i][j1] = 0.95;
            end
            2: begin
              teacher_w[l][i][j0] = 0.70;
              if (n > 1) teacher_w[l][i][j1] = 0.25;
            end
            3: begin
              teacher_w[l][i][j0] = 0.20;
              if (n > 1) teacher_w[l][i][j1] = 0.80;
            end
          endcase
        end

        // Preserve defaults when an override is absent.
        for (int j=0; j<n; j++) begin
          if ($value$plusargs(
            $sformatf("W_%0d_%0d_%0d=%%f", l, i, j),
            override_value
          ))
            teacher_w[l][i][j] = override_value;
        end

        if ($value$plusargs(
          $sformatf("B_%0d_%0d=%%f", l, i),
          override_value
        ))
          teacher_b[l][i] = override_value;
      end
    end
  endtask

  task automatic report_teacher();
    for (int l=INPUT_LAYER-1; l>=0; l--) begin
      for (int i=0; i<K_LUT[l]; i++) begin
        $write("[TB] Teacher layer=%0d neuron=%0d bias=%g weights:",
               l, i, teacher_b[l][i]);

        for (int j=0; j<K_LUT[l+1]; j++)
          $write(" %g", teacher_w[l][i][j]);

        $write("\n");
      end
    end
  endtask

  // ------------------------------------------------------------
  // Dataset
  // ------------------------------------------------------------

  task automatic build_dataset();
    real values [NUM_LAYERS][MAX_K];
    real fraction, acc, target_ms;
    int remainder, digit;

    void'($urandom(seed));

    target_ms = 0.0;

    for (int s=0; s<samples; s++) begin
      remainder = s;

      // Last input dimension varies fastest, matching the original grid.
      for (int j=INPUTS-1; j>=0; j--) begin
        if (dataset == "grid") begin
          digit = remainder % grid_points;
          remainder /= grid_points;

          fraction = (grid_points == 1)
              ? 0.5
              : real'(digit) / real'(grid_points-1);

          x_samples[s][j] =
              x_low[j] + (x_high[j]-x_low[j])*fraction;
        end else if (dataset == "diagonal") begin
          fraction = (samples == 1)
              ? 0.5
              : real'(s) / real'(samples-1);

          x_samples[s][j] = (j % 2 == 0)
              ? -1.0 + 2.0*fraction
              :  1.0 - 2.0*fraction;
        end else begin
          fraction = real'($urandom()) / 4294967295.0;
          x_samples[s][j] =
              x_low[j] + (x_high[j]-x_low[j])*fraction;
        end

        values[INPUT_LAYER][j] = x_samples[s][j];
      end

      for (int l=INPUT_LAYER-1; l>=0; l--) begin
        for (int i=0; i<K_LUT[l]; i++) begin
          acc = teacher_b[l][i];

          for (int j=0; j<K_LUT[l+1]; j++)
            acc += teacher_w[l][i][j] * values[l+1][j];

          values[l][i] = activate(acc, ACT_LUT[l]);
        end
      end

      for (int i=0; i<OUTPUTS; i++) begin
        y_targets[s][i] = values[0][i];
        target_ms += values[0][i]*values[0][i];
      end
    end

    target_ms /= real'(samples*OUTPUTS);

    $display("[TB] Target mean square = %.9g", target_ms);

    if (target_ms < 1.0e-20)
      $display(
        "[TB] WARNING: targets are zero or nearly zero; inspect the teacher and inputs."
      );
  endtask

  // ------------------------------------------------------------
  // Tick execution and clamps
  // ------------------------------------------------------------

  task automatic do_tick();
    int guard;
    guard = 0;

    // Drive away from the DUT's active edge.
    @(negedge clk);
    start_tick = 1'b1;
    @(negedge clk);
    start_tick = 1'b0;

    while (!done_o) begin
      @(negedge clk);
      guard++;
      if (guard > tick_timeout)
        $fatal(1, "Tick timeout after %0d cycles.", guard);
    end

    updates++;
  endtask

  task automatic clamp_sample(input int sample, input bit training);
    x_set_en_all = '0;
    x_obs_flat_all = '0;

    for (int j=0; j<INPUTS; j++) begin
      x_set_en_all[INPUT_LAYER][j] = 1'b1;
      x_obs_flat_all[INPUT_LAYER][32*j +: 32] =
          f2b(x_samples[sample][j]);
    end

    if (training) begin
      for (int i=0; i<OUTPUTS; i++) begin
        x_set_en_all[0][i] = 1'b1;
        x_obs_flat_all[0][32*i +: 32] =
            f2b(y_targets[sample][i]);
      end
    end
  endtask

  // ------------------------------------------------------------
  // Evaluation and reporting
  // ------------------------------------------------------------

  task automatic evaluate(output real mse);
    real prediction, difference;

    mse = 0.0;
    learn_en = 1'b0;

    for (int s=0; s<samples; s++) begin
      clamp_sample(s, 1'b0);

      repeat (eval_ticks)
        do_tick();

      for (int i=0; i<OUTPUTS; i++) begin
        prediction = b2f(output_ieee[i]);

        if (
          prediction != prediction ||
          prediction > 1.0e300 ||
          prediction < -1.0e300
        )
          $fatal(1, "Non-finite prediction at sample %0d.", s);

        difference = prediction - y_targets[s][i];
        mse += difference*difference;
      end
    end

    mse /= real'(samples*OUTPUTS);
  endtask

  task automatic write_result(input int epoch, input real mse);
    $display(
      "[TB] Epoch %0d MSE=%.9g updates=%0d cycles=%0d",
      epoch, mse, updates, cycles
    );

    $fwrite(csv_fd, "%0d,%.12g,%0d,%0d\n",
            epoch, mse, updates, cycles);
    $fflush(csv_fd);
  endtask

  // ------------------------------------------------------------
  // Main
  // ------------------------------------------------------------

  initial begin
    real mse;

    rst_n = 1'b0;
    start_tick = 1'b0;
    learn_en = 1'b0;
    x_set_en_all = '0;
    x_obs_flat_all = '0;

    configure();

    $display("[TB] Layers input->output: %s", LAYERS);
    $display("[TB] Activations: %s", ACTIVATIONS);
    $display("[TB] Dataset=%s samples=%0d seed=%0d",
             dataset, samples, seed);
    $display("[TB] Settle=%0d train=%0d eval=%0d epochs=%0d",
             settle_ticks, train_ticks, eval_ticks, epochs);

    build_teacher();

    if (print_teacher)
      report_teacher();

    build_dataset();

    repeat (5) @(negedge clk);
    rst_n = 1'b1;
    repeat (2) @(negedge clk);

    $display("[TB] Actual core alpha=%g gamma=%g",
      b2f(uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[0].u_core.ALPHA_IEEE),
      b2f(uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[0].u_core.GAMMA_IEEE)
    );

    csv_fd = $fopen(csv_path, "w");
    if (csv_fd == 0)
      $fatal(1, "Cannot open %s.", csv_path);

    $fwrite(csv_fd, "epoch,mse,updates,cycles\n");

    evaluate(mse);
    write_result(0, mse);

    for (int epoch=1; epoch<=epochs; epoch++) begin
      for (int s=0; s<samples; s++) begin
        clamp_sample(s, 1'b1);

        learn_en = 1'b0;
        repeat (settle_ticks)
          do_tick();

        learn_en = 1'b1;
        repeat (train_ticks)
          do_tick();
      end

      evaluate(mse);
      write_result(epoch, mse);
    end

    $fclose(csv_fd);
    $finish;
  end

endmodule

`default_nettype wire