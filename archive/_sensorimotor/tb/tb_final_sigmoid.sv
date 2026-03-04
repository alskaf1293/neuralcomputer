// ============================================================================
// tb_pc4_sigmoid_tanh_teacher.sv
//
// 4-layer network (bottom->top):
//   L0 (K0=1): output,     presyn activation ACT_SIGMOID
//   L1 (K1=H): hidden1,    presyn activation ACT_TANH
//   L2 (K2=2): hidden2,    presyn activation ACT_LINEAR  (identity map)
//   L3 (K3=2): input clamp presyn activation ACT_LINEAR
//
// Teacher is EXACTLY in the class:
//   y = σ( A * tanh(B x + b2) + b1 )
//
// Implementation trick to keep teacher exact with 4 layers:
//   hidden2 is forced to identity in the TEACHER computation (h2 = x),
//   and you should preset THETA_L2 to identity in theta_init_pkg.
//
// REQUIRED theta_init_pkg sizing for this TB:
//   THETA_L0 : [K0][K1] = [1][H]      (learns A; do NOT force to 1.0)
//   THETA_L1 : [K1][K2] = [H][2]      (learns B)
//   THETA_L2 : [K2][K3] = [2][2]      (preset to I; optional but recommended)
//
// NOTE: Biases are learned via the internal bias lane in your neuron core.
// ============================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc4_sigmoid;

  // -------------------------
  // Shape (bottom->top): 1 -> H -> 2 -> 2
  // -------------------------
  localparam int K0 = 1;
  localparam int H  = 2;   // hidden1 width (and teacher width)
  localparam int K1 = H;
  localparam int K2 = 2;   // hidden2 width fixed to 2 so identity is natural
  localparam int K3 = 2;   // input

  localparam int NUM_LAYERS = 4;
  localparam int MAX_K = (H > 2) ? H : 2;

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Dataset: 2D grid
  // -------------------------
  localparam int NX = 9;
  localparam int NY = 9;
  localparam int NUM_SAMPLES = NX*NY;

  real x3_samples[NUM_SAMPLES][K3];
  real y_targets [NUM_SAMPLES][K0];

  // Teacher parameters for y = sigmoid( A*tanh(Bx+b2) + b1 )
  real A_gt[1][H];
  real B_gt[H][2];
  real b2_gt[H];
  real b1_gt;

  // -------------------------
  // Schedule / rates
  // -------------------------
  localparam real ALPHA_R = 0.02;
  localparam real GAMMA_R = 0.10;

  localparam int INFER_TICKS_PER_SAMPLE = 300;
  localparam int LEARN_TICKS_PER_SAMPLE = 15;
  localparam int EVAL_SETTLE_TICKS      = 500;

  localparam int EPOCHS = 25;

  // -------------------------
  // Clock/reset
  // -------------------------
  logic clk, rst_n;
  initial begin clk=1'b0; forever #5 clk=~clk; end
  initial begin rst_n=1'b0; #50 rst_n=1'b1; end

  // -------------------------
  // DUT interface
  // -------------------------
  logic start_tick;
  logic busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  logic [NUM_LAYERS*MAX_K-1:0]    x_set_en_all_flat;
  logic [NUM_LAYERS*MAX_K*32-1:0] x_obs_all_flat_ieee;

  generate
    for (genvar l = 0; l < NUM_LAYERS; l++) begin : G_PACK_L
      for (genvar i = 0; i < MAX_K; i++) begin : G_PACK_I
        localparam int LN = l*MAX_K + i;
        assign x_set_en_all_flat[LN] = x_set_en_all[l][i];
        assign x_obs_all_flat_ieee[32*LN +: 32] = x_obs_flat_all[l][32*i +: 32];
      end
    end
  endgenerate

  pc_network_nlayer #(
  .NUM_LAYERS(NUM_LAYERS),
  .MAX_K(MAX_K),

  // match TB shape bottom->top: 1 -> H -> 2 -> 2
  .K0(K0),
  .K1(K1),
  .K2(K2),
  .K3(K3),

  // match TB activations per layer
  .ACT0(ACT_SIGMOID),
  .ACT1(ACT_TANH),
  .ACT2(ACT_LINEAR),
  .ACT3(ACT_LINEAR),

  .M0(0),
  .EXP(EXP),
  .SIG(SIG)
) uut (
    .clk(clk),
    .rst_n(rst_n),
    .start_tick(start_tick),
    .alpha_ieee(alpha_ieee),
    .gamma_ieee(gamma_ieee),
    .x_set_en_all_flat(x_set_en_all_flat),
    .x_obs_all_flat_ieee(x_obs_all_flat_ieee),
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

  function automatic real sigmoid_r(input real z);
    real ez;
    begin
      if (z >= 0.0) begin
        ez = $exp(-z);
        sigmoid_r = 1.0 / (1.0 + ez);
      end else begin
        ez = $exp(z);
        sigmoid_r = ez / (1.0 + ez);
      end
    end
  endfunction

  function automatic real tanh_r(input real z);
    real ezp, ezm;
    begin
      ezp = $exp(z);
      ezm = $exp(-z);
      tanh_r = (ezp - ezm) / (ezp + ezm);
    end
  endfunction

  // -------------------------
  // Rates
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
  // Tick driver (done-edge)
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
  task automatic clear_clamps();
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  endtask

  // Train: clamp input (layer 3) and target (layer 0)
  task automatic clamp_top_bottom(input int s);
    clear_clamps();

    // top clamp: L3 input
    for (int i=0;i<K3;i++) begin
      x_set_en_all[3][i] = 1'b1;
      x_obs_flat_all[3][32*i +: 32] = f2b(x3_samples[s][i]);
    end

    // bottom clamp: L0 target
    x_set_en_all[0][0] = 1'b1;
    x_obs_flat_all[0][0 +: 32] = f2b(y_targets[s][0]);
  endtask

  // Eval: clamp input only
  task automatic clamp_top_only(input int s);
    clear_clamps();
    for (int i=0;i<K3;i++) begin
      x_set_en_all[3][i] = 1'b1;
      x_obs_flat_all[3][32*i +: 32] = f2b(x3_samples[s][i]);
    end
  endtask

  // -------------------------
  // Teacher + dataset
  // -------------------------
  task automatic init_teacher_params();
    // Moderate values to avoid full saturation
    A_gt[0][0] =  1.4;
    A_gt[0][1] = -0.6;

    B_gt[0][0] =  1.2;  B_gt[0][1] = -0.7;
    B_gt[1][0] =  0.4;  B_gt[1][1] =  1.1;

    b2_gt[0] =  0.25;
    b2_gt[1] = -0.15;

    b1_gt = 0.10;
  endtask

  task automatic build_dataset();
    localparam real X0_MIN = -1.0;
    localparam real X0_MAX =  1.0;
    localparam real X1_MIN = -1.0;
    localparam real X1_MAX =  1.0;

    int s, ix, iy;
    real x0, x1;
    real h1[H];
    real z;

    init_teacher_params();

    for (s=0; s<NUM_SAMPLES; s++) begin
      ix = s % NX;
      iy = s / NX;

      x0 = X0_MIN + (X0_MAX - X0_MIN) * ((NX==1) ? 0.0 : real'(ix)/real'(NX-1));
      x1 = X1_MIN + (X1_MAX - X1_MIN) * ((NY==1) ? 0.0 : real'(iy)/real'(NY-1));

      x3_samples[s][0] = x0;
      x3_samples[s][1] = x1;

      // Teacher uses h2 = x (hidden2 is identity), so h1 = tanh(Bx + b2)
      for (int j=0; j<H; j++) begin
        h1[j] = tanh_r(B_gt[j][0]*x0 + B_gt[j][1]*x1 + b2_gt[j]);
      end

      // z = A*h1 + b1
      z = b1_gt;
      for (int j=0; j<H; j++) begin
        z += A_gt[0][j] * h1[j];
      end

      // y = sigmoid(z)
      y_targets[s][0] = sigmoid_r(z);
    end
  endtask

  // -------------------------
  // Metrics
  // -------------------------
  function automatic real mse_sample(input int sidx);
    real pred = b2f(uut.x_state_global[0][0]); // output state
    real d    = pred - y_targets[sidx][0];
    return d*d;
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;
    set_rates_eval();
    for (int s=0; s<NUM_SAMPLES; s++) begin
      clamp_top_only(s);
      for (int t=0; t<EVAL_SETTLE_TICKS; t++) do_tick();
      acc += mse_sample(s);
    end
    return acc / real'(NUM_SAMPLES);
  endfunction

      // -------------------------
  // Prediction dump
  // -------------------------
  task automatic dump_predictions();
    real y_pred;
    $display("--------------------------------------------------");
    $display("[TB] Predictions: (x0, x1) -> y_target | y_pred");
    $display("--------------------------------------------------");

    set_rates_eval();

    for (int s=0; s<NUM_SAMPLES; s++) begin
      clamp_top_only(s);

      for (int t=0; t<EVAL_SETTLE_TICKS; t++) begin
        do_tick();
      end

      y_pred = b2f(uut.x_state_global[0][0]);

      $display(" %7.3f %7.3f  ->  %8.5f | %8.5f",
        x3_samples[s][0],
        x3_samples[s][1],
        y_targets[s][0],
        y_pred
      );
    end
  endtask


  // -------------------------
  // Main
  // -------------------------
  initial begin
    real mse0, msep;

    start_tick = 1'b0;
    clear_clamps();
    build_dataset();

    wait(rst_n);
    repeat (5) @(posedge clk);

    mse0 = mse_dataset();
    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Teacher: y = sigmoid( A*tanh(Bx + b2) + b1 )");
    $display("[TB] 4-layer net: 2 -> 2 -> H -> 1 (top->bottom), with hidden2 linear identity");
    $display("[TB] H=%0d  b1=%0.4f", H, b1_gt);
    $display("[TB] A=[%0.4f,%0.4f]", A_gt[0][0], A_gt[0][1]);
    $display("[TB] b2=[%0.4f,%0.4f]", b2_gt[0], b2_gt[1]);

    for (int ep=0; ep<EPOCHS; ep++) begin
      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_top_bottom(s);

        set_rates_infer();
        for (int t=0; t<INFER_TICKS_PER_SAMPLE; t++) do_tick();

        set_rates_learn();
        for (int t=0; t<LEARN_TICKS_PER_SAMPLE; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    dump_predictions();

    $finish;
  end

endmodule

`default_nettype wire
