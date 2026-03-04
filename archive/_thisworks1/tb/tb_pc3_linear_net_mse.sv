// ======================================================================
// tb_pc3_two_two_one_linear_net_mse.sv
//
// 3-layer pc_network_nlayer, K0=1 (bottom/output), K1=2 (hidden), K2=2 (top/input)
// All-linear activations.
//
// Teacher: y = w1*x1 + w2*x2   (no bias)
//
// Schedule per sample:
//   1) Inference settle: alpha=0, gamma>0 (top clamped, bottom clamped, hidden free)
//   2) Learning ticks:   alpha>0, gamma>0 (keep settling while updating weights)
//
// Eval:
//   top clamped, hidden free, bottom free; alpha=0, gamma>0; read bottom state.
//
// MSE readout via hierarchical: uut.x_state_global[0][0]
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
  localparam int K_LUT[NUM_LAYERS] = '{1, 2, 2}; // [0]=bottom, [1]=hidden, [2]=top

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Teacher + dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 20;

  // y = w1*x1 + w2*x2
  real w1_gt = 1.7;
  real w2_gt = -0.3;

  real x_samp[NUM_SAMPLES][2]; // [s][0]=x1, [s][1]=x2
  real y_samp[NUM_SAMPLES];

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
  // Build dataset: y = w1*x1 + w2*x2
  // -------------------------
  task automatic build_dataset();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      // deterministic grid-ish sweep
      real t = real'(s) / real'(NUM_SAMPLES-1);   // 0..1
      real x1 = -1.0 + 2.0*t;                     // -1..1
      real x2 =  1.0 - 2.0*t;                     //  1..-1 (anti-correlated)
      x_samp[s][0] = x1;
      x_samp[s][1] = x2;
      y_samp[s]    = w1_gt*x1 + w2_gt*x2;
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
  // layer 2 = top (input, 2 dims), layer 1 = hidden (2 dims, free), layer 0 = bottom (output, 1 dim)
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y);
    // top clamped to [x1, x2]
    x_set_en_all[2][0]            = 1'b1;
    x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1;
    x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free (2 neurons)
    x_set_en_all[1][0]            = 1'b0;
    x_obs_flat_all[1][32*0 +: 32] = 32'h0000_0000;
    x_set_en_all[1][1]            = 1'b0;
    x_obs_flat_all[1][32*1 +: 32] = 32'h0000_0000;

    // bottom clamped to y (only neuron 0 is real; neuron 1 is unused padding)
    x_set_en_all[0][0]            = 1'b1;
    x_obs_flat_all[0][32*0 +: 32] = f2b(y);
    x_set_en_all[0][1]            = 1'b0;
    x_obs_flat_all[0][32*1 +: 32] = 32'h0000_0000;
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

    build_dataset();

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Begin training (3-layer 2->2->1 linear): y = %0.4f*x1 + %0.4f*x2", w1_gt, w2_gt);

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s]);

        set_rates_infer();
        for (int t = 0; t < INFER_TICKS_PER_SAMPLE; t++) do_tick();

        set_rates_learn();
        for (int t = 0; t < LEARN_TICKS_PER_SAMPLE; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // show some final preds
    set_rates_eval();
    for (int s = 0; s < 10; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB] s=%0d  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f",
               s, x_samp[s][0], x_samp[s][1], y_samp[s], pred_bottom());
    end

    $finish;
  end

endmodule

`default_nettype wire
