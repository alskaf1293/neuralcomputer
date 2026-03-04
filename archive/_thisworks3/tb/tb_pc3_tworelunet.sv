// ======================================================================
// tb_pc3_arelu_brelu_mse_2to2to1.sv
//
// 3-layer pc_network_nlayer:
//
//   top  : K2=2 (x1,x2)            [clamped to input]
//   hid  : K1=2 (ReLU state)       implements h = ReLU(B * ReLU(x))
//   bot  : K0=1 (y)                linear output y = A * h
//
// Teacher:
//   x0 = ReLU(x)
//   h  = ReLU(B_gt * x0)
//   y  = A_gt * h
//
// Notes:
// - Bias is frozen in neuron_core_single_back instantiation inside pc_layer
//   (FREEZE_BIAS=1), so teacher uses NO biases.
// - Keeps the same schedule/structure as your convergent TB.
// - Adds a post-training correctness check: raw clamp vs ReLU(x) clamp.
// - RELU APPLIED AT THE INPUT KILLS LEARNING
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_relu2_net_mse;

  // -------------------------
  // Shape (TWO hidden units)
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int MAX_K      = 2;                 // max across layers = 2 (top + hidden)
  localparam int K_LUT[NUM_LAYERS] = '{1, 2, 2}; // bottom=1, hidden=2, top=2

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Dataset
  // -------------------------
  localparam int NUM_SAMPLES = 64;  // 8x8 grid
  localparam int EPOCHS      = 35;  // requested

  real x_samp[NUM_SAMPLES][2];
  real y_samp[NUM_SAMPLES];

  // Teacher params (no biases):
  // h = ReLU(B * ReLU(x)), y = A * h
  real A_gt[2];
  real B_gt[2][2];

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.005;
  localparam real GAMMA_R = 0.10;

  localparam int RESET_TICKS        = 10;
  localparam int INFER_TICKS_TRAIN  = 1200;
  localparam int LEARN_TICKS_TRAIN  = 20;
  localparam int EVAL_SETTLE_TICKS  = 800;

  localparam real RESET_HIDDEN_VAL0 = 0.0;
  localparam real RESET_HIDDEN_VAL1 = 0.0;
  localparam real RESET_BOTTOM_VAL  = 0.0;

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
  // Layer index: 0=bottom, 1=hidden, 2=top
  //
  // Want: y = A * ReLU( B * ReLU(x) )
  // - TOP state ReLU so clamped x becomes ReLU(x) in x_state_global[2][*]
  // - Hidden STATE ReLU (middle ReLU)
  // - Bottom linear
  // =========================================================
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{
    ACT_RELU,   // bottom: presyn from hidden is linear
    ACT_RELU,     // hidden: presyn from top (double ReLU ok)
    ACT_LINEAR      // top: unused presyn (no layer above)
  };

  localparam act_kind_e ACT_STATE_LUT[NUM_LAYERS] = '{
    ACT_RELU,   // bottom state: y is linear
    ACT_RELU,     // hidden state: ReLU(B * ReLU(x))
    ACT_LINEAR      // top state: represent as ReLU(x)
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
  function automatic [31:0] f2b(input real r); f2b = real_to_f32(r); endfunction
  function automatic real b2f(input [31:0] b); int unsigned u; u=b; return f32_to_real(u); endfunction

  // -------------------------
  // ReLU helper
  // -------------------------
  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  // -------------------------
  // Build dataset: 2D grid, nested ReLU teacher
  // -------------------------
  task automatic build_dataset();
    int  G, ix, iy;
    real tx, ty, x1, x2;
    real x0_0, x0_1;
    real h0_u, h1_u;
    real h0, h1;

    // Ground-truth A, B (no biases)
    A_gt[0]    =  1.7;
    A_gt[1]    = -0.3;

    B_gt[0][0] =  1.2;
    B_gt[0][1] = -0.7;
    B_gt[1][0] =  0.4;
    B_gt[1][1] =  1.1;

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

      // x0 = ReLU(x)
      x0_0 = relu_r(x1);
      x0_1 = relu_r(x2);

      // h = ReLU(B * x0)
      h0_u = B_gt[0][0]*x0_0 + B_gt[0][1]*x0_1;
      h1_u = B_gt[1][0]*x0_0 + B_gt[1][1]*x0_1;
      h0   = relu_r(h0_u);
      h1   = relu_r(h1_u);

      // y = A * h
      y_samp[s] = A_gt[0]*h0 + A_gt[1]*h1;
    end
  endtask

  // Teacher eval for a single point (for sanity prints)
  function automatic real teacher_y(input real x1, input real x2);
    real x0_0, x0_1;
    real h0_u, h1_u;
    real h0, h1;
    x0_0 = relu_r(x1);
    x0_1 = relu_r(x2);
    h0_u = B_gt[0][0]*x0_0 + B_gt[0][1]*x0_1;
    h1_u = B_gt[1][0]*x0_0 + B_gt[1][1]*x0_1;
    h0   = relu_r(h0_u);
    h1   = relu_r(h1_u);
    return A_gt[0]*h0 + A_gt[1]*h1;
  endfunction

  // -------------------------
  // Rates
  // -------------------------
  task automatic rates_infer(); alpha_ieee = f2b(0.0);     gamma_ieee = f2b(GAMMA_R); endtask
  task automatic rates_learn(); alpha_ieee = f2b(ALPHA_R); gamma_ieee = f2b(GAMMA_R); endtask
  task automatic rates_eval (); alpha_ieee = f2b(0.0);     gamma_ieee = f2b(GAMMA_R); endtask

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
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y);
    // top clamped (raw x; top state is ReLU)
    x_set_en_all[2][0]              = 1'b1; x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]              = 1'b1; x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]              = 1'b0; x_obs_flat_all[1][32*0 +: 32] = 32'h0;
    x_set_en_all[1][1]              = 1'b0; x_obs_flat_all[1][32*1 +: 32] = 32'h0;

    // bottom clamped
    x_set_en_all[0][0]              = 1'b1; x_obs_flat_all[0][32*0 +: 32] = f2b(y);
    x_set_en_all[0][1]              = 1'b0; x_obs_flat_all[0][32*1 +: 32] = 32'h0;
  endtask

  task automatic clamp_eval(input real x1, input real x2);
    // top clamped
    x_set_en_all[2][0]              = 1'b1; x_obs_flat_all[2][32*0 +: 32] = f2b(x1);
    x_set_en_all[2][1]              = 1'b1; x_obs_flat_all[2][32*1 +: 32] = f2b(x2);

    // hidden free
    x_set_en_all[1][0]              = 1'b0; x_obs_flat_all[1][32*0 +: 32] = 32'h0;
    x_set_en_all[1][1]              = 1'b0; x_obs_flat_all[1][32*1 +: 32] = 32'h0;

    // bottom free
    x_set_en_all[0][0]              = 1'b0; x_obs_flat_all[0][32*0 +: 32] = 32'h0;
    x_set_en_all[0][1]              = 1'b0; x_obs_flat_all[0][32*1 +: 32] = 32'h0;
  endtask

  // -------------------------
  // Init tasks
  // -------------------------
  task automatic init_hidden_only();
    // clamp both hidden units briefly, then release
    x_set_en_all[1][0]              = 1'b1; x_obs_flat_all[1][32*0 +: 32] = f2b(RESET_HIDDEN_VAL0);
    x_set_en_all[1][1]              = 1'b1; x_obs_flat_all[1][32*1 +: 32] = f2b(RESET_HIDDEN_VAL1);

    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t = 0; t < RESET_TICKS; t++) do_tick();

    x_set_en_all[1][0]              = 1'b0; x_obs_flat_all[1][32*0 +: 32] = 32'h0;
    x_set_en_all[1][1]              = 1'b0; x_obs_flat_all[1][32*1 +: 32] = 32'h0;
  endtask

  task automatic init_hidden_and_bottom();
    x_set_en_all[1][0]              = 1'b1; x_obs_flat_all[1][32*0 +: 32] = f2b(RESET_HIDDEN_VAL0);
    x_set_en_all[1][1]              = 1'b1; x_obs_flat_all[1][32*1 +: 32] = f2b(RESET_HIDDEN_VAL1);

    x_set_en_all[0][0]              = 1'b1; x_obs_flat_all[0][32*0 +: 32] = f2b(RESET_BOTTOM_VAL);

    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t = 0; t < RESET_TICKS; t++) do_tick();

    x_set_en_all[1][0]              = 1'b0; x_obs_flat_all[1][32*0 +: 32] = 32'h0;
    x_set_en_all[1][1]              = 1'b0; x_obs_flat_all[1][32*1 +: 32] = 32'h0;

    x_set_en_all[0][0]              = 1'b0; x_obs_flat_all[0][32*0 +: 32] = 32'h0;
  endtask

  // -------------------------
  // Readout + eval helpers
  // -------------------------
  function automatic real pred_bottom();
    return b2f(uut.x_state_global[0][0]);
  endfunction

  function automatic real eval_point(input real x1, input real x2);
    clamp_eval(x1, x2);
    init_hidden_and_bottom();
    rates_eval();
    for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
    return pred_bottom();
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;
    rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      real d;
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
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
    $display("[TB] Begin training (2->2->1, y = A*ReLU(B*ReLU(x)))");
    $display("[TB] A_gt = [%0.4f, %0.4f]", A_gt[0], A_gt[1]);
    $display("[TB] B_gt row0 = [%0.4f, %0.4f]", B_gt[0][0], B_gt[0][1]);
    $display("[TB] B_gt row1 = [%0.4f, %0.4f]", B_gt[1][0], B_gt[1][1]);

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s]);

        init_hidden_only();

        rates_infer();
        for (int t = 0; t < INFER_TICKS_TRAIN; t++) do_tick();

        rates_learn();
        for (int t = 0; t < LEARN_TICKS_TRAIN; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    // Quick sample print
    rates_eval();
    for (int s = 0; s < 10; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t = 0; t < EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB] s=%0d  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f",
               s, x_samp[s][0], x_samp[s][1], y_samp[s], pred_bottom());
    end

    // =========================================================
    // Correctness check:
    // For f(x)=A*ReLU(B*ReLU(x)), we must have f(x) == f(ReLU(x)).
    // We test by comparing raw clamp vs rectified clamp at a few points.
    // =========================================================
    begin
      real x1_list[3];
      real x2_list[3];
      real x1, x2;
      real y_raw, y_rect, y_tgt_raw, y_tgt_rect;

      x1_list[0] =  1.0;  x2_list[0] = -1.0;
      x1_list[1] = -1.0;  x2_list[1] =  1.0;
      x1_list[2] = -0.3;  x2_list[2] =  0.7;

      $display("--------------------------------------------------");
      $display("[CHECK] Raw vs ReLU(x) clamp equivalence (post-training)");
      $display("--------------------------------------------------");

      for (int i = 0; i < 3; i++) begin
        x1 = x1_list[i];
        x2 = x2_list[i];

        y_raw  = eval_point(x1, x2);
        y_rect = eval_point(relu_r(x1), relu_r(x2));

        // Teacher sanity (should also satisfy f(x)=f(ReLU(x)) by construction)
        y_tgt_raw  = teacher_y(x1, x2);
        y_tgt_rect = teacher_y(relu_r(x1), relu_r(x2));

        $display("[CHECK] x=(%0.2f,%0.2f)  net_raw=%0.6f  net_rect=%0.6f  diff=%0.3e",
                 x1, x2, y_raw, y_rect, y_raw - y_rect);
        $display("[CHECK]            teacher_raw=%0.6f teacher_rect=%0.6f diff=%0.3e",
                 y_tgt_raw, y_tgt_rect, y_tgt_raw - y_tgt_rect);
      end
    end

    $finish;
  end

endmodule

`default_nettype wire
