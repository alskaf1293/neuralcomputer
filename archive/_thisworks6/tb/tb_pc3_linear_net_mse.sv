// ======================================================================
// tb_pc3_two_two_two_affine_net_mse.sv
//
// 3-layer pc_network_nlayer, K0=2 (bottom/output), K1=2 (hidden), K2=2 (top/input)
// All-linear activations.
//
// Teacher (2D output, with bias):
//   y = W*x + b
//   x in R^2, y in R^2
//
// Schedule per sample:
//   1) Inference settle: alpha=0, gamma>0 (top clamped, bottom clamped, hidden free)
//   2) Learning ticks:   alpha>0, gamma>0 (keep settling while updating weights)
//
// Eval:
//   top clamped, hidden free, bottom free; alpha=0, gamma>0;
//   read bottom states y_hat[0], y_hat[1]
//
// Notes:
// - This TB assumes your neuron core already implements a bias lane internally
//   (i.e., θ has N+1 with x_bias = 1, and θ_bias updated).
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_linear_net_mse;

  // -------------------------
  // Shape
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int MAX_K      = 2;
  localparam int K_LUT[NUM_LAYERS] = '{2, 2, 2}; // [0]=bottom(y,2), [1]=hidden(2), [2]=top(x,2)

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Teacher + dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 20;

  // y = W*x + b, W is 2x2, b is 2
  real W_gt[2][2];
  real b_gt[2];

  real x_samp[NUM_SAMPLES][2]; // [s][0]=x1, [s][1]=x2
  real y_samp[NUM_SAMPLES][2]; // [s][0]=y1, [s][1]=y2

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.02;   // weight LR
  localparam real GAMMA_R = 0.10;   // state LR

  localparam int  INFER_TICKS_PER_SAMPLE = 250;
  localparam int  LEARN_TICKS_PER_SAMPLE = 60;
  localparam int  EVAL_SETTLE_TICKS      = 250;

  // -------------------------
  // Clock + reset
  // -------------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end
  initial begin
    rst_n = 1'b0;
    #50 rst_n = 1'b1;
  end

  // -------------------------
  // DUT signals
  // -------------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  // clamps: [layer][neuron], flat obs: [layer][32*neuron +: 32]
  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  // All-linear activations
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{ACT_LINEAR, ACT_LINEAR, ACT_LINEAR};
  localparam act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{ACT_LINEAR, ACT_LINEAR, ACT_LINEAR};

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .M0(0),
    .ACT_PRESYN_LUT(ACT_PRESYN_LUT),
    .ACT_STATE_LUT(ACT_STATE_LUT),
    .EXP(EXP),
    .SIG(SIG)
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

  // -------------------------
  // DPI helpers
  // -------------------------
  function automatic [31:0] f2b(input real r);
    f2b = real_to_f32(r);
  endfunction

  function automatic real b2f(input [31:0] b);
    int unsigned u; u = b;
    return f32_to_real(u);
  endfunction

  initial begin
    if (f2b(1.0) !== 32'h3F800000) $fatal("[TB] DPI float conversion broken.");
  end

  // -------------------------
  // Build dataset: y = W*x + b
  // -------------------------
  task automatic init_teacher();
    begin
      // Pick something well-conditioned
      W_gt[0][0] =  1.2;  W_gt[0][1] = -0.7;
      W_gt[1][0] =  0.4;  W_gt[1][1] =  1.5;

      b_gt[0] =  0.3;
      b_gt[1] = -0.2;
    end
  endtask

  task automatic build_dataset();
  int N_GRID;
  int s = 0;

  begin
    // assume NUM_SAMPLES is a perfect square
    N_GRID = $rtoi($sqrt(NUM_SAMPLES));

    for (int i = 0; i < N_GRID; i++) begin
      for (int j = 0; j < N_GRID; j++) begin
        // normalized coordinates in [0,1]
        real ti = real'(i) / real'(N_GRID-1);
        real tj = real'(j) / real'(N_GRID-1);

        // map to [-1, 1]
        real x1 = -1.0 + 2.0*ti;
        real x2 = -1.0 + 2.0*tj;

        x_samp[s][0] = x1;
        x_samp[s][1] = x2;

        y_samp[s][0] = W_gt[0][0]*x1 + W_gt[0][1]*x2 + b_gt[0];
        y_samp[s][1] = W_gt[1][0]*x1 + W_gt[1][1]*x2 + b_gt[1];

        s++;
      end
    end
  end
endtask


  // -------------------------
  // Rate modes
  // -------------------------
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

  // -------------------------
  // Tick driver: pulse start_tick and wait for done_o edge
  // -------------------------
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

  // -------------------------
  // Clamp helpers
  // layer 2 = top (input, 2 dims)
  // layer 1 = hidden (2 dims, free)
  // layer 0 = bottom (output, 2 dims)
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y1, input real y2);
    // top clamped to [x1, x2]
    x_set_en_all[2][0]            = 1'b1;
    x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1;
    x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]            = 1'b0;
    x_obs_flat_all[1][32*0 +: 32] = 32'h0000_0000;
    x_set_en_all[1][1]            = 1'b0;
    x_obs_flat_all[1][32*1 +: 32] = 32'h0000_0000;

    // bottom clamped to [y1, y2]
    x_set_en_all[0][0]            = 1'b1;
    x_obs_flat_all[0][32*0 +: 32] = f2b(y1);
    x_set_en_all[0][1]            = 1'b1;
    x_obs_flat_all[0][32*1 +: 32] = f2b(y2);
  endtask

  task automatic clamp_eval(input real x1, input real x2);
    // top clamped
    x_set_en_all[2][0]            = 1'b1;
    x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1;
    x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]            = 1'b0;
    x_obs_flat_all[1][32*0 +: 32] = 32'h0000_0000;
    x_set_en_all[1][1]            = 1'b0;
    x_obs_flat_all[1][32*1 +: 32] = 32'h0000_0000;

    // bottom free
    x_set_en_all[0][0]            = 1'b0;
    x_obs_flat_all[0][32*0 +: 32] = 32'h0000_0000;
    x_set_en_all[0][1]            = 1'b0;
    x_obs_flat_all[0][32*1 +: 32] = 32'h0000_0000;
  endtask

  // -------------------------
  // Readout + MSE (hierarchical state tap)
  // -------------------------
  function automatic real pred_bottom(input int k);
    return b2f(uut.x_state_global[0][k]); // bottom layer, neuron k (k=0..1)
  endfunction

  function automatic real mse_sample(input int sidx);
    real p0 = pred_bottom(0);
    real p1 = pred_bottom(1);
    real t0 = y_samp[sidx][0];
    real t1 = y_samp[sidx][1];
    real d0 = p0 - t0;
    real d1 = p1 - t1;
    // average per-dimension squared error
    return 0.5*(d0*d0 + d1*d1);
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;

    set_rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      acc += mse_sample(s);
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  // -------------------------
  // Main
  // -------------------------
  initial begin
    real mse0, msep;

    start_tick      = 1'b0;
    x_set_en_all    = '0;
    x_obs_flat_all  = '0;

    init_teacher();
    build_dataset();

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Target: y = W*x + b (2D).  W=[[%.4f,%.4f],[%.4f,%.4f]]  b=[%.4f,%.4f]",
             W_gt[0][0], W_gt[0][1], W_gt[1][0], W_gt[1][1], b_gt[0], b_gt[1]);
    $display("[TB] Training schedule: settle=%0d ticks (a=0,g>0), learn=%0d ticks (a>0,g>0)",
             INFER_TICKS_PER_SAMPLE, LEARN_TICKS_PER_SAMPLE);

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s][0], y_samp[s][1]);

        set_rates_infer();
        for (int t = 0; t < INFER_TICKS_PER_SAMPLE; t++) do_tick();

        set_rates_learn();
        for (int t = 0; t < LEARN_TICKS_PER_SAMPLE; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // Show some final preds
    $display("--------------------------------------------------");
    $display("[TB] Sample eval (x -> target, pred)");
    $display("   x1      x2        y0_tgt    y1_tgt     y0_pred    y1_pred");
    $display("--------------------------------------------------");

    set_rates_eval();
    for (int s = 0; s < 10; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      $display("%7.4f %7.4f   %9.4f %9.4f   %9.4f %9.4f",
               x_samp[s][0], x_samp[s][1],
               y_samp[s][0], y_samp[s][1],
               pred_bottom(0), pred_bottom(1));
    end

    $finish;
  end

endmodule

`default_nettype wire
