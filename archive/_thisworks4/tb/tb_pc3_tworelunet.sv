// ======================================================================
// tb_pc3_relu2presyn_relu2state_mse_2to2to1.sv
//
// 3-layer pc_network_nlayer:
//
//   top  : K2=2 (x)                [clamped to input]
//   hid  : K1=2                    presyn = ReLU(x_j),  state = ReLU(u_i)
//   bot  : K0=1 (y)                state = LINEAR, presyn = LINEAR
//
// Teacher (NO explicit bias in formula):
//   y = A_gt · ReLU( W_gt · ReLU(x) )
//
// Notes:
// - Your cores still have an internal bias lane; with defaults it can learn.
//   The teacher here has no bias; the network may still fit well but can
//   drift slightly due to learned bias unless you later add a bias-freeze knob.
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_relu2_net;

  // -------------------------
  // Shape (2 -> 2 -> 1)
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int MAX_K      = 2;                 // max across layers is 2
  localparam int K_LUT[NUM_LAYERS] = '{1, 2, 2}; // bottom=1, hidden=2, top=2

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;  // 8x8 grid in [-1,1]^2
  localparam int  EPOCHS      = 12;

  real x_samp[NUM_SAMPLES][2];
  real y_samp[NUM_SAMPLES];

  // Teacher params:
  //   z  = ReLU(x)
  //   h  = ReLU(W z)
  //   y  = A · h
  real W_gt[2][2];
  real A_gt[2];

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.005;
  localparam real GAMMA_R = 0.10;

  localparam int  RESET_TICKS        = 10;
  localparam int  INFER_TICKS_TRAIN  = 500;
  localparam int  LEARN_TICKS_TRAIN  = 40;
  localparam int  EVAL_SETTLE_TICKS  = 900;

  localparam real RESET_HIDDEN_VAL_0 = 0.0;
  localparam real RESET_HIDDEN_VAL_1 = 0.0;
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
  // Activation configuration to realize:
  //
  //   y = A · ReLU( W · ReLU(x) )
  //
  // Hidden presyn: ReLU(x_j)
  // Hidden state : ReLU(u_i)
  // Output linear
  // =========================================================
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{
    ACT_LINEAR, // bottom: y reads hidden linearly
    ACT_RELU,   // hidden: presyn applies ReLU to x_j
    ACT_LINEAR  // top: no presyn used (clamped)
  };

  localparam act_kind_e ACT_STATE_LUT[NUM_LAYERS] = '{
    ACT_LINEAR, // bottom: y is linear
    ACT_RELU,   // hidden: h = ReLU(u)
    ACT_LINEAR  // top: irrelevant (clamped)
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
  // ReLU helper (teacher)
  // -------------------------
  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  // -------------------------
  // Teacher forward
  // -------------------------
  function automatic real teacher_y(input real x1, input real x2);
    real z0, z1;
    real u0, u1;
    real h0, h1;

    z0 = relu_r(x1);
    z1 = relu_r(x2);

    u0 = W_gt[0][0]*z0 + W_gt[0][1]*z1;
    u1 = W_gt[1][0]*z0 + W_gt[1][1]*z1;

    h0 = relu_r(u0);
    h1 = relu_r(u1);

    return (A_gt[0]*h0 + A_gt[1]*h1);
  endfunction

  // -------------------------
  // Build dataset: 2D grid
  // -------------------------
  task automatic build_dataset();
    int G, ix, iy;
    real tx, ty, x1, x2;

    // Choose something that uses both ReLUs:
    // - some mixed signs
    // - ensure W z crosses 0 over the grid so hidden ReLU matters
    W_gt[0][0] =  1.20;  W_gt[0][1] = -0.70;
    W_gt[1][0] =  0.40;  W_gt[1][1] =  1.10;

    A_gt[0]    =  1.70;
    A_gt[1]    = -0.30;

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

      y_samp[s] = teacher_y(x1, x2);
    end
  endtask

  // -------------------------
  // Rates
  // -------------------------
  task automatic rates_infer(); alpha_ieee=f2b(0.0);     gamma_ieee=f2b(GAMMA_R); endtask
  task automatic rates_learn(); alpha_ieee=f2b(ALPHA_R); gamma_ieee=f2b(GAMMA_R); endtask
  task automatic rates_eval (); alpha_ieee=f2b(0.0);     gamma_ieee=f2b(GAMMA_R); endtask

  // -------------------------
  // Tick driver (wait for done pulse)
  // -------------------------
  logic start_q_tb, done_q_tb, done_edge_flag;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q_tb <= 1'b0;
    else        start_q_tb <= start_tick;
  end
  wire start_edge_tb = start_tick & ~start_q_tb;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_q_tb <= 1'b0;
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
      if (guard > 16384) $fatal("[TB] Tick deadlock.");
    end
  endtask

  // -------------------------
  // Clamp helpers
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y);
    // top (2): clamp x
    x_set_en_all[2][0]            = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);

    // hidden (1): free (2 neurons)
    x_set_en_all[1][0]            = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]            = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0;

    // bottom (0): clamp y
    x_set_en_all[0][0]            = 1'b1; x_obs_flat_all[0][32*0 +:32] = f2b(y);
    x_set_en_all[0][1]            = 1'b0; x_obs_flat_all[0][32*1 +:32] = 32'h0;
  endtask

  task automatic clamp_eval(input real x1, input real x2);
    // top (2): clamp x
    x_set_en_all[2][0]            = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]            = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);

    // hidden (1): free
    x_set_en_all[1][0]            = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]            = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0;

    // bottom (0): free so we read settled y
    x_set_en_all[0][0]            = 1'b0; x_obs_flat_all[0][32*0 +:32] = 32'h0;
    x_set_en_all[0][1]            = 1'b0; x_obs_flat_all[0][32*1 +:32] = 32'h0;
  endtask

  // -------------------------
  // Init tasks (reset hidden and/or bottom state)
  // -------------------------
  task automatic init_hidden_only();
    // clamp both hidden neurons briefly
    x_set_en_all[1][0]           = 1'b1; x_obs_flat_all[1][32*0 +:32] = f2b(RESET_HIDDEN_VAL_0);
    x_set_en_all[1][1]           = 1'b1; x_obs_flat_all[1][32*1 +:32] = f2b(RESET_HIDDEN_VAL_1);

    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();

    x_set_en_all[1][0]           = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]           = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0;
  endtask

  task automatic init_hidden_and_bottom();
    x_set_en_all[1][0]           = 1'b1; x_obs_flat_all[1][32*0 +:32] = f2b(RESET_HIDDEN_VAL_0);
    x_set_en_all[1][1]           = 1'b1; x_obs_flat_all[1][32*1 +:32] = f2b(RESET_HIDDEN_VAL_1);

    x_set_en_all[0][0]           = 1'b1; x_obs_flat_all[0][32*0 +:32] = f2b(RESET_BOTTOM_VAL);

    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();

    x_set_en_all[1][0]           = 1'b0; x_obs_flat_all[1][32*0 +:32] = 32'h0;
    x_set_en_all[1][1]           = 1'b0; x_obs_flat_all[1][32*1 +:32] = 32'h0;

    x_set_en_all[0][0]           = 1'b0; x_obs_flat_all[0][32*0 +:32] = 32'h0;
  endtask

  // -------------------------
  // Readout + MSE
  // -------------------------
  function automatic real pred_bottom();
    // hierarchical peek into pc_network_nlayer internal state array
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

    $display("[TB] Begin training (2->2->1)");
    $display("[TB] Teacher: y = A·ReLU(W·ReLU(x))");
    $display("[TB] A_gt = [%0.4f, %0.4f]", A_gt[0], A_gt[1]);
    $display("[TB] W_gt row0 = [%0.4f, %0.4f]", W_gt[0][0], W_gt[0][1]);
    $display("[TB] W_gt row1 = [%0.4f, %0.4f]", W_gt[1][0], W_gt[1][1]);
    $display("[TB] ALPHA_R=%0.6f  GAMMA_R=%0.6f", ALPHA_R, GAMMA_R);
    $display("[TB] infer=%0d learn=%0d eval=%0d ticks",
             INFER_TICKS_TRAIN, LEARN_TICKS_TRAIN, EVAL_SETTLE_TICKS);

    for (int ep=0; ep<EPOCHS; ep++) begin
      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s]);

        // Reset only hidden before inference (keep bottom clamped to y)
        init_hidden_only();

        rates_infer();
        for (int t=0; t<INFER_TICKS_TRAIN; t++) do_tick();

        rates_learn();
        for (int t=0; t<LEARN_TICKS_TRAIN; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // show a few preds
    rates_eval();
    for (int s=0; s<12; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t=0; t<EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB] s=%0d  x1=%0.4f x2=%0.4f  target=%0.6f  pred=%0.6f",
               s, x_samp[s][0], x_samp[s][1], y_samp[s], pred_bottom());
    end

    $finish;
  end

endmodule

`default_nettype wire
