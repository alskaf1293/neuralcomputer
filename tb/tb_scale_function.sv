`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32(real r);
import "DPI-C" function real f32_to_real(int unsigned bits);

module tb_scale_function #(
  parameter string LAYERS = "2,4,3",
  parameter string ACTIVATIONS = "0,1,0",
  parameter int MAX_SAMPLES = 1024
);

  function automatic int list_length(input string text);
    int count;
    count = 1;
    for (int i=0; i<text.len(); i++)
      if (text.getc(i) == 44) count++;
    return count;
  endfunction

  function automatic int list_item(input string text, input int index);
    int field, value;
    bit seen;
    field = 0;
    value = 0;
    seen = 0;

    for (int i=0; i<text.len(); i++) begin
      if (text.getc(i) == 44) begin
        if (field == index) return seen ? value : -1;
        field++;
        value = 0;
        seen = 0;
      end else if (text.getc(i) >= 48 && text.getc(i) <= 57) begin
        value = 10*value + int'(text.getc(i)) - 48;
        seen = 1;
      end else if (text.getc(i) != 32) begin
        return -1;
      end
    end
    return (field == index && seen) ? value : -1;
  endfunction

  function automatic int maximum_width();
    int largest;
    largest = 1;
    for (int i=0; i<list_length(LAYERS); i++)
      if (list_item(LAYERS, i) > largest)
        largest = list_item(LAYERS, i);
    return largest;
  endfunction

  localparam int NUM_LAYERS = list_length(LAYERS);
  localparam int MAX_K = maximum_width();
  localparam int INPUT_LAYER = NUM_LAYERS-1;

  typedef int widths_t [NUM_LAYERS];
  typedef act_kind_e activations_t [NUM_LAYERS];

  function automatic widths_t make_widths();
    for (int l=0; l<NUM_LAYERS; l++)
      make_widths[l] =
        list_item(LAYERS, NUM_LAYERS-1-l) > 0
        ? list_item(LAYERS, NUM_LAYERS-1-l) : 1;
  endfunction

  function automatic activations_t make_activations();
    int kind;
    for (int l=0; l<NUM_LAYERS; l++) begin
      kind = list_item(ACTIVATIONS, NUM_LAYERS-1-l);
      make_activations[l] =
        act_kind_e'((kind >= 0 && kind <= 2) ? kind : 0);
    end
  endfunction

  localparam widths_t K_LUT = make_widths();
  localparam activations_t ACT_LUT = make_activations();
  localparam int INPUTS = K_LUT[INPUT_LAYER];
  localparam int OUTPUTS = K_LUT[0];

  logic clk = 0;
  logic rst_n = 0;
  logic start_tick = 0;
  logic learn_en = 0;
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
  for (genvar i=0; i<OUTPUTS; i++) begin : G_OUTPUT
    hf_rec2f32 convert_output (
      .in_rec(
        uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[i].u_core.x_i_eff
      ),
      .out_ieee(output_ieee[i])
    );
  end

  // Original regression settings; all can be overridden.
  int samples = 36;
  int epochs = 25;
  int settle_ticks = 0;
  int train_ticks = 20;
  int eval_ticks = 2000;
  int grid_points = 6;
  int seed = 0;
  int tick_timeout;

  string dataset = "grid";
  string csv_path = "runs/pc3_hidden_relu_train.csv";

  real x_low [MAX_K];
  real x_high [MAX_K];
  real x_samples [MAX_SAMPLES][MAX_K];
  real y_targets [MAX_SAMPLES][MAX_K];
  real teacher_w [NUM_LAYERS][MAX_K][MAX_K];
  real teacher_b [NUM_LAYERS][MAX_K];

  integer csv_fd;
  longint unsigned cycles = 0;
  longint unsigned ticks = 0;
  longint unsigned learning_ticks = 0;

  always @(posedge clk)
    if (!rst_n) cycles <= 0;
    else cycles <= cycles + 1;

  function automatic logic [31:0] f2b(input real value);
    return real_to_f32(value);
  endfunction

  function automatic real b2f(input logic [31:0] value);
    return f32_to_real(value);
  endfunction

  function automatic real activate(
    input real value, input act_kind_e kind
  );
    case (kind)
      ACT_RELU: return value > 0.0 ? value : 0.0;
      ACT_TANH: return $tanh(value);
      default: return value;
    endcase
  endfunction

  task automatic configure();
    real value, bound;
    int n;

    if (NUM_LAYERS < 2 || MAX_SAMPLES < 1)
      $fatal(1, "Invalid layer count or sample capacity.");
    if (list_length(ACTIVATIONS) != NUM_LAYERS)
      $fatal(1, "Specify one activation per layer.");

    for (int l=0; l<NUM_LAYERS; l++) begin
      if (list_item(LAYERS, l) < 1)
        $fatal(1, "Layer widths must be positive.");
      if (list_item(ACTIVATIONS, l) < 0 ||
          list_item(ACTIVATIONS, l) > 2)
        $fatal(1, "Activation codes: 0=linear, 1=ReLU, 2=tanh.");
    end

    tick_timeout = 32*MAX_K + 1024;

    void'($value$plusargs("N_SAMPLES=%d", samples));
    void'($value$plusargs("EPOCHS=%d", epochs));
    void'($value$plusargs("SETTLE_TICKS=%d", settle_ticks));
    void'($value$plusargs("TRAIN_TICKS=%d", train_ticks));
    void'($value$plusargs("EVAL_TICKS=%d", eval_ticks));
    void'($value$plusargs("GRID=%d", grid_points));
    void'($value$plusargs("SEED=%d", seed));
    void'($value$plusargs("TICK_TIMEOUT=%d", tick_timeout));
    void'($value$plusargs("DATASET=%s", dataset));
    void'($value$plusargs("CSV=%s", csv_path));

    for (int j=0; j<MAX_K; j++) begin
      bound = 1.2 - 0.1*real'(j);
      if (bound < 0.4) bound = 0.4;
      x_low[j] = -bound;
      x_high[j] = bound;

      if ($value$plusargs($sformatf("X%0d_LOW=%%f", j), value))
        x_low[j] = value;
      if ($value$plusargs($sformatf("X%0d_HIGH=%%f", j), value))
        x_high[j] = value;
      if (x_high[j] < x_low[j])
        $fatal(1, "Invalid input range.");
    end

    if (dataset == "grid") begin
      if (grid_points < 1) $fatal(1, "GRID must be positive.");
      samples = 1;
      for (int j=0; j<INPUTS; j++) begin
        if (samples > MAX_SAMPLES/grid_points)
          $fatal(1, "Grid exceeds MAX_SAMPLES.");
        samples *= grid_points;
      end
    end else if (dataset != "random" && dataset != "diagonal")
      $fatal(1, "DATASET must be grid, random, or diagonal.");

    if (samples < 1 || samples > MAX_SAMPLES ||
        epochs < 0 || settle_ticks < 0 || train_ticks < 0 ||
        eval_ticks < 1 || tick_timeout < 1)
      $fatal(1, "Invalid sample count or tick budget.");

    for (int l=0; l<NUM_LAYERS; l++) begin
      n = l == INPUT_LAYER ? K_LUT[l-1] : K_LUT[l+1];
      if (l == 0 && (K_LUT[l] > 8 || n > 16))
        $fatal(1, "Layer 0 exceeds its 8x16 initialization table.");
      if (l == 1 && (K_LUT[l] > 16 || n > 8))
        $fatal(1, "Layer 1 exceeds its 16x8 initialization table.");
    end

    if (NUM_LAYERS > 3)
      $display("[TB] NOTE: RTL layers above index 1 initialize to zero.");
  endtask

    // Teacher indexing: input -> output.
  localparam int MAX_TEACHER_LAYERS = 16;
  localparam int MAX_TEACHER_WIDTH = 64;

  int teacher_layers;
  int teacher_width [MAX_TEACHER_LAYERS];
  int teacher_act [MAX_TEACHER_LAYERS-1];

  real file_weights
    [MAX_TEACHER_LAYERS-1][MAX_TEACHER_WIDTH][MAX_TEACHER_WIDTH];
  real file_biases
    [MAX_TEACHER_LAYERS-1][MAX_TEACHER_WIDTH];

  bit use_teacher_file = 0;
  string teacher_path;

  task automatic load_teacher(input string path);
    integer fd, status;
    string extra;

    fd = $fopen(path, "r");
    if (fd == 0)
      $fatal(1, "Cannot open teacher file: %s", path);

    status = $fscanf(fd, "%d", teacher_layers);
    if (status != 1 ||
        teacher_layers < 2 ||
        teacher_layers > MAX_TEACHER_LAYERS)
      $fatal(1, "Invalid teacher layer count.");

    for (int l=0; l<teacher_layers; l++) begin
      status = $fscanf(fd, "%d", teacher_width[l]);
      if (status != 1 ||
          teacher_width[l] < 1 ||
          teacher_width[l] > MAX_TEACHER_WIDTH)
        $fatal(1, "Invalid teacher width at layer %0d.", l);
    end

    if (teacher_width[0] != INPUTS ||
        teacher_width[teacher_layers-1] != OUTPUTS)
      $fatal(1, "Teacher input/output widths must match the student.");

    for (int l=0; l<teacher_layers-1; l++) begin
      status = $fscanf(fd, "%d", teacher_act[l]);
      if (status != 1 || teacher_act[l] < 0 || teacher_act[l] > 2)
        $fatal(1, "Invalid teacher activation at layer %0d.", l+1);
    end

    for (int l=0; l<teacher_layers-1; l++) begin
      for (int i=0; i<teacher_width[l+1]; i++) begin
        for (int j=0; j<teacher_width[l]; j++) begin
          status = $fscanf(fd, "%f", file_weights[l][i][j]);
          if (status != 1)
            $fatal(1,
              "Missing weight: map=%0d neuron=%0d input=%0d", l, i, j);
        end

        status = $fscanf(fd, "%f", file_biases[l][i]);
        if (status != 1)
          $fatal(1, "Missing bias: map=%0d neuron=%0d", l, i);
      end
    end

    status = $fscanf(fd, "%s", extra);
    if (status == 1)
      $fatal(1, "Unexpected trailing teacher data: %s", extra);

    $fclose(fd);
    $display("[TB] Loaded teacher: %s", path);
  endtask

    task automatic evaluate_teacher(input int sample);
    real current_values [MAX_TEACHER_WIDTH];
    real next_values [MAX_TEACHER_WIDTH];
    real acc;

    for (int j=0; j<INPUTS; j++)
      current_values[j] = x_samples[sample][j];

    for (int l=0; l<teacher_layers-1; l++) begin
      for (int i=0; i<teacher_width[l+1]; i++) begin
        acc = file_biases[l][i];

        for (int j=0; j<teacher_width[l]; j++)
          acc += file_weights[l][i][j]*current_values[j];

        next_values[i] = activate(acc, act_kind_e'(teacher_act[l]));

        if (next_values[i] != next_values[i] ||
            next_values[i] > 1.0e300 ||
            next_values[i] < -1.0e300)
          $fatal(1, "Non-finite teacher output at sample %0d.", sample);
      end

      for (int i=0; i<teacher_width[l+1]; i++)
        current_values[i] = next_values[i];
    end

    for (int i=0; i<OUTPUTS; i++)
      y_targets[sample][i] = current_values[i];
  endtask

  task automatic build_teacher();
    int n, base, j0, j1;
    real value;

    for (int l=0; l<NUM_LAYERS; l++)
      for (int i=0; i<MAX_K; i++) begin
        teacher_b[l][i] = 0.0;
        for (int j=0; j<MAX_K; j++)
          teacher_w[l][i][j] = 0.0;
      end

    for (int l=0; l<INPUT_LAYER; l++) begin
      n = K_LUT[l+1];
      for (int i=0; i<K_LUT[l]; i++) begin
        if (l == 0) begin
          base = n <= 4 ? 0 : (2*i)%n;
          for (int j=0; j<n; j++) begin
            case (i%3)
              0: case (j-base)
                0: teacher_w[l][i][j] = 0.90;
                1: teacher_w[l][i][j] = -0.45;
                2: teacher_w[l][i][j] = 0.30;
                default: ;
              endcase
              1: case (j-base)
                0: teacher_w[l][i][j] = -0.70;
                1: teacher_w[l][i][j] = 0.85;
                3: teacher_w[l][i][j] = 0.25;
                default: ;
              endcase
              2: case (j-base)
                0: teacher_w[l][i][j] = 0.50;
                1: teacher_w[l][i][j] = 0.60;
                2: teacher_w[l][i][j] = -0.20;
                3: teacher_w[l][i][j] = 0.35;
                default: ;
              endcase
            endcase
          end
        end else begin
          j0 = (2*(i/4))%n;
          j1 = (j0+1)%n;
          case (i%4)
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

        for (int j=0; j<n; j++)
          if ($value$plusargs(
            $sformatf("W_%0d_%0d_%0d=%%f", l, i, j), value
          ))
            teacher_w[l][i][j] = value;

        if ($value$plusargs(
          $sformatf("B_%0d_%0d=%%f", l, i), value
        ))
          teacher_b[l][i] = value;
      end
    end
  endtask

  task automatic build_dataset();
    real values [NUM_LAYERS][MAX_K];
    real fraction, acc;
    int remainder, digit;

    void'($urandom(seed));

    for (int s=0; s<samples; s++) begin
      remainder = s;
      for (int j=INPUTS-1; j>=0; j--) begin
        if (dataset == "grid") begin
          digit = remainder%grid_points;
          remainder /= grid_points;
          fraction = grid_points == 1
            ? 0.5 : real'(digit)/real'(grid_points-1);
          x_samples[s][j] =
            x_low[j] + (x_high[j]-x_low[j])*fraction;
        end else if (dataset == "diagonal") begin
          fraction = samples == 1
            ? 0.5 : real'(s)/real'(samples-1);
          x_samples[s][j] = j%2 == 0
            ? -1.0+2.0*fraction : 1.0-2.0*fraction;
        end else begin
          fraction = real'($urandom())/4294967295.0;
          x_samples[s][j] =
            x_low[j] + (x_high[j]-x_low[j])*fraction;
        end
        values[INPUT_LAYER][j] = x_samples[s][j];
      end

      if (use_teacher_file) begin
        evaluate_teacher(s);
      end else begin
        for (int l=INPUT_LAYER-1; l>=0; l--)
          for (int i=0; i<K_LUT[l]; i++) begin
            acc = teacher_b[l][i];
            for (int j=0; j<K_LUT[l+1]; j++)
              acc += teacher_w[l][i][j]*values[l+1][j];
            values[l][i] = activate(acc, ACT_LUT[l]);
          end

        for (int i=0; i<OUTPUTS; i++)
          y_targets[s][i] = values[0][i];
      end
    end
  endtask

  task automatic clamp_sample(input int sample, input bit training);
    x_set_en_all = '0;
    x_obs_flat_all = '0;

    for (int j=0; j<INPUTS; j++) begin
      x_set_en_all[INPUT_LAYER][j] = 1;
      x_obs_flat_all[INPUT_LAYER][32*j +: 32] =
        f2b(x_samples[sample][j]);
    end

    if (training)
      for (int i=0; i<OUTPUTS; i++) begin
        x_set_en_all[0][i] = 1;
        x_obs_flat_all[0][32*i +: 32] =
          f2b(y_targets[sample][i]);
      end
  endtask

  task automatic do_tick();
    int guard;
    guard = 0;

    @(negedge clk);
    start_tick = 1;
    @(negedge clk);
    start_tick = 0;

    while (!done_o) begin
      @(negedge clk);
      guard++;
      if (guard > tick_timeout)
        $fatal(1, "Tick timeout.");
    end

    ticks++;
    if (learn_en) learning_ticks++;
  endtask

  task automatic evaluate(output real mse);
    real prediction, difference;
    mse = 0.0;
    learn_en = 0;

    for (int s=0; s<samples; s++) begin
      clamp_sample(s, 0);
      repeat (eval_ticks) do_tick();

      for (int i=0; i<OUTPUTS; i++) begin
        prediction = b2f(output_ieee[i]);
        if (prediction != prediction ||
            prediction > 1.0e300 || prediction < -1.0e300)
          $fatal(1, "Non-finite prediction at sample %0d.", s);
        difference = prediction-y_targets[s][i];
        mse += difference*difference;
      end
    end
    mse /= real'(samples*OUTPUTS);
  endtask

  task automatic report(input int epoch, input real mse);
    $display(
      "[TB] Epoch %0d MSE=%.9g ticks=%0d learning_ticks=%0d cycles=%0d",
      epoch, mse, ticks, learning_ticks, cycles
    );
    $fwrite(csv_fd, "%0d,%.12g,%0d,%0d,%0d\n",
      epoch, mse, ticks, learning_ticks, cycles);
    $fflush(csv_fd);
  endtask

  initial begin
    real mse;

    x_set_en_all = '0;
    x_obs_flat_all = '0;

    configure();

    use_teacher_file =
      $value$plusargs("TEACHER_FILE=%s", teacher_path);

    if (use_teacher_file)
      load_teacher(teacher_path);
    else
      build_teacher();

    build_dataset();

    $display("[TB] Layers=%s activations=%s", LAYERS, ACTIVATIONS);
    $display("[TB] Dataset=%s samples=%0d", dataset, samples);
    $display("[TB] Core alpha=%g gamma=%g",
      b2f(uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[0].u_core.ALPHA_IEEE),
      b2f(uut.G_LAYER[0].G_LAYER_INST_L0.L.G_NEURON[0].u_core.GAMMA_IEEE));
    $display("[TB] Epochs=%0d settle=%0d train=%0d eval=%0d",
      epochs, settle_ticks, train_ticks, eval_ticks);

    repeat (5) @(negedge clk);
    rst_n = 1;
    repeat (2) @(negedge clk);

    csv_fd = $fopen(csv_path, "w");
    if (csv_fd == 0)
      $fatal(1, "Cannot open %s; create its parent directory.", csv_path);

    $fwrite(csv_fd, "epoch,mse,ticks,learning_ticks,cycles\n");

    evaluate(mse);
    report(0, mse);

    for (int epoch=1; epoch<=epochs; epoch++) begin
      for (int s=0; s<samples; s++) begin
        clamp_sample(s, 1);
        learn_en = 0;
        repeat (settle_ticks) do_tick();
        learn_en = 1;
        repeat (train_ticks) do_tick();
      end
      evaluate(mse);
      report(epoch, mse);
    end

    $fclose(csv_fd);
    $finish;
  end

endmodule

`default_nettype wire