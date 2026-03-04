// ======================================================================
// tb_pc3_2_1_3_hidden_relu_net_mse.sv
//
// 3-layer pc_network_nlayer with dims (top->hidden->bottom) = 2 -> 1 -> 3
// Layer indices in RTL: [0]=bottom (K0=3), [1]=hidden (K1=1), [2]=top (K2=2)
//
// Activations:
//   - hidden: ReLU
//   - top, bottom: linear
//
// Teacher:
//   h = ReLU(B_gt * x)     where B_gt is 1x2
//   y = A_gt * h           where A_gt is 3x1
//
// Schedule per sample (match the working TB):
//   1) Inference settle: alpha=0, gamma>0, clamp top+bottom, hidden free
//   2) Learning ticks:   alpha>0, gamma>0, clamp top+bottom, hidden free
// Eval clamps top only.
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_zero_loss;

  // ------------------------------------------------------------
  // Network shape
  // ------------------------------------------------------------
  localparam int K0 = 3;    // bottom (output)
  localparam int K1 = 1;    // hidden
  localparam int K2 = 2;    // top (input)

  localparam int NUM_LAYERS = 3;
  localparam int K_LUT[NUM_LAYERS] = '{K0, K1, K2};

  // Must be >= max(K0,K1,K2)
  localparam int MAX_K = 3;

  // ------------------------------------------------------------
  // Hyperparameters / schedule
  // ------------------------------------------------------------
  localparam real ALPHA_R = 0.02;
  localparam real GAMMA_R = 0.10;

  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 25;

  localparam int  INFER_TICKS_PER_SAMPLE = 400;
  localparam int  LEARN_TICKS_PER_SAMPLE = 20;
  localparam int  EVAL_SETTLE_TICKS      = 800;

  // ------------------------------------------------------------
  // Clock + reset
  // ------------------------------------------------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end
  initial begin
    rst_n = 1'b0;
    #50 rst_n = 1'b1;
  end

  // ------------------------------------------------------------
  // DUT wiring
  // ------------------------------------------------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  // Activations:
  // layer index: [0]=bottom, [1]=hidden, [2]=top
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_LINEAR};
  localparam act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_LINEAR};

  initial begin
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
    start_tick     = 1'b0;
  end

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .M0(0),
    .ACT_PRESYN_LUT(ACT_PRESYN_LUT),
    .ACT_STATE_LUT(ACT_STATE_LUT)
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

  // ------------------------------------------------------------
  // DPI helpers
  // ------------------------------------------------------------
  function automatic [31:0] f2b (input real r);
    f2b = real_to_f32(r);
  endfunction

  function automatic real b2f (input [31:0] b);
    int unsigned u; u = b;
    return f32_to_real(u);
  endfunction

  initial begin
    if (f2b(1.0) !== 32'h3F800000)
      $fatal("[TB] DPI pack/unpack failed");
  end

  // ------------------------------------------------------------
  // Teacher: x -> h -> y  with K1=1
  // ------------------------------------------------------------
  real B_gt[K1][K2];
  real A_gt[K0][K1];

  // Dataset storage
  real x2_samples [NUM_SAMPLES][K2];
  real y_targets  [NUM_SAMPLES][K0];

  function automatic real relu_r(input real x);
    return (x > 0.0) ? x : 0.0;
  endfunction

  task automatic build_dataset();
    real t;
    real x0, x1;
    real h;
    real y0, y1, y2;

    // Choose teacher weights (1 hidden unit)
    B_gt[0][0] =  1.10;
    B_gt[0][1] = -0.70;

    A_gt[0][0] =  1.00;
    A_gt[1][0] = -0.80;
    A_gt[2][0] =  0.60;

    for (int s = 0; s < NUM_SAMPLES; s++) begin
      // simple deterministic sweep
      t  = real'(s) / real'(NUM_SAMPLES-1);
      x0 = -1.2 + 2.4*t;          // [-1.2, 1.2]
      x1 =  1.1 - 2.2*t;          // [ 1.1,-1.1] (anti-correlated)

      x2_samples[s][0] = x0;
      x2_samples[s][1] = x1;

      // h = ReLU(B*x)
      h  = relu_r(B_gt[0][0]*x0 + B_gt[0][1]*x1);

      // y = A*h  (3 outputs)
      y0 = A_gt[0][0] * h;
      y1 = A_gt[1][0] * h;
      y2 = A_gt[2][0] * h;

      y_targets[s][0] = y0;
      y_targets[s][1] = y1;
      y_targets[s][2] = y2;
    end
  endtask

  // ------------------------------------------------------------
  // Tick driver
  // ------------------------------------------------------------
  logic start_q_tb, done_q_tb, done_edge_flag;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q_tb <= 1'b0;
    else        start_q_tb <= start_tick;
  end
  wire start_edge_tb = start_tick & ~start_q_tb;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_q_tb      <= 1'b0;
      done_edge_flag <= 1'b0;
    end else begin
      if (start_edge_tb) done_edge_flag <= 1'b0;
      done_q_tb <= done_o;
      if (done_o & ~done_q_tb) done_edge_flag <= 1'b1;
    end
  end

  task automatic do_tick();
    int guard = 0;

    @(posedge clk); start_tick = 1'b1;
    @(posedge clk); start_tick = 1'b0;

    while (!done_edge_flag) begin
      @(posedge clk);
      guard++;
      if (guard > 8192) $fatal("[TB] Tick deadlock.");
    end
  endtask

  // ------------------------------------------------------------
  // Clamp helpers
  // ------------------------------------------------------------
  task automatic clear_all_clamps();
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  endtask

  // Train/infer: clamp TOP (x2) and BOTTOM (y); hidden free
  task automatic clamp_top_bottom(input int s);
    clear_all_clamps();

    // L2 (top / input) clamp ON for i < K2
    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end

    // L1 (hidden) clamp OFF for i < K1
    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0;
    end

    // L0 (bottom / output) clamp ON for i < K0
    for (int i = 0; i < K0; i++) begin
      x_set_en_all[0][i] = 1'b1;
      x_obs_flat_all[0][32*i +: 32] = f2b(y_targets[s][i]);
    end
  endtask

  // Eval: clamp TOP only; let hidden+bottom settle freely
  task automatic clamp_top_only(input int s);
    clear_all_clamps();

    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end

    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0;
    end

    for (int i = 0; i < K0; i++) begin
      x_set_en_all[0][i] = 1'b0;
      x_obs_flat_all[0][32*i +: 32] = 32'h0;
    end
  endtask

  // ------------------------------------------------------------
  // Rate setters (match working TB: gamma stays ON during learning)
  // ------------------------------------------------------------
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

  // ------------------------------------------------------------
  // MSE evaluation
  // ------------------------------------------------------------
  function automatic real mse_sample(input int sidx);
    real acc = 0.0;
    for (int i = 0; i < K0; i++) begin
      real pred = b2f(uut.x_state_global[0][i]);
      real t    = y_targets[sidx][i];
      real d    = pred - t;
      acc += d*d;
    end
    return acc / real'(K0);
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;

    set_rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_top_only(s);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++)
        do_tick();
      acc += mse_sample(s);
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  // ------------------------------------------------------------
  // Main training loop
  // ------------------------------------------------------------
  initial begin
    real mse0, msep;

    build_dataset();

    wait (rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Begin training dims 2->1->3 (hidden ReLU), gamma ON during learn");

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin
        // Phase 1: inference
        clamp_top_bottom(s);
        set_rates_infer();
        for (int t = 0; t < INFER_TICKS_PER_SAMPLE; t++)
          do_tick();

        // Phase 2: learning
        set_rates_learn();
        for (int t = 0; t < LEARN_TICKS_PER_SAMPLE; t++)
          do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // Final dump
    set_rates_eval();
    for (int s = 0; s < 10; s++) begin
      clamp_top_only(s);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++)
        do_tick();

      $write("[TB] s=%0d x=[", s);
      for (int j = 0; j < K2; j++) $write(" %0.3f", x2_samples[s][j]);
      $write(" ]  target=[");
      for (int i = 0; i < K0; i++) $write(" %0.3f", y_targets[s][i]);
      $write(" ]  pred=[");
      for (int i = 0; i < K0; i++) $write(" %0.3f", b2f(uut.x_state_global[0][i]));
      $display(" ]");
    end

    $finish;
  end

endmodule

`default_nettype wire
