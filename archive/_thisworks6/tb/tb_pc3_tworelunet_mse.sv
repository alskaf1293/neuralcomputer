// ======================================================================
// tb_pc3_two_two_one_input_hidden_relu_net_mse.sv
//
// 3-layer pc_network_nlayer, K0=1 (bottom/output), K1=2 (hidden), K2=2 (top/input)
// ReLU on top/input layer AND hidden layer; bottom/output is linear.
//
// Teacher:
//   x+ = ReLU(x)
//   h  = ReLU(B_gt * x+)
//   y  = A_gt * h
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

module tb_pc3_relu2_net_mse;

  // -------------------------
  // Shape
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int MAX_K      = 2;
  localparam int K_LUT[NUM_LAYERS] = '{1, 2, 2}; // [0]=bottom, [1]=hidden, [2]=top

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 20;

  real x_samp[NUM_SAMPLES][2]; // raw inputs (can be negative)
  real y_samp[NUM_SAMPLES];

  // Ground-truth teacher params
  real B_gt[2][2];
  real A_gt[2];

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

  // Activations:
  // layer index: [0]=bottom (output), [1]=hidden, [2]=top (input)
  // Now: top ReLU + hidden ReLU + bottom linear
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_RELU};
  localparam act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_RELU};

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
  // Real-valued ReLU for teacher
  // -------------------------
  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  // -------------------------
  // Build dataset: y = A_gt * ReLU(B_gt * ReLU(x))
  // -------------------------
  task automatic build_dataset();
    real t, x1, x2;
    real x1p, x2p;
    real h0, h1;

    // Choose teacher matrices
    B_gt[0][0] =  1.2;  B_gt[0][1] = -0.7;
    B_gt[1][0] =  0.4;  B_gt[1][1] =  1.1;

    A_gt[0]    =  1.7;
    A_gt[1]    = -0.3;

    for (int s = 0; s < NUM_SAMPLES; s++) begin
      // deterministic sweep
      t  = real'(s) / real'(NUM_SAMPLES-1);
      x1 = -1.0 + 2.0*t;
      x2 =  1.0 - 2.0*t;

      // store RAW inputs; network top layer will apply ReLU internally
      x_samp[s][0] = x1;
      x_samp[s][1] = x2;

      // Teacher input nonlinearity
      x1p = relu_r(x1);
      x2p = relu_r(x2);

      // Hidden nonlinearity
      h0 = relu_r(B_gt[0][0]*x1p + B_gt[0][1]*x2p);
      h1 = relu_r(B_gt[1][0]*x1p + B_gt[1][1]*x2p);

      // Output linear
      y_samp[s] = A_gt[0]*h0 + A_gt[1]*h1;
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
    // top clamped to RAW [x1, x2] (can be negative; top activation will ReLU it internally)
    x_set_en_all[2][0]            = 1'b1;
    x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1;
    x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]            = 1'b0;
    x_obs_flat_all[1][32*0 +: 32] = 32'h0000_0000;
    x_set_en_all[1][1]            = 1'b0;
    x_obs_flat_all[1][32*1 +: 32] = 32'h0000_0000;

    // bottom clamped to y
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
    $display("[TB] Begin training (2->2->1, top ReLU + hidden ReLU)");
    $display("[TB] Teacher: y = A_gt * ReLU(B_gt * ReLU(x))");
    $display("[TB] A_gt = [%0.4f, %0.4f]", A_gt[0], A_gt[1]);
    $display("[TB] B_gt row0 = [%0.4f, %0.4f]", B_gt[0][0], B_gt[0][1]);
    $display("[TB] B_gt row1 = [%0.4f, %0.4f]", B_gt[1][0], B_gt[1][1]);

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

    // show a few final preds
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
