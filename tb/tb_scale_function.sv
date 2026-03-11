// ======================================================================
// tb_scale_function.sv
//
// Generic 3-layer predictive-coding scaling testbench
//
// dims: top->hidden->bottom = K2 -> K1 -> K0
// K_LUT bottom->top = [K0, K1, K2]
//
// Reusable for:
//   2 -> 4  -> 3
//   4 -> 8  -> 4
//   8 -> 16 -> 8
//
// Design goals:
//   - same source file for all experiments
//   - compile/elaboration-time overrides for K0/K1/K2/MAX_K
//   - runtime +plusargs for training settings / CSV path / grid sizes
//   - true multidimensional Cartesian grid dataset
//   - same teacher motif scaling rule as your current scalable TB
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_scale_function #(
  parameter int K0    = 3,
  parameter int K1    = 4,
  parameter int K2    = 2,
  parameter int MAX_K = 16
);
  `include "tb/tb_logger.sv"

  // --------------------------------------------------------------------
  // Derived constants
  // --------------------------------------------------------------------
  localparam int NUM_LAYERS = 3;
  localparam int K_LUT[NUM_LAYERS] = '{K0, K1, K2};

  // --------------------------------------------------------------------
  // Default training settings
  // These can be overridden by runtime plusargs
  // --------------------------------------------------------------------
  real ALPHA_R;
  real GAMMA_R;

  int INFER_TICKS_PER_SAMPLE;
  int LEARN_TICKS_PER_SAMPLE;
  int EVAL_SETTLE_TICKS;
  int EPOCHS;

  real CONV_MSE_THRESH;

  string CSV_PATH;

  // --------------------------------------------------------------------
  // Grid configuration
  //
  // nx_lut[j] = number of grid points along top/input dimension j
  //
  // Defaults:
  //   K2=2 -> 6x6 = 36
  //   K2=4 -> 3^4 = 81
  //   K2=8 -> 2^8 = 256
  //
  // These can also be overridden by plusargs:
  //   +NX0=...
  //   +NX1=...
  //   ...
  //   +NX7=...
  // --------------------------------------------------------------------
  int nx_lut [0:MAX_K-1];
  real x_low [0:MAX_K-1];
  real x_high[0:MAX_K-1];

  int NUM_SAMPLES;

  // Statically allocate to the maximum supported dataset size.
  //
  // Default intended max here is 256 (for 2^8). Give some headroom.
  localparam int MAX_SAMPLES = 1024;

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
  real x_samples [0:MAX_SAMPLES-1][0:MAX_K-1];
  real y_targets [0:MAX_SAMPLES-1][0:MAX_K-1];

  real B_gt[0:MAX_K-1][0:MAX_K-1];
  real A_gt[0:MAX_K-1][0:MAX_K-1];

  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  // --------------------------------------------------------------------
  // Runtime config
  // --------------------------------------------------------------------
  task automatic load_runtime_config();
    int ok_int;
    real ok_real;

    // -----------------------------
    // Training defaults
    // -----------------------------
    ALPHA_R = 0.05;
    GAMMA_R = 0.10;

    INFER_TICKS_PER_SAMPLE = 200;
    LEARN_TICKS_PER_SAMPLE = 20;
    EVAL_SETTLE_TICKS      = 2000;
    EPOCHS                 = 25;

    CONV_MSE_THRESH = 1.0e-2;

    CSV_PATH = "runs/scale.csv";

    // -----------------------------
    // Default grid sizes
    // -----------------------------
    for (int j = 0; j < MAX_K; j++) begin
      nx_lut[j] = 1;
    end

    if (K2 == 2) begin
      nx_lut[0] = 6; nx_lut[1] = 6;
    end
    else if (K2 == 4) begin
      nx_lut[0] = 3; nx_lut[1] = 3; nx_lut[2] = 3; nx_lut[3] = 3;
    end
    else if (K2 == 8) begin
      nx_lut[0] = 2; nx_lut[1] = 2; nx_lut[2] = 2; nx_lut[3] = 2;
      nx_lut[4] = 2; nx_lut[5] = 2; nx_lut[6] = 2; nx_lut[7] = 2;
    end
    else begin
      for (int j = 0; j < K2; j++) nx_lut[j] = 2;
    end

    // -----------------------------
    // Default coordinate ranges
    // -----------------------------
    for (int j = 0; j < MAX_K; j++) begin
      real span;
      span = 1.2 - 0.1 * real'(j);
      if (span < 0.4) span = 0.4;
      x_low[j]  = -span;
      x_high[j] =  span;
    end

    // Match your original 2D range more closely for first two dims
    if (K2 > 0) begin x_low[0]  = -1.2; x_high[0] =  1.2; end
    if (K2 > 1) begin x_low[1]  = -1.1; x_high[1] =  1.1; end

    // -----------------------------
    // Plusargs overrides
    // -----------------------------
    ok_real = 0.0;
    if ($value$plusargs("ALPHA=%f", ok_real)) ALPHA_R = ok_real;
    if ($value$plusargs("GAMMA=%f", ok_real)) GAMMA_R = ok_real;
    if ($value$plusargs("CONV_MSE=%f", ok_real)) CONV_MSE_THRESH = ok_real;

    ok_int = 0;
    if ($value$plusargs("INFER_TICKS=%d", ok_int)) INFER_TICKS_PER_SAMPLE = ok_int;
    if ($value$plusargs("LEARN_TICKS=%d", ok_int)) LEARN_TICKS_PER_SAMPLE = ok_int;
    if ($value$plusargs("EVAL_TICKS=%d", ok_int))  EVAL_SETTLE_TICKS      = ok_int;
    if ($value$plusargs("EPOCHS=%d", ok_int))      EPOCHS                 = ok_int;

    void'($value$plusargs("CSV=%s", CSV_PATH));

    // Grid sizes
    ok_int = 0; if ($value$plusargs("NX0=%d", ok_int)) nx_lut[0] = ok_int;
    ok_int = 0; if ($value$plusargs("NX1=%d", ok_int)) nx_lut[1] = ok_int;
    ok_int = 0; if ($value$plusargs("NX2=%d", ok_int)) nx_lut[2] = ok_int;
    ok_int = 0; if ($value$plusargs("NX3=%d", ok_int)) nx_lut[3] = ok_int;
    ok_int = 0; if ($value$plusargs("NX4=%d", ok_int)) nx_lut[4] = ok_int;
    ok_int = 0; if ($value$plusargs("NX5=%d", ok_int)) nx_lut[5] = ok_int;
    ok_int = 0; if ($value$plusargs("NX6=%d", ok_int)) nx_lut[6] = ok_int;
    ok_int = 0; if ($value$plusargs("NX7=%d", ok_int)) nx_lut[7] = ok_int;

    // Per-dimension ranges
    ok_real = 0.0; if ($value$plusargs("X0_LOW=%f",  ok_real)) x_low[0]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X0_HIGH=%f", ok_real)) x_high[0] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X1_LOW=%f",  ok_real)) x_low[1]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X1_HIGH=%f", ok_real)) x_high[1] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X2_LOW=%f",  ok_real)) x_low[2]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X2_HIGH=%f", ok_real)) x_high[2] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X3_LOW=%f",  ok_real)) x_low[3]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X3_HIGH=%f", ok_real)) x_high[3] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X4_LOW=%f",  ok_real)) x_low[4]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X4_HIGH=%f", ok_real)) x_high[4] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X5_LOW=%f",  ok_real)) x_low[5]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X5_HIGH=%f", ok_real)) x_high[5] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X6_LOW=%f",  ok_real)) x_low[6]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X6_HIGH=%f", ok_real)) x_high[6] = ok_real;
    ok_real = 0.0; if ($value$plusargs("X7_LOW=%f",  ok_real)) x_low[7]  = ok_real;
    ok_real = 0.0; if ($value$plusargs("X7_HIGH=%f", ok_real)) x_high[7] = ok_real;

    // -----------------------------
    // Compute total sample count
    // -----------------------------
    NUM_SAMPLES = 1;
    for (int j = 0; j < K2; j++) begin
      if (nx_lut[j] <= 0) begin
        $fatal(1, "[TB] NX%0d must be >= 1, got %0d", j, nx_lut[j]);
      end
      NUM_SAMPLES *= nx_lut[j];
    end

    if (NUM_SAMPLES > MAX_SAMPLES) begin
      $fatal(1, "[TB] NUM_SAMPLES=%0d exceeds MAX_SAMPLES=%0d. Increase MAX_SAMPLES.",
             NUM_SAMPLES, MAX_SAMPLES);
    end
  endtask

  // --------------------------------------------------------------------
  // Teacher generation
  //
  // Hidden rows: tiled 4-row motif over adjacent input pairs
  // Output rows: tiled 3-row motif over local hidden blocks
  // --------------------------------------------------------------------
  task automatic build_teacher();
    int i, j, o;

    for (i = 0; i < MAX_K; i++) begin
      for (j = 0; j < MAX_K; j++) begin
        B_gt[i][j] = 0.0;
        A_gt[i][j] = 0.0;
      end
    end

    // Hidden teacher B_gt
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

    // Output teacher A_gt
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
  // Build dataset using a true Cartesian grid over the K2 top dims
  // --------------------------------------------------------------------
  task automatic build_dataset();
    real x[K2];
    real h[K1];
    int idx[0:MAX_K-1];
    int s;

    build_teacher();

    for (int j = 0; j < MAX_K; j++) idx[j] = 0;

    for (s = 0; s < NUM_SAMPLES; s++) begin
      // Current grid point
      for (int j = 0; j < K2; j++) begin
        if (nx_lut[j] == 1) begin
          x[j] = 0.5 * (x_low[j] + x_high[j]);
        end else begin
          x[j] = x_low[j]
               + (x_high[j] - x_low[j]) * real'(idx[j]) / real'(nx_lut[j] - 1);
        end
        x_samples[s][j] = x[j];
      end

      // h = ReLU(B_gt * x)
      for (int i = 0; i < K1; i++) begin
        real acc;
        acc = 0.0;
        for (int j = 0; j < K2; j++) begin
          acc += B_gt[i][j] * x[j];
        end
        h[i] = relu_r(acc);
      end

      // y = A_gt * h
      for (int o = 0; o < K0; o++) begin
        real acc;
        acc = 0.0;
        for (int i = 0; i < K1; i++) begin
          acc += A_gt[o][i] * h[i];
        end
        y_targets[s][o] = acc;
      end

      // Mixed-radix increment
      for (int j = 0; j < K2; j++) begin
        idx[j]++;
        if (idx[j] < nx_lut[j]) begin
          break;
        end else begin
          idx[j] = 0;
        end
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

    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x_samples[s][i]);
    end

    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0000_0000;
    end

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

  task automatic print_config_summary();
    $display("[TB] ==================================================");
    $display("[TB] Scaling experiment");
    $display("[TB] dims top->hidden->bottom = %0d -> %0d -> %0d", K2, K1, K0);
    $display("[TB] MAX_K = %0d", MAX_K);
    $display("[TB] NUM_SAMPLES = %0d", NUM_SAMPLES);
    $display("[TB] ALPHA_R = %0.6f", ALPHA_R);
    $display("[TB] GAMMA_R = %0.6f", GAMMA_R);
    $display("[TB] INFER_TICKS_PER_SAMPLE = %0d", INFER_TICKS_PER_SAMPLE);
    $display("[TB] LEARN_TICKS_PER_SAMPLE = %0d", LEARN_TICKS_PER_SAMPLE);
    $display("[TB] EVAL_SETTLE_TICKS = %0d", EVAL_SETTLE_TICKS);
    $display("[TB] EPOCHS = %0d", EPOCHS);
    $display("[TB] CONV_MSE_THRESH = %0.6f", CONV_MSE_THRESH);
    $display("[TB] CSV_PATH = %s", CSV_PATH);
    for (int j = 0; j < K2; j++) begin
      $display("[TB] dim %0d : NX=%0d  range=[%0.4f,%0.4f]",
               j, nx_lut[j], x_low[j], x_high[j]);
    end
    $display("[TB] ==================================================");
  endtask

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

    load_runtime_config();
    build_dataset();

    conv_epoch = -1;
    conv_ticks = -1;

    wait(rst_n);
    repeat (5) @(posedge clk);

    csv_open(CSV_PATH, "epoch,mse");

    print_config_summary();

    mse0 = mse_dataset();

    $display("[TB] Initial MSE = %f", mse0);
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
        conv_ticks = (ep + 1) * NUM_SAMPLES
                   * (INFER_TICKS_PER_SAMPLE + LEARN_TICKS_PER_SAMPLE);
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