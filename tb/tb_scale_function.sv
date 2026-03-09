// ======================================================================
// tb_scale_function.sv
//
// Generic 3-layer predictive-coding scaling testbench
//
// dims: top->hidden->bottom = K2 -> K1 -> K0
// K_LUT bottom->top = [K0, K1, K2]
//
// This is a scalable extension of the successful non-trivial 2->4->3 setup:
//   - hidden ReLU
//   - top/bottom linear
//   - structured, moderate teacher coefficients
//   - same train/eval protocol
//
// For K2=2, K1=4, K0=3 this matches the same task family you just validated.
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_scale_function;
  `include "tb/tb_logger.sv"

  // --------------------------------------------------------------------
  // Scaling parameters
  // --------------------------------------------------------------------
  localparam int K0 = 8;
  localparam int K1 = 16;
  localparam int K2 = 8;

  localparam int NUM_LAYERS = 3;
  localparam int K_LUT[NUM_LAYERS] = '{K0, K1, K2};

  // --------------------------------------------------------------------
  // Training hyperparameters
  // --------------------------------------------------------------------
  localparam real ALPHA_R = 0.05;
  localparam real GAMMA_R = 0.10;

  localparam int INFER_TICKS_PER_SAMPLE = 200;
  localparam int LEARN_TICKS_PER_SAMPLE = 20;
  localparam int EVAL_SETTLE_TICKS      = 2000;
  localparam int EPOCHS                 = 25;

  localparam int MAX_K = 16;
  localparam int NUM_SAMPLES = 16; // start modestly
  string CSV_PATH = "runs/scale_8_16_8.csv";

  // Convergence criterion
  localparam real CONV_MSE_THRESH = 1.0e-2;

  // --------------------------------------------------------------------
  // Clock/reset
  // --------------------------------------------------------------------
  logic clk, rst_n;

  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  initial begin
    rst_n = 1'b0;
    #50 rst_n = 1'b1;
  end

  // --------------------------------------------------------------------
  // DUT IO
  // --------------------------------------------------------------------
  logic start_tick;
  logic busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  localparam act_kind_e ACT_LUT[NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU, ACT_LINEAR};

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .M0(0),
    .ACT_LUT(ACT_LUT)
  ) uut (
    .clk(clk),
    .rst_n(rst_n),
    .start_tick(start_tick),
    .alpha_ieee(alpha_ieee),
    .gamma_ieee(gamma_ieee),
    .x_set_en_all(x_set_en_all),
    .x_obs_flat_all(x_obs_flat_all),
    .busy_o(busy_o),
    .done_o(done_o)
  );

  // --------------------------------------------------------------------
  // DPI helpers
  // --------------------------------------------------------------------
  function automatic [31:0] f2b(input real r);
    f2b = real_to_f32(r);
  endfunction

  function automatic real b2f(input [31:0] b);
    int unsigned u;
    u = b;
    return f32_to_real(u);
  endfunction

  // --------------------------------------------------------------------
  // Dataset + teacher
  // --------------------------------------------------------------------
  real x_samples [NUM_SAMPLES][K2];
  real y_targets [NUM_SAMPLES][K0];

  real B_gt[K1][K2];
  real A_gt[K0][K1];

  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  // --------------------------------------------------------------------
  // Teacher generation
  //
  // Hidden rows use a 4-row motif, tiled across hidden neurons:
  //   [ 1.00, -0.20 ]
  //   [-0.15,  0.95 ]
  //   [ 0.70,  0.25 ]
  //   [ 0.20,  0.80 ]
  //
  // Each row attaches to a local adjacent input pair (j0, j1).
  //
  // Output rows use a 3-row motif, tiled across outputs and placed on
  // a local block of up to 4 hidden neurons:
  //   [ 0.90, -0.45,  0.30,  0.00 ]
  //   [-0.70,  0.85,  0.00,  0.25 ]
  //   [ 0.50,  0.60, -0.20,  0.35 ]
  //
  // For K2=2, K1=4, K0=3 this exactly matches your validated non-trivial
  // setup.
  // --------------------------------------------------------------------
  task automatic build_teacher();
    int i, j, o;

    // zero everything
    for (i = 0; i < K1; i++) begin
      for (j = 0; j < K2; j++) begin
        B_gt[i][j] = 0.0;
      end
    end

    for (o = 0; o < K0; o++) begin
      for (i = 0; i < K1; i++) begin
        A_gt[o][i] = 0.0;
      end
    end

    // -----------------------------
    // Hidden teacher B_gt
    // -----------------------------
    for (i = 0; i < K1; i++) begin
      int row_type;
      int j0, j1;

      row_type = i % 4;
      j0 = (K2 == 1) ? 0 : (i % K2);
      j1 = (K2 == 1) ? 0 : ((i + 1) % K2);

      case (row_type)
        0: begin
          B_gt[i][j0] =  1.00;
          if (K2 > 1) B_gt[i][j1] = -0.20;
        end
        1: begin
          B_gt[i][j0] = -0.15;
          if (K2 > 1) B_gt[i][j1] =  0.95;
        end
        2: begin
          B_gt[i][j0] =  0.70;
          if (K2 > 1) B_gt[i][j1] =  0.25;
        end
        default: begin
          B_gt[i][j0] =  0.20;
          if (K2 > 1) B_gt[i][j1] =  0.80;
        end
      endcase
    end

    // -----------------------------
    // Output teacher A_gt
    // -----------------------------
    for (o = 0; o < K0; o++) begin
      int row_type;
      int base;

      row_type = o % 3;
      base = (K1 <= 4) ? 0 : ((2*o) % K1);

      case (row_type)
        0: begin
          if (base + 0 < K1) A_gt[o][base + 0] =  0.90;
          if (base + 1 < K1) A_gt[o][base + 1] = -0.45;
          if (base + 2 < K1) A_gt[o][base + 2] =  0.30;
          if (base + 3 < K1) A_gt[o][base + 3] =  0.00;
        end
        1: begin
          if (base + 0 < K1) A_gt[o][base + 0] = -0.70;
          if (base + 1 < K1) A_gt[o][base + 1] =  0.85;
          if (base + 2 < K1) A_gt[o][base + 2] =  0.00;
          if (base + 3 < K1) A_gt[o][base + 3] =  0.25;
        end
        default: begin
          if (base + 0 < K1) A_gt[o][base + 0] =  0.50;
          if (base + 1 < K1) A_gt[o][base + 1] =  0.60;
          if (base + 2 < K1) A_gt[o][base + 2] = -0.20;
          if (base + 3 < K1) A_gt[o][base + 3] =  0.35;
        end
      endcase
    end
  endtask

  // --------------------------------------------------------------------
  // Dataset generation
  //
  // For K2=2:
  //   x0 = -1.2 + 2.4*s/(N-1)
  //   x1 = 1.1*sin(1.3*s)
  //
  // For K2>2:
  //   first two dims remain exactly that same pattern
  //   extra dims are mild sinusoidal channels so scaling does not switch
  //   to a completely different data family
  // --------------------------------------------------------------------
  task automatic build_dataset();
    real h[K1];
    real x[K2];
    int s, i, j, o;

    build_teacher();

    for (s = 0; s < NUM_SAMPLES; s++) begin
      // first two dims preserve the original successful setup
      if (K2 > 0) x[0] = -1.2 + 2.4 * real'(s) / real'(NUM_SAMPLES - 1);
      if (K2 > 1) x[1] =  1.1 * $sin(1.3 * real'(s));

      // extra dims: mild, smooth channels
      for (j = 2; j < K2; j++) begin
        real a, b, w1, w2;
        a  = 0.55 + 0.05 * real'(j);
        b  = 0.30 + 0.03 * real'(j);
        w1 = 0.70 + 0.12 * real'(j);
        w2 = 0.45 + 0.09 * real'(j);
        x[j] = a * $sin(w1 * real'(s)) + b * $cos(w2 * real'(s));
      end

      for (j = 0; j < K2; j++) begin
        x_samples[s][j] = x[j];
      end

      // h = ReLU(B_gt * x)
      for (i = 0; i < K1; i++) begin
        real acc;
        acc = 0.0;
        for (j = 0; j < K2; j++) begin
          acc += B_gt[i][j] * x[j];
        end
        h[i] = relu_r(acc);
      end

      // y = A_gt * h
      for (o = 0; o < K0; o++) begin
        real acc;
        acc = 0.0;
        for (i = 0; i < K1; i++) begin
          acc += A_gt[o][i] * h[i];
        end
        y_targets[s][o] = acc;
      end
    end
  endtask

  // --------------------------------------------------------------------
  // Tick driver
  // --------------------------------------------------------------------
  logic start_q, done_q, done_edge;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q <= 1'b0;
    else        start_q <= start_tick;
  end

  wire start_edge_tb = start_tick & ~start_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_q    <= 1'b0;
      done_edge <= 1'b0;
    end else begin
      if (start_edge_tb) done_edge <= 1'b0;
      done_q <= done_o;
      if (done_o & ~done_q) done_edge <= 1'b1;
    end
  end

  task automatic do_tick();
    int guard;
    guard = 0;

    @(posedge clk) start_tick = 1'b1;
    @(posedge clk) start_tick = 1'b0;

    while (!done_edge) begin
      @(posedge clk);
      guard++;
      if (guard > 8192) $fatal("[TB] tick deadlock");
    end
  endtask

  // --------------------------------------------------------------------
  // Clamp helpers
  // --------------------------------------------------------------------
  task automatic clear_clamps();
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  endtask

  task automatic clamp_top_bottom(input int s);
    clear_clamps();

    // top clamp
    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x_samples[s][i]);
    end

    // hidden free
    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0000_0000;
    end

    // bottom clamp
    for (int o = 0; o < K0; o++) begin
      x_set_en_all[0][o] = 1'b1;
      x_obs_flat_all[0][32*o +: 32] = f2b(y_targets[s][o]);
    end
  endtask

  task automatic clamp_top_only(input int s);
    clear_clamps();

    // top clamped
    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x_samples[s][i]);
    end

    // hidden free
    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0000_0000;
    end

    // bottom free
    for (int o = 0; o < K0; o++) begin
      x_set_en_all[0][o] = 1'b0;
      x_obs_flat_all[0][32*o +: 32] = 32'h0000_0000;
    end
  endtask

  // --------------------------------------------------------------------
  // Rate modes
  // --------------------------------------------------------------------
  task automatic set_rates_infer();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_learn();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_eval();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // --------------------------------------------------------------------
  // Metrics
  // --------------------------------------------------------------------
  function automatic real mse_sample(input int sidx);
    real acc;
    acc = 0.0;

    for (int o = 0; o < K0; o++) begin
      real pred, d;
      pred = b2f(uut.x_state_global[0][o]);
      d    = pred - y_targets[sidx][o];
      acc += d*d;
    end

    return acc / real'(K0);
  endfunction

  function automatic real mse_dataset();
    real acc;
    acc = 0.0;

    set_rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_top_only(s);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      acc += mse_sample(s);
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  task automatic print_teacher_summary();
    $display("[TB] Teacher summary:");
    for (int i = 0; i < K1; i++) begin
      $write("[TB] B_gt row %0d :", i);
      for (int j = 0; j < K2; j++) begin
        $write(" %0.4f", B_gt[i][j]);
      end
      $write("\n");
    end

    for (int o = 0; o < K0; o++) begin
      $write("[TB] A_gt row %0d :", o);
      for (int i = 0; i < K1; i++) begin
        $write(" %0.4f", A_gt[o][i]);
      end
      $write("\n");
    end
  endtask

  // --------------------------------------------------------------------
  // Main
  // --------------------------------------------------------------------
  initial begin
    real mse0, msep;
    integer conv_epoch;
    integer conv_ticks;

    start_tick = 1'b0;
    clear_clamps();
    build_dataset();

    conv_epoch = -1;
    conv_ticks = -1;

    wait(rst_n);
    repeat (5) @(posedge clk);

    csv_open(CSV_PATH, "epoch,mse");

    mse0 = mse_dataset();

    $display("[TB] ==================================================");
    $display("[TB] Scaling experiment");
    $display("[TB] dims top->hidden->bottom = %0d -> %0d -> %0d", K2, K1, K0);
    $display("[TB] NUM_SAMPLES = %0d", NUM_SAMPLES);
    $display("[TB] ALPHA_R = %0.6f", ALPHA_R);
    $display("[TB] GAMMA_R = %0.6f", GAMMA_R);
    $display("[TB] INFER_TICKS_PER_SAMPLE = %0d", INFER_TICKS_PER_SAMPLE);
    $display("[TB] LEARN_TICKS_PER_SAMPLE = %0d", LEARN_TICKS_PER_SAMPLE);
    $display("[TB] EVAL_SETTLE_TICKS = %0d", EVAL_SETTLE_TICKS);
    $display("[TB] CONV_MSE_THRESH = %0.6f", CONV_MSE_THRESH);
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] ==================================================");

    print_teacher_summary();

    csv_row($sformatf("%0d,%f", 0, mse0));

    if ((conv_epoch < 0) && (mse0 < CONV_MSE_THRESH)) begin
      conv_epoch = 0;
      conv_ticks = 0;
    end

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_top_bottom(s);

        set_rates_infer();
        for (int t = 0; t < INFER_TICKS_PER_SAMPLE; t++) do_tick();

        set_rates_learn();
        for (int t = 0; t < LEARN_TICKS_PER_SAMPLE; t++) do_tick();
      end

      msep = mse_dataset();

      csv_row($sformatf("%0d,%f", ep+1, msep));
      $display("[TB] Epoch %0d  MSE = %f", ep+1, msep);

      if ((conv_epoch < 0) && (msep < CONV_MSE_THRESH)) begin
        conv_epoch = ep + 1;
        conv_ticks = (ep + 1) * NUM_SAMPLES * (INFER_TICKS_PER_SAMPLE + LEARN_TICKS_PER_SAMPLE);
      end
    end

    $display("[TB] ==================================================");
    if (conv_epoch >= 0) begin
      $display("[TB] Converged.");
      $display("[TB] Convergence epoch      = %0d", conv_epoch);
      $display("[TB] Ticks to convergence  = %0d", conv_ticks);
    end else begin
      $display("[TB] Did not reach convergence threshold within %0d epochs.", EPOCHS);
    end
    $display("[TB] Final dataset MSE = %f", msep);
    $display("[TB] ==================================================");

    csv_close();
    $finish;
  end

endmodule

`default_nettype wire