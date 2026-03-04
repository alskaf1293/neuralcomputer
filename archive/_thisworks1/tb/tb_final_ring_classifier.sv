// ======================================================================
// tb_pc3_ring_classifier_zero_loss.sv
// 2D -> 8D -> 3D teacher MLP on a ring.
// Teacher is chosen to be exactly realizable by your PC generative links:
//   - L2->L1: h_pre = B_gt * ReLU(x)
//   - L1->L0: y      = A_gt * ReLU(h_pre)
// Same PC teacher-forcing scheme; MSE should go ~0.
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_ring_classifier;

  // ------------------------------------------------------------
  // Network shape
  // ------------------------------------------------------------
  localparam int K0 = 3;    // bottom: 3D "class score" output
  localparam int K1 = 8;    // hidden
  localparam int K2 = 2;    // top: 2D input (x0, x1 on ring)

  localparam int NUM_LAYERS = 3;
  localparam int K_LUT      [NUM_LAYERS] = '{K0, K1, K2};

  localparam int MAX_K = 8; // >= max(K0,K1,K2)

  // ------------------------------------------------------------
  // Learning parameters
  // ------------------------------------------------------------
  localparam real ALPHA_R = 0.05;   // weight learning rate
  localparam real GAMMA_R = 0.10;   // state relaxation rate

  localparam int NUM_SAMPLES        = 48;   // number of ring points
  localparam int EPOCHS             = 30;
  localparam int INF_TICKS          = 400;  // inference ticks per sample
  localparam int LEARN_TICKS        = 1;    // learning ticks per sample
  localparam int TICKS_EVAL_SETTLE  = 800;  // eval settle ticks

  // ------------------------------------------------------------
  // Clock + Reset
  // ------------------------------------------------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;   // 100 MHz
  end

  initial begin
    rst_n = 1'b0;
    #50 rst_n = 1'b1;
  end

  // ------------------------------------------------------------
  // DUT: your pc_network_nlayer
  // ------------------------------------------------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  initial begin
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  end

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),

    // Presyn activations: ReLU everywhere.
    // State: bottom linear, hidden/top ReLU.
    .ACT_PRESYN_LUT('{ACT_RELU, ACT_RELU, ACT_RELU}),
    .ACT_STATE_LUT ('{ACT_LINEAR, ACT_RELU, ACT_RELU})
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
      $fatal("DPI pack/unpack failed");
  end

  // ------------------------------------------------------------
  // Teacher: 2D x -> 8D h_pre -> 3D y
  //
  //   z = (ReLU(x0), ReLU(x1))      [2D]
  //   h_pre_k = B_gt[k][0]*z0 + B_gt[k][1]*z1    [8D, may be signed]
  //   h_relu_k = ReLU(h_pre_k)
  //   y_o = Σ_k A_gt[o][k] * h_relu_k          [3D]
  //
  // This exactly matches generative links:
  //   L2->L1: μ^1 = Θ^1 * ReLU(x)
  //   L1->L0: μ^0 = Θ^0 * ReLU(h_pre)
  // ------------------------------------------------------------
  real B_gt[K1][K2];  // [8][2]
  real A_gt[K0][K1];  // [3][8]

  initial begin
    // Hidden pre weights: simple variety of directions in (ReLU(x0), ReLU(x1))-space
    B_gt[0][0] =  1.0;  B_gt[0][1] =  0.2;
    B_gt[1][0] =  0.8;  B_gt[1][1] =  0.5;
    B_gt[2][0] =  0.4;  B_gt[2][1] =  1.0;
    B_gt[3][0] =  0.1;  B_gt[3][1] =  0.9;
    B_gt[4][0] =  0.7;  B_gt[4][1] =  0.3;
    B_gt[5][0] =  0.5;  B_gt[5][1] =  0.7;
    B_gt[6][0] =  0.2;  B_gt[6][1] =  0.6;
    B_gt[7][0] =  0.9;  B_gt[7][1] =  0.4;

    // Output mixing: 3 x 8
    // Row 0
    A_gt[0][0] =  0.8;  A_gt[0][1] = -0.4; A_gt[0][2] =  0.6; A_gt[0][3] =  0.2;
    A_gt[0][4] = -0.5;  A_gt[0][5] =  0.7; A_gt[0][6] = -0.3; A_gt[0][7] =  0.4;
    // Row 1
    A_gt[1][0] = -0.6;  A_gt[1][1] =  0.9; A_gt[1][2] = -0.2; A_gt[1][3] =  0.5;
    A_gt[1][4] =  0.3;  A_gt[1][5] = -0.7; A_gt[1][6] =  0.8; A_gt[1][7] = -0.1;
    // Row 2
    A_gt[2][0] =  0.4;  A_gt[2][1] =  0.3; A_gt[2][2] = -0.5; A_gt[2][3] =  0.7;
    A_gt[2][4] =  0.6;  A_gt[2][5] = -0.4; A_gt[2][6] =  0.2; A_gt[2][7] =  0.9;
  end

  // ------------------------------------------------------------
  // Dataset: points on a ring in 2D
  //
  // We just sample angles θ uniformly, radius fixed = 1.0:
  //   x0 = cos θ, x1 = sin θ
  //
  // Teacher defines h_pre and y as above. You can *interpret* y as
  // class scores (e.g. argmax(y) is a 3-way classifier on the ring).
  // ------------------------------------------------------------
  real x2_samples [NUM_SAMPLES][K2]; // [s][0..1]
  real h_targets  [NUM_SAMPLES][K1]; // h_pre
  real y_targets  [NUM_SAMPLES][K0]; // class-score outputs

  function automatic real relu_r(input real x);
    return (x > 0.0) ? x : 0.0;
  endfunction

  task automatic build_dataset();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      real theta;
      real x0, x1;
      real h_pre[K1];
      real h_relu[K1];
      real z0, z1;

      // Angle θ from -π to π
      theta = -3.141592653589793 + 2.0*3.141592653589793 * real'(s) / real'(NUM_SAMPLES);

      // Ring of radius 1.0
      x0 = $cos(theta);
      x1 = $sin(theta);

      x2_samples[s][0] = x0;
      x2_samples[s][1] = x1;

      // Pre-activations from ReLU(x0), ReLU(x1)
      z0 = relu_r(x0);
      z1 = relu_r(x1);

      // Hidden pre: h_pre_k = B_gt[k]*[z0,z1]
      for (int k = 0; k < K1; k++) begin
        real acc = B_gt[k][0]*z0 + B_gt[k][1]*z1;
        h_pre[k] = acc;
        h_targets[s][k] = acc;   // we clamp to this "pre" value
        h_relu[k] = relu_r(acc);
      end

      // Output: y = A_gt * ReLU(h_pre)
      for (int o = 0; o < K0; o++) begin
        real acc = 0.0;
        for (int j = 0; j < K1; j++)
          acc += A_gt[o][j] * h_relu[j];
        y_targets[s][o] = acc;
      end
    end
  endtask

  // ------------------------------------------------------------
  // Learning-rate setters
  // ------------------------------------------------------------
  task automatic set_rates_infer();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_learn();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(0.0);
  endtask

  task automatic set_rates_eval();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // ------------------------------------------------------------
  // Tick driver (same pattern as your other TBs)
  // ------------------------------------------------------------
  logic start_q, done_q, done_edge_flag;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q <= 1'b0;
    else        start_q <= start_tick;
  end
  wire start_edge = start_tick & ~start_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_q         <= 1'b0;
      done_edge_flag <= 1'b0;
    end else begin
      if (start_edge) done_edge_flag <= 1'b0;
      done_q <= done_o;
      if (done_o & ~done_q) done_edge_flag <= 1'b1;
    end
  end

  task automatic do_tick();
    int guard = 0;
    @(posedge clk); start_tick = 1'b1;
    @(posedge clk); start_tick = 1'b0;

    while (!done_edge_flag) begin
      @(posedge clk);
      guard++;
      if (guard > 10000)
        $fatal("Tick deadlock");
    end
  endtask

  // ------------------------------------------------------------
  // Clamping helpers
  // ------------------------------------------------------------

  // Training: clamp ALL layers to teacher (x, h_pre, y)
  task automatic clamp_for_train(input int s);
    // L2 (top input: 2D)
    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end

    // L1 (hidden pre)
    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b1;
      x_obs_flat_all[1][32*i +: 32] = f2b(h_targets[s][i]);
    end

    // L0 (output y)
    for (int i = 0; i < K0; i++) begin
      x_set_en_all[0][i] = 1'b1;
      x_obs_flat_all[0][32*i +: 32] = f2b(y_targets[s][i]);
    end
  endtask

  // Eval: clamp only top input; hidden & output free
  task automatic clamp_for_eval(input int s);
    // L2 ON
    for (int i = 0; i < K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end

    // L1 OFF
    for (int i = 0; i < K1; i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0;
    end

    // L0 OFF
    for (int i = 0; i < K0; i++) begin
      x_set_en_all[0][i] = 1'b0;
      x_obs_flat_all[0][32*i +: 32] = 32'h0;
    end
  endtask

  // ------------------------------------------------------------
  // MSE evaluation on y
  // ------------------------------------------------------------
  function automatic real mse_sample(input int sidx);
    real acc = 0.0;
    for (int i = 0; i < K0; i++) begin
      real pred = b2f(uut.x_state_global[0][i]); // bottom layer
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
      clamp_for_eval(s);
      for (int t = 0; t < TICKS_EVAL_SETTLE; t++)
        do_tick();
      acc += mse_sample(s);
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  // ------------------------------------------------------------
  // Helper: argmax over 3 outputs (for "class" view)
  // ------------------------------------------------------------
  function automatic int argmax3(input real y0, input real y1, input real y2);
    if (y0 >= y1 && y0 >= y2) return 0;
    else if (y1 >= y2)       return 1;
    else                     return 2;
  endfunction

  // ------------------------------------------------------------
  // Main training loop
  // ------------------------------------------------------------
  initial begin
    real mse0, msep;

    // Vars for final dump (must be declared before statements)
    real x0, x1;
    real yt0, yt1, yt2;
    real yp0, yp1, yp2;
    int  ct, cp;

    build_dataset();

    wait (rst_n);
    repeat(5) @(posedge clk);

    // Initial eval
    mse0 = mse_dataset();
    $display("[RING] Initial MSE = %f", mse0);

    $display("[RING] Begin ring PC supervised training...");

    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int s = 0; s < NUM_SAMPLES; s++) begin

        // Phase 1: inference with full clamp
        clamp_for_train(s);
        set_rates_infer();
        for (int t = 0; t < INF_TICKS; t++)
          do_tick();

        // Phase 2: learning with full clamp
        set_rates_learn();
        for (int t = 0; t < LEARN_TICKS; t++)
          do_tick();
      end

      // Evaluate after epoch
      msep = mse_dataset();
      $display("[RING] Epoch %0d  MSE = %f", ep, msep);
    end

    // Final detailed dump: show y_target vs y_pred and "class" (argmax) around ring
    set_rates_eval();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_for_eval(s);
      for (int t = 0; t < TICKS_EVAL_SETTLE; t++)
        do_tick();

      x0 = x2_samples[s][0];
      x1 = x2_samples[s][1];

      yt0 = y_targets[s][0];
      yt1 = y_targets[s][1];
      yt2 = y_targets[s][2];

      yp0 = b2f(uut.x_state_global[0][0]);
      yp1 = b2f(uut.x_state_global[0][1]);
      yp2 = b2f(uut.x_state_global[0][2]);

      ct = argmax3(yt0, yt1, yt2);
      cp = argmax3(yp0, yp1, yp2);

      $display("[RING] sample %0d  x=[%0.3f %0.3f]  target=[%0.3f %0.3f %0.3f] (c=%0d)  pred=[%0.3f %0.3f %0.3f] (c=%0d)",
               s, x0, x1,
               yt0, yt1, yt2, ct,
               yp0, yp1, yp2, cp);
    end

    $finish;
  end

endmodule

`default_nettype wire
