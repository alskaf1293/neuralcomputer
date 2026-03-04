// tb_pc3_learn_relu_mimo_evalsplit.sv
`timescale 1ns/1ps
`default_nettype none

// DPI imports matching dpi_casts.cc
import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_learn_relu_mimo;

  // -----------------------
  // Sizes / params
  // -----------------------
  localparam int K0 = 3;   // bottom (L0)
  localparam int K1 = 8;   // middle
  localparam int K2 = 2;   // top
  localparam int EXP = 8;
  localparam int SIG = 24;

  localparam int  NUM_SAMPLES = 10;
  localparam int  TICKS_PER_S = 40;     // training ticks per sample
  localparam int  EPOCHS      = 12;

  localparam real ALPHA_R = 0.012;
  localparam real GAMMA_R = 0.09;

  // Eval relaxation window (let top clamp propagate)
  localparam int  TICKS_EVAL_SETTLE = 600; // try 40–80 if needed

  // -----------------------
  // Multi layer core config
  // -----------------------
  localparam int NUM_LAYERS = 3;
  // MAX_K = max(K0, K1, K2)
  localparam int MAX01 = (K0 > K1) ? K0 : K1;
  localparam int MAX_K = (MAX01 > K2) ? MAX01 : K2;

  // K vector and REG_BACK vector for the generic core
  localparam int K_LUT      [NUM_LAYERS]     = '{K0, K1, K2};
  localparam bit REG_BACK_LUT[NUM_LAYERS-1] = '{1'b1, 1'b1};

  // -----------------------
  // Clock / reset
  // -----------------------
  logic clk, rst_n;
  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk; // 100 MHz
  end
  initial begin
    rst_n = 1'b0;
    #50 rst_n = 1'b1;
  end

  // -----------------------
  // DUT wiring
  // -----------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  // Clamp bits (unpacked, used by TB logic)
  logic [K0-1:0] x0_set_en;
  logic [K1-1:0] x1_set_en;
  logic [K2-1:0] x2_set_en;

  // Clamp values packed per layer (TB side)
  logic [32*K0-1:0] x0_obs_flat;
  logic [32*K1-1:0] x1_obs_flat;
  logic [32*K2-1:0] x2_obs_flat;

  // Generic core clamp buses
  logic [NUM_LAYERS-1:0][MAX_K-1:0]      x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0]   x_obs_flat_all;

  // Pack TB-layer signals into generic arrays
  always_comb begin
    int i;

    // default zeros
    x_set_en_all   = '0;
    x_obs_flat_all = '0;

    // L0
    for (i = 0; i < K0; i++) begin
      x_set_en_all[0][i]               = x0_set_en[i];
      x_obs_flat_all[0][32*i +: 32]    = x0_obs_flat[32*i +: 32];
    end

    // L1
    for (i = 0; i < K1; i++) begin
      x_set_en_all[1][i]               = x1_set_en[i];
      x_obs_flat_all[1][32*i +: 32]    = x1_obs_flat[32*i +: 32];
    end

    // L2
    for (i = 0; i < K2; i++) begin
      x_set_en_all[2][i]               = x2_set_en[i];
      x_obs_flat_all[2][32*i +: 32]    = x2_obs_flat[32*i +: 32];
    end
  end

  // -----------------------
  // DUT - generic N layer core
  // -----------------------
  pc_network_nlayer #(
    .NUM_LAYERS(3),
    .MAX_K(8),
    .K_LUT('{3,8,2}),
    .ACT_STATE_LUT('{ACT_LINEAR, ACT_RELU, ACT_RELU}),   // bottom linear, others ReLU
    .ACT_PRESYN_LUT('{ACT_RELU, ACT_RELU, ACT_RELU})
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

  // -----------------------
  // DPI pack/unpack helpers
  // -----------------------
  function automatic [31:0] f2b (input real r);
    f2b = real_to_f32(r);
  endfunction
  function automatic real b2f (input [31:0] b);
    int unsigned u; u = b;
    return f32_to_real(u);
  endfunction

  // quick DPI sanity on elaboration
  initial begin
    logic [31:0] one_bits = f2b(1.0);
    $display("[TB] real_to_f32(1.0) = 0x%08h (expect 3F800000)", one_bits);
    if (one_bits !== 32'h3F800000) $fatal(1, "[TB] DPI pack/unpack sanity failed");
  end

  // -----------------------
  // Ground-truth mapping
  // y = relu(W1 * relu(x2))
  // -----------------------
  real W1[K0][K2];
  initial begin
    W1[0][0] =  1.00; W1[0][1] = -0.50;
    W1[1][0] = -0.80; W1[1][1] =  0.90;
    W1[2][0] =  0.60; W1[2][1] =  0.75;
  end

  // Dataset
  real x2_samples [NUM_SAMPLES][K2];
  real x0_targets [NUM_SAMPLES][K0];

  function automatic real relu_r (input real x);
    return (x > 0.0) ? x : 0.0;
  endfunction

  task automatic build_dataset();
      real z0, z1, lin;
      real u0, u1;

      void'($urandom(32'hC0FFEE));

      for (int s=0; s<NUM_SAMPLES; s++) begin
          u0 = -1.2 + 2.4 * real'(s) / real'(NUM_SAMPLES - 1);
          u1 = 1.1 * $sin(1.3 * real'(s));

          x2_samples[s][0] = u0;
          x2_samples[s][1] = u1;

          z0 = (u0 > 0.0) ? u0 : 0.0;
          z1 = (u1 > 0.0) ? u1 : 0.0;

          for (int o=0; o<K0; o++) begin
            lin = W1[o][0]*z0 + W1[o][1]*z1;
            x0_targets[s][o] = (lin > 0.0) ? lin : 0.0;
          end
      end
  endtask

  // -----------------------
  // Rate setters
  // -----------------------
  task automatic set_rates_train();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_eval(); // freeze weights, keep state dynamics
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // -----------------------
  // Start/done edge detection (TB-side)
  // -----------------------
  logic start_q_tb, start_edge_tb;
  logic done_q_tb,  done_edge_flag;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q_tb <= 1'b0;
    else        start_q_tb <= start_tick;
  end
  assign start_edge_tb = start_tick & ~start_q_tb;

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
    bit saw_busy = 0;

    @(posedge clk); start_tick = 1'b1;
    @(posedge clk); start_tick = 1'b0;

    while (!done_edge_flag) begin
      @(posedge clk);
      guard++;
      if (!saw_busy && busy_o) saw_busy = 1;
      if (guard > 4096) begin
        $display("[TB][FATAL] No done_o edge. saw_busy=%0b  busy_o=%0b", saw_busy, busy_o);
        $finish;
      end
    end
  endtask

  // -----------------------
  // TRAIN vs EVAL clamp tasks (unchanged)
  // -----------------------
  task automatic clamp_for_train(input int s);
    // L0: clamp to targets (teacher forcing bottom)
    for (int k=0; k<K0; k++) x0_set_en[k] = 1'b1;
    // L2: clamp inputs
    for (int k=0; k<K2; k++) x2_set_en[k] = 1'b1;
    // L1: free
    for (int k=0; k<K1; k++) x1_set_en[k] = 1'b0;

    for (int i=0; i<K0; i++)
      x0_obs_flat[32*i +: 32] = f2b(x0_targets[s][i]);

    for (int i=0; i<K2; i++)
      x2_obs_flat[32*i +: 32] = f2b(x2_samples[s][i]);

    for (int i=0; i<K1; i++)
      x1_obs_flat[32*i +: 32] = f2b(0.0);
  endtask

  task automatic clamp_for_eval(input int s);
    for (int k=0; k<K0; k++) x0_set_en[k] = 1'b0;
    for (int k=0; k<K2; k++) x2_set_en[k] = 1'b1;
    for (int k=0; k<K1; k++) x1_set_en[k] = 1'b0;

    for (int i=0; i<K2; i++)
      x2_obs_flat[32*i +: 32] = f2b(x2_samples[s][i]);

    for (int i=0; i<K1; i++)
      x1_obs_flat[32*i +: 32] = f2b(0.0);
    for (int i=0; i<K0; i++)
      x0_obs_flat[32*i +: 32] = 32'h0000_0000;
  endtask

  task automatic assert_unclamped_eval();
    if (|x0_set_en) $fatal(1, "[TB] Eval is clamped at L0 - turn x0_set_en off for a real prediction.");
  endtask

  // -----------------------
  // Probe helpers
  // -----------------------
  task automatic probe_clamp_paths(input int sidx);
    $display("[CHK] s=%0d  L0.x_set_en_vec = %b", sidx, uut.G_LAYER[0].L.x_set_en_vec);
    for (int i=0;i<K0;i++) begin
      $display("[CHK] s=%0d  L0.x_obs_ieee_vec[%0d]=%f", sidx, i, b2f(uut.G_LAYER[0].L.x_obs_ieee_vec[i]));
      $display("[CHK] s=%0d  L0.x_state_ieee[%0d] (pre-tick) = %f", sidx, i, b2f(uut.G_LAYER[0].L.x_state_ieee[i]));
    end
  endtask

  // -----------------------
  // MSE helpers
  // -----------------------
  function automatic real mse_l0_current_targets(input int sidx);
      real e2, xi, ti, d;
      e2 = 0.0;
      for (int i=0; i<K0; i++) begin
          real xi_lin = b2f(uut.G_LAYER[0].L.x_state_ieee[i]);
          xi = (xi_lin > 0.0) ? xi_lin : 0.0;
          ti = x0_targets[sidx][i];
          d  = xi - ti;
          e2 += d*d;
      end
      return e2 / real'(K0);
  endfunction


  function automatic real mse_dataset();
    real acc;
    acc = 0.0;

    set_rates_eval();

    for (int s=0; s<NUM_SAMPLES; s++) begin
      clamp_for_eval(s);
      assert_unclamped_eval();

      for (int t=0; t<TICKS_EVAL_SETTLE; t++) do_tick();

      acc += mse_l0_current_targets(s);
    end

    set_rates_train();

    return acc / real'(NUM_SAMPLES);
  endfunction

  // -----------------------
  // Endianness self test
  // -----------------------
  task automatic selftest_bus_unpack();
    real probe_vec[K0]; probe_vec = '{1.0, 2.0, 3.0};

    for (int i=0; i<K0; i++) x0_obs_flat[32*i +: 32] = f2b(probe_vec[i]);
    @(posedge clk);

    $display("[SELFTEST] x0_obs_flat -> uut.G_LAYER[0].L.x_obs_ieee_vec");
    for (int i=0; i<K0; i++) begin
      real u = b2f(uut.G_LAYER[0].L.x_obs_ieee_vec[i]);
      $display("  idx %0d : %f (expect %f)", i, u, probe_vec[i]);
      if (u !== probe_vec[i])
        $warning("[SELFTEST] Mismatch at idx %0d: got %f expect %f (flip slice if persistent)", i, u, probe_vec[i]);
    end
  endtask

  // -----------------------
  // Main
  // -----------------------
  initial begin
    real mse0, msep, msef;

    start_tick = 1'b0;
    x0_set_en='0; x1_set_en='0; x2_set_en='0;
    x0_obs_flat='0; x1_obs_flat='0; x2_obs_flat='0;

    build_dataset();

    wait (rst_n);
    repeat (5) @(posedge clk);

    selftest_bus_unpack();

    set_rates_train();

    mse0 = mse_dataset();
    $display("[TB] Initial (untrained) Eval MSE = %f", mse0);

    $display("\n[TB] Start training  K0=%0d K1=%0d K2=%0d  S=%0d  T/sample=%0d  epochs=%0d",
             K0,K1,K2,NUM_SAMPLES,TICKS_PER_S,EPOCHS);

    for (int ep=0; ep<EPOCHS; ep++) begin
      set_rates_train();

      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_for_train(s);
        if (ep==0 && (s==5 || s==6)) probe_clamp_paths(s);
        for (int t=0; t<TICKS_PER_S; t++) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d Eval MSE = %f", ep, msep);
    end

    msef = mse_dataset();
    $display("[TB] Final Eval MSE = %f", msef);

    set_rates_eval();

    for (int s=0; s<NUM_SAMPLES; s++) begin
      clamp_for_eval(s);
      assert_unclamped_eval();
      for (int t=0; t<TICKS_EVAL_SETTLE; t++) do_tick();

      $write("[TB] s=%0d  x2=[", s);
      for (int j=0; j<K2; j++) $write(" %0.3f", x2_samples[s][j]);
      $write(" ]  target=[");
      for (int i=0; i<K0; i++) $write(" %0.3f", x0_targets[s][i]);
      $write(" ]  pred=[");
      for (int i=0; i<K0; i++) $write(" %0.3f", b2f(uut.G_LAYER[0].L.x_state_ieee[i]));
      $display(" ]");
    end

    $finish;
  end

endmodule

`default_nettype wire
