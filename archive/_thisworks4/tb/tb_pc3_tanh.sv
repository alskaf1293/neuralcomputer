// ======================================================================
// tb_pc3_tanh_net_mse_outerbias.sv
//
// 3-layer pc_network_nlayer, ONE hidden unit:
//
//   top    : K2=2 (x1,x2)  [clamped to input]
//   hidden : K1=1          u = Wx + b,  x = tanh(u)
//   bottom : K0=1 (y)      linear output
//
// Teacher:
//   y = a_gt * tanh( w0_gt*x1 + w1_gt*x2 + b_gt ) + c_gt
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_tanh_net_mse;

  // -------------------------
  // Shape (ONE hidden unit)
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int MAX_K      = 2;                 // max across layers = 2 (top has 2)
  localparam int K_LUT[NUM_LAYERS] = '{1, 1, 2}; // bottom=1, hidden=1, top=2

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;  // 8x8 grid
  localparam int  EPOCHS      = 30;

  real x_samp[NUM_SAMPLES][2];
  real y_samp[NUM_SAMPLES];

  // Teacher params: y = a*tanh(w0*x1 + w1*x2 + b) + c
  real w0_gt, w1_gt, a_gt, b_gt, c_gt;

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.005;
  localparam real GAMMA_R = 0.10;

  localparam int  RESET_TICKS        = 10;
  localparam int  INFER_TICKS_TRAIN  = 500;
  localparam int  LEARN_TICKS_TRAIN  = 40;
  localparam int  EVAL_SETTLE_TICKS  = 800;

  localparam real RESET_HIDDEN_VAL   = 0.0;
  localparam real RESET_BOTTOM_VAL   = 0.0;

  // -------------------------
  // Clock + reset
  // -------------------------
  logic clk, rst_n;
  initial begin clk = 1'b0; forever #5 clk = ~clk; end
  initial begin rst_n = 1'b0; #50 rst_n = 1'b1; end

  // -------------------------
  // DUT signals
  // -------------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  // =========================================================
  // Activation configuration
  //
  // Want tanh AFTER the first weight multiply (hidden state):
  //   hidden: presyn φ = LINEAR (no squashing on raw x_j)
  //   hidden: state  φ = TANH   (squash u = Wx (+b))
  //
  // Output y should be LINEAR to represent the outer bias c_gt.
  // =========================================================
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{
    ACT_TANH,  // bottom presyn (not important)
    ACT_LINEAR,  // hidden presyn: raw x_j
    ACT_LINEAR   // top presyn
    };

    localparam act_kind_e ACT_STATE_LUT[NUM_LAYERS] = '{
    ACT_LINEAR,  // bottom state: y must be linear
    ACT_LINEAR,    // hidden state: tanh(Wx+b)
    ACT_LINEAR   // top state
    };

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
    int unsigned u;
    u = b;
    return f32_to_real(u);
  endfunction

  // -------------------------
  // tanh helper (teacher)
  // -------------------------
  function automatic real tanh_r(input real z);
    return $tanh(z);
  endfunction

  // -------------------------
  // Build dataset: 2D grid, tanh(Wx+b)+outerbias teacher
  // -------------------------
  task automatic build_dataset();
    int  G, ix, iy;
    real tx, ty, x1, x2;

    // Pick params so u = w0*x1 + w1*x2 + b spans a useful range on [-1,1]^2
    w0_gt =  1.2;
    w1_gt = -0.7;
    b_gt  =  0.0;
    a_gt  =  1.7;
    c_gt  =  0.0;

    G = 1;
    while ((G+1)*(G+1) <= NUM_SAMPLES) G++;

    for (int s = 0; s < NUM_SAMPLES; s++) begin
      ix = s % G;
      iy = s / G;
      if (iy >= G) iy = G-1;

      tx = (G==1) ? 0.0 : real'(ix)/real'(G-1);
      ty = (G==1) ? 0.0 : real'(iy)/real'(G-1);

      x1 = -1.0 + 2.0*tx;
      x2 = -1.0 + 2.0*ty;

      x_samp[s][0] = x1;
      x_samp[s][1] = x2;

      // y = a*tanh(w0*x1 + w1*x2 + b) + c
      y_samp[s] = a_gt * tanh_r(w0_gt*x1 + w1_gt*x2 + b_gt) + c_gt;
    end
  endtask

  // -------------------------
  // Rates
  // -------------------------
  task automatic rates_infer();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic rates_learn();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic rates_eval();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // -------------------------
  // Tick driver
  // -------------------------
  logic start_q_tb, done_q_tb, done_edge_flag;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q_tb <= 1'b0;
    else        start_q_tb <= start_tick;
  end
  wire start_edge_tb = start_tick & ~start_q_tb;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_q_tb       <= 1'b0;
      done_edge_flag  <= 1'b0;
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
  // Clamp helpers (hidden has only neuron 0)
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y);
    // top (2) clamped to input
    x_set_en_all[2][0]             = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]             = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);

    // hidden (1) free
    x_set_en_all[1][0]             = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]             = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0; // padding lane

    // bottom (0) clamped to target
    x_set_en_all[0][0]             = 1'b1; x_obs_flat_all[0][32*0 +:32] = f2b(y);
    x_set_en_all[0][1]             = 1'b0; x_obs_flat_all[0][32*1 +:32] = 32'h0;
  endtask

  task automatic clamp_eval(input real x1, input real x2);
    // top clamped to input
    x_set_en_all[2][0]             = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]             = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]             = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]             = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0;

    // bottom free (we read out its settled state)
    x_set_en_all[0][0]             = 1'b0; x_obs_flat_all[0][32*0 +:32] = 32'h0;
    x_set_en_all[0][1]             = 1'b0; x_obs_flat_all[0][32*1 +:32] = 32'h0;
  endtask

  // -------------------------
  // Init tasks
  // -------------------------
  task automatic init_hidden_only();
    x_set_en_all[1][0]             = 1'b1; x_obs_flat_all[1][32*0 +:32] = f2b(RESET_HIDDEN_VAL);
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();
    x_set_en_all[1][0]             = 1'b0;
    x_obs_flat_all[1][32*0 +:32]   = 32'h0;
  endtask

  task automatic init_hidden_and_bottom();
    x_set_en_all[1][0]             = 1'b1; x_obs_flat_all[1][32*0 +:32] = f2b(RESET_HIDDEN_VAL);
    x_set_en_all[0][0]             = 1'b1; x_obs_flat_all[0][32*0 +:32] = f2b(RESET_BOTTOM_VAL);
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();
    x_set_en_all[1][0]             = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[0][0]             = 1'b0; x_obs_flat_all[0][32*0 +:32] = 32'h0;
  endtask

  // -------------------------
  // Readout + MSE
  // -------------------------
  function automatic real pred_bottom();
    return b2f(uut.x_state_global[0][0]);
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;
    rates_eval();
    for (int s=0; s<NUM_SAMPLES; s++) begin
      real d;
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t=0; t<EVAL_SETTLE_TICKS; t++) do_tick();
      d = pred_bottom() - y_samp[s];
      acc += d*d;
    end
    return acc / real'(NUM_SAMPLES);
  endfunction

  // -------------------------
  // Main
  // -------------------------
  initial begin
    real mse0, msep;

    start_tick     = 1'b0;
    x_set_en_all   = '0;
    x_obs_flat_all = '0;

    build_dataset();

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Begin training (2->1->1, hidden tanh(Wx+b), output linear)");
    $display("[TB] Teacher: y = %0.4f*tanh(%0.4f*x1 + %0.4f*x2 + %0.4f) + %0.4f",
             a_gt, w0_gt, w1_gt, b_gt, c_gt);

    for (int ep=0; ep<EPOCHS; ep++) begin
      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s]);

        // Reset only the hidden state before inference (keep bottom clamped)
        init_hidden_only();

        rates_infer();
        for (int t=0; t<INFER_TICKS_TRAIN; t++) do_tick();

        rates_learn();
        for (int t=0; t<LEARN_TICKS_TRAIN; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // Show a few preds
    rates_eval();
    for (int s=0; s<10; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t=0; t<EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB] s=%0d  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f",
               s, x_samp[s][0], x_samp[s][1], y_samp[s], pred_bottom());
    end

    $finish;
  end

endmodule

`default_nettype wire
