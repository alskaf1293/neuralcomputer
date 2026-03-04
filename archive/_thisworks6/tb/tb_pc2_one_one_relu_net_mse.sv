// ======================================================================
// tb_pc2_two_one_relu_net_mse.sv
//
// 2-layer pc_network_nlayer:
//   K0=1 (bottom/output), K1=2 (top/input)
//
// Add ONE ReLU: presynaptic activation for bottom layer only.
// (So each presyn input lane uses ReLU(x_top_lane) before weighting.)
//
// Teacher: y = a0*ReLU(x0) + a1*ReLU(x1)   (no bias)
//
// Train: clamp top=[x0,x1] and bottom=y, alpha>0, gamma=0
// Eval : clamp top=[x0,x1], bottom free, alpha=0, gamma>0, measure MSE from
//        hierarchical readout: uut.x_state_global[0][0]
//
// No RTL port changes required.
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc2_two_one_relu_net_mse;

  // -------------------------
  // Shape
  // -------------------------
  localparam int NUM_LAYERS = 2;
  localparam int MAX_K      = 2;
  // K_LUT[0]=bottom, K_LUT[1]=top
  localparam int K_LUT[NUM_LAYERS] = '{1, 2};

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Teacher + dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 10;

  real a0_gt =  1.7;
  real a1_gt = -0.3;

  real x0_samp[NUM_SAMPLES];
  real x1_samp[NUM_SAMPLES];
  real y_samp [NUM_SAMPLES];

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.03;   // weight LR
  localparam real GAMMA_R = 0.20;   // inference LR
  localparam int  TRAIN_TICKS_PER_SAMPLE = 200;
  localparam int  EVAL_SETTLE_TICKS      = 200;

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

  // -------------------------
  // Activations
  // -------------------------
  // One ReLU: bottom layer uses ReLU on its presynaptic inputs (top states).
  // State remains linear everywhere.
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{ACT_RELU,   ACT_LINEAR};
  localparam act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{ACT_LINEAR, ACT_LINEAR};

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
  // Real ReLU for teacher
  // -------------------------
  function automatic real relu_r(input real x);
    return (x > 0.0) ? x : 0.0;
  endfunction

  // -------------------------
  // Build dataset: y = a0*ReLU(x0) + a1*ReLU(x1)
  // -------------------------
  task automatic build_dataset();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      // deterministic 2D sweep (not purely 1D correlated)
      // x0 cycles faster, x1 cycles slower
      int i0 = s % 8;              // 0..7
      int i1 = (s / 8) % 8;        // 0..7

      real x0 = -1.0 + 2.0 * real'(i0) / 7.0;  // -1..1
      real x1 = -1.0 + 2.0 * real'(i1) / 7.0;  // -1..1

      x0_samp[s] = x0;
      x1_samp[s] = x1;
      y_samp[s]  = a0_gt * relu_r(x0) + a1_gt * relu_r(x1);
    end
  endtask

  // -------------------------
  // Rate modes
  // -------------------------
  task automatic set_rates_train();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(0.0);
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
      if (guard > 4096) $fatal("[TB] Tick deadlock.");
    end
  endtask

  // -------------------------
  // Clamp helpers
  // layer 1 = top (input, K=2), layer 0 = bottom (output, K=1)
  // -------------------------
  task automatic clamp_for_train(input real x0, input real x1, input real y);
    // clamp top to [x0, x1]
    x_set_en_all[1][0]            = 1'b1;
    x_obs_flat_all[1][32*0 +: 32] = f2b(x0);

    x_set_en_all[1][1]            = 1'b1;
    x_obs_flat_all[1][32*1 +: 32] = f2b(x1);

    // clamp bottom to y
    x_set_en_all[0][0]            = 1'b1;
    x_obs_flat_all[0][32*0 +: 32] = f2b(y);
  endtask

  task automatic clamp_for_eval(input real x0, input real x1);
    // clamp top to [x0, x1]
    x_set_en_all[1][0]            = 1'b1;
    x_obs_flat_all[1][32*0 +: 32] = f2b(x0);

    x_set_en_all[1][1]            = 1'b1;
    x_obs_flat_all[1][32*1 +: 32] = f2b(x1);

    // bottom free
    x_set_en_all[0][0]            = 1'b0;
    x_obs_flat_all[0][32*0 +: 32] = 32'h0000_0000;
  endtask

  // -------------------------
  // Readout + MSE
  // -------------------------
  function automatic real pred_bottom();
    return b2f(uut.x_state_global[0][0]); // bottom layer, neuron 0
  endfunction

  function automatic real mse_sample(input int sidx);
    real p = pred_bottom();
    real t = y_samp[sidx];
    real d = p - t;
    return d*d;
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;

    set_rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_for_eval(x0_samp[s], x1_samp[s]);
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

    build_dataset();

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);

    $display("[TB] Begin training (2-layer 2->1, presyn ReLU): y = %0.4f*ReLU(x0) + %0.4f*ReLU(x1)",
             a0_gt, a1_gt);

    for (int ep = 0; ep < EPOCHS; ep++) begin
      set_rates_train();

      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_for_train(x0_samp[s], x1_samp[s], y_samp[s]);
        for (int t = 0; t < TRAIN_TICKS_PER_SAMPLE; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // Show a few final predictions
    set_rates_eval();
    for (int s = 0; s < 10; s++) begin
      clamp_for_eval(x0_samp[s], x1_samp[s]);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB] s=%0d  x0=%0.4f  x1=%0.4f  target=%0.4f  pred=%0.4f",
               s, x0_samp[s], x1_samp[s], y_samp[s], pred_bottom());
    end

    $finish;
  end

endmodule

`default_nettype wire
