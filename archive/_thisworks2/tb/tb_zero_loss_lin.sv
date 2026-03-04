`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_two_phase;

  // ------------------------------------------------------------
  // Parameters: single pc_layer
  // ------------------------------------------------------------
  localparam int K_OUT = 3;   // outputs (bottom neurons)
  localparam int N_IN  = 2;   // presynaptic inputs
  localparam int M_BACK = 1;  // dummy back-in dim (tied to zero)

  localparam int EXP = 8;
  localparam int SIG = 24;

  localparam int NUM_SAMPLES = 10;
  localparam int EPOCHS      = 5;

  // Learning and dynamics
  localparam real ALPHA_R = 0.05;    // weight LR
  localparam real GAMMA_R = 0.10;    // state LR (for eval)

  // Training schedule
  localparam int TRAIN_TICKS_PER_SAMPLE = 400;   // gradient steps per sample
  localparam int TICKS_EVAL_SETTLE      = 800;   // relax steps for eval

  // ------------------------------------------------------------
  // Clock + reset
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
  // DUT: single pc_layer
  // ------------------------------------------------------------
  logic        start_tick;
  logic        busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  // Clamp control for this layer
  logic [K_OUT-1:0] x_set_en_vec;
  logic [31:0]      x_obs_ieee_vec[K_OUT];

  // Presynaptic inputs (N_IN)
  logic [31:0]      x_up_ieee[N_IN];

  // Dummy back inputs (M_BACK x K_OUT) tied to zero
  logic [31:0]      back_from_down_ieee[M_BACK][K_OUT];

  // Outputs
  logic             back_up_valid_o;
  logic [31:0]      back_matrix_kn_ieee[K_OUT][N_IN];
  logic [31:0]      back_matrix_nk_ieee[N_IN][K_OUT];
  logic [31:0]      x_state_ieee[K_OUT];

  // Tie back_from_down to 0
  genvar gi;
  generate
    for (gi = 0; gi < K_OUT; gi++) begin : G_BACK_ZERO
      assign back_from_down_ieee[0][gi] = 32'h0000_0000;
    end
  endgenerate

  pc_layer #(
    .K(K_OUT),
    .N(N_IN),
    .M(M_BACK),
    .EXP(EXP),
    .SIG(SIG),

    // Hard clamp states when x_set_en_vec[i] = 1
    .CLAMP_HARD_THIS_LAYER(1'b1),

    .ACT_PRESYN_THIS_LAYER(ACT_RELU),
    .ACT_STATE_THIS_LAYER (ACT_LINEAR)
    // THETA_PRESET_IEEE_THIS_LAYER, X_INIT_IEEE_THIS_LAYER use defaults (0)
  ) uut (
    .clk(clk),
    .rst_n(rst_n),

    .start_tick(start_tick),
    .busy_o(busy_o),
    .done_o(done_o),

    .alpha_ieee(alpha_ieee),
    .gamma_ieee(gamma_ieee),

    .x_set_en_vec(x_set_en_vec),
    .x_obs_ieee_vec(x_obs_ieee_vec),

    .x_up_ieee(x_up_ieee),
    .back_from_down_ieee(back_from_down_ieee),

    .back_up_valid_o(back_up_valid_o),
    .back_matrix_kn_ieee(back_matrix_kn_ieee),
    .back_matrix_nk_ieee(back_matrix_nk_ieee),

    .x_state_ieee(x_state_ieee)
  );

  // ------------------------------------------------------------
  // DPI pack/unpack utilities
  // ------------------------------------------------------------
  function automatic [31:0] f2b (input real r);
    f2b = real_to_f32(r);
  endfunction

  function automatic real b2f (input [31:0] b);
    int unsigned u; u = b;
    return f32_to_real(u);
  endfunction

  initial begin
    logic [31:0] one_bits = f2b(1.0);
    if (one_bits !== 32'h3F800000)
      $fatal("[TB] DPI conversion incorrect.");
  end

  // ------------------------------------------------------------
  // Ground truth teacher: y = A_gt * ReLU(x_in)
  // ------------------------------------------------------------
  real A_gt[K_OUT][N_IN];

  initial begin
    A_gt[0][0] =  1.00;  A_gt[0][1] = -0.50;
    A_gt[1][0] = -0.80;  A_gt[1][1] =  0.90;
    A_gt[2][0] =  0.60;  A_gt[2][1] =  0.75;
  end

  // ------------------------------------------------------------
  // Dataset
  // ------------------------------------------------------------
  real x_in_samples[NUM_SAMPLES][N_IN];
  real y_targets   [NUM_SAMPLES][K_OUT];

  function automatic real relu_r (input real x);
    return (x > 0.0) ? x : 0.0;
  endfunction

  task automatic build_dataset();
    for (int s = 0; s < NUM_SAMPLES; s++) begin
      real x[N_IN];
      real xr[N_IN];

      // Some 2D curve of inputs
      real u0 = -1.2 + 2.4 * real'(s) / real'(NUM_SAMPLES - 1);
      real u1 =  1.1 * $sin(1.3 * real'(s));

      x[0] = u0;
      x[1] = u1;

      // Store inputs
      x_in_samples[s][0] = x[0];
      x_in_samples[s][1] = x[1];

      // Teacher: y = A_gt * ReLU(x)
      xr[0] = relu_r(x[0]);
      xr[1] = relu_r(x[1]);

      for (int o = 0; o < K_OUT; o++) begin
        real acc = 0.0;
        for (int j = 0; j < N_IN; j++)
          acc += A_gt[o][j] * xr[j];
        y_targets[s][o] = acc;  // linear outputs
      end
    end
  endtask

  // ------------------------------------------------------------
  // Learning-rate modes
  // ------------------------------------------------------------
  task automatic set_rates_train();
    alpha_ieee = f2b(ALPHA_R);  // learn weights
    gamma_ieee = f2b(0.0);      // freeze state (clamp handles state anyway)
  endtask

  task automatic set_rates_eval();
    alpha_ieee = f2b(0.0);      // no weight update
    gamma_ieee = f2b(GAMMA_R);  // relax state toward μ
  endtask

  // ------------------------------------------------------------
  // Tick driver for single pc_layer
  // ------------------------------------------------------------
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
      if (guard > 4096)
        $fatal("[TB] Tick deadlock.");
    end
  endtask

  // ------------------------------------------------------------
  // Clamp helpers
  // ------------------------------------------------------------

  // Training: outputs clamped to targets, inputs clamped to x_in
  task automatic clamp_for_train(input int s);
    // outputs: clamp all K_OUT states to y_targets
    for (int i = 0; i < K_OUT; i++) begin
      x_set_en_vec[i]      = 1'b1;
      x_obs_ieee_vec[i]    = f2b(y_targets[s][i]);
    end

    // inputs: drive x_up_ieee with raw inputs
    for (int j = 0; j < N_IN; j++) begin
      x_up_ieee[j]         = f2b(x_in_samples[s][j]);
    end
  endtask

  // Eval: outputs free, inputs clamped
  task automatic clamp_for_eval(input int s);
    // outputs: free
    for (int i = 0; i < K_OUT; i++) begin
      x_set_en_vec[i]      = 1'b0;
      x_obs_ieee_vec[i]    = 32'h00000000;
    end

    // inputs: drive x_up_ieee
    for (int j = 0; j < N_IN; j++) begin
      x_up_ieee[j]         = f2b(x_in_samples[s][j]);
    end
  endtask

  // ------------------------------------------------------------
  // MSE evaluation on layer output
  // ------------------------------------------------------------
  function automatic real mse_sample(input int sidx);
    real acc = 0.0;
    for (int i = 0; i < K_OUT; i++) begin
      real pred = b2f(x_state_ieee[i]);   // bottom states are predictions
      real t    = y_targets[sidx][i];
      real d    = pred - t;
      acc      += d*d;
    end
    return acc / real'(K_OUT);
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;

    set_rates_eval(); // inference-only

    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_for_eval(s);
      for (int t = 0; t < TICKS_EVAL_SETTLE; t++)
        do_tick();
      acc += mse_sample(s);
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  // ------------------------------------------------------------
  // Main
  // ------------------------------------------------------------
  initial begin
    real mse0, msep;

    start_tick      = 1'b0;
    x_set_en_vec    = '0;
    for (int i = 0; i < K_OUT; i++) x_obs_ieee_vec[i] = 32'h00000000;
    for (int j = 0; j < N_IN; j++)  x_up_ieee[j]      = 32'h00000000;

    build_dataset();

    @(posedge rst_n);
    repeat (5) @(posedge clk);

    // Initial eval
    mse0 = mse_dataset();
    $display("[TB] Initial untrained MSE = %f", mse0);

    // ------------------------------
    // Simple local training loop
    // ------------------------------
    $display("[TB] Begin single-layer supervised training...");

    for (int ep = 0; ep < EPOCHS; ep++) begin
      set_rates_train();

      for (int s = 0; s < NUM_SAMPLES; s++) begin
        clamp_for_train(s);

        // each tick does:
        //  - compute μ = θ*ReLU(x_in)
        //  - ε = x_obs - μ   (because of clamp)
        //  - update θ_j += α ε ReLU(x_in_j)
        for (int t = 0; t < TRAIN_TICKS_PER_SAMPLE; t++)
          do_tick();
      end

      // Eval after epoch
      msep = mse_dataset();
      $display("[TB] Epoch %0d MSE = %f", ep, msep);
    end

    // Final detailed outputs
    set_rates_eval();

    for (int s = 0; s < NUM_SAMPLES; s++) begin
      clamp_for_eval(s);
      for (int t = 0; t < TICKS_EVAL_SETTLE; t++)
        do_tick();

      $write("[TB] s=%0d  x=[", s);
      for (int j = 0; j < N_IN; j++)  $write(" %0.3f", x_in_samples[s][j]);
      $write(" ]  target=[");
      for (int i = 0; i < K_OUT; i++) $write(" %0.3f", y_targets[s][i]);
      $write(" ]  pred=[");
      for (int i = 0; i < K_OUT; i++) $write(" %0.3f", b2f(x_state_ieee[i]));
      $display(" ]");
    end

    $finish;
  end

endmodule

`default_nettype wire
