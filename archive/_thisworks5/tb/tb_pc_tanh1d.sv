// ======================================================================
// tb_pc_tanh1d.sv
//
// Fit: y = W_gt * tanh(x)
//
// Network: 2-layer pc_network_nlayer
//   K0 = 1 (bottom/output)
//   K1 = 1 (top/input)
//
// Training regime (PC-style):
//   For each sample (x, y):
//     (1) Inference settle: alpha=0, gamma>0, top clamped, bottom clamped
//     (2) Learning ticks:   alpha>0, gamma>0, top clamped, bottom clamped
//
// Eval regime:
//   alpha=0, gamma>0, top clamped, bottom free, settle then read out bottom
//
// Notes:
// - NO co_await / NO coroutines: pure SV always_ff + polling
// - IMPORTANT: bottom layer presyn activation must be TANH to learn y=W*tanh(x)
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc_tanh1d;

  // -------------------------
  // Shape
  // -------------------------
  localparam int NUM_LAYERS = 2;
  localparam int MAX_K      = 1;
  localparam int K_LUT[NUM_LAYERS] = '{1, 1}; // bottom, top

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // Teacher + dataset
  // -------------------------
  localparam int  NUM_SAMPLES = 64;
  localparam int  EPOCHS      = 5;   // set low if you want, scale up later

  real W_gt = 1.0;

  real x_samp[NUM_SAMPLES];
  real y_samp[NUM_SAMPLES];

  // -------------------------
  // Rates + schedule
  // -------------------------
  localparam real ALPHA_R = 0.01;  // weight LR (start small)
  localparam real GAMMA_R = 0.20;  // inference LR

  // PC-style training schedule
  localparam int SETTLE_TICKS = 200; // alpha=0, gamma>0
  localparam int LEARN_TICKS  = 5;   // alpha>0, gamma>0 (keep small)

  // Eval schedule
  localparam int EVAL_SETTLE_TICKS = 2000;

  // Optional per-sample eval reset (prevents state carryover)
  localparam bit DO_EVAL_RESET = 1'b1;
  localparam int RESET_TICKS   = 20;

  // -------------------------
  // Clock / reset
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
  // K_LUT[0] = bottom layer: its presyn is the TOP state -> apply tanh there.
  // K_LUT[1] = top layer: presyn isn't used (wired to zeros at top); leave linear.
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] =
    '{ ACT_TANH, ACT_LINEAR };

  // Keep states linear for this experiment (we want y directly in bottom state).
  localparam act_kind_e ACT_STATE_LUT[NUM_LAYERS] =
    '{ ACT_LINEAR, ACT_LINEAR };

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
    return real_to_f32(r);
  endfunction

  function automatic real b2f(input [31:0] b);
    int unsigned u;
    u = b;
    return f32_to_real(u);
  endfunction

  // DPI sanity
  initial begin
    if (f2b(1.0) !== 32'h3F800000) $fatal("[TB] DPI float conversion broken.");
  end

  localparam real X_RANGE = 6.0;
  // -------------------------
  // Dataset builder
  // -------------------------
  task automatic build_dataset();
    for (int i = 0; i < NUM_SAMPLES; i++) begin
        real t,x;
        t = real'(i) / real'(NUM_SAMPLES-1);
        x = -X_RANGE + (2.0*X_RANGE)*t;  // [-X_RANGE, +X_RANGE]
        x_samp[i] = x;
        y_samp[i] = W_gt * $tanh(x);
    end
    endtask

  // -------------------------
  // Rate setter
  // -------------------------
  task automatic set_rates(input real a, input real g);
    alpha_ieee = f2b(a);
    gamma_ieee = f2b(g);
  endtask

  // -------------------------
  // Tick driver (NO COROUTINES)
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
  // layer 1 = top (input), layer 0 = bottom (output)
  // -------------------------
  task automatic clamp_train(input real x, input real y);
    // clamp top to x
    x_set_en_all[1][0]            = 1'b1;
    x_obs_flat_all[1][0 +: 32]    = f2b(x);

    // clamp bottom to y
    x_set_en_all[0][0]            = 1'b1;
    x_obs_flat_all[0][0 +: 32]    = f2b(y);
  endtask

  task automatic clamp_eval(input real x);
    // clamp top to x
    x_set_en_all[1][0]            = 1'b1;
    x_obs_flat_all[1][0 +: 32]    = f2b(x);

    // bottom free
    x_set_en_all[0][0]            = 1'b0;
    x_obs_flat_all[0][0 +: 32]    = 32'h0000_0000;
  endtask

  // Optional: reset bottom state before eval to avoid carryover
  task automatic eval_reset_bottom();
    x_set_en_all[0][0]         = 1'b1;
    x_obs_flat_all[0][0 +: 32] = f2b(0.0);
    repeat (RESET_TICKS) do_tick();
    x_set_en_all[0][0]         = 1'b0;
    x_obs_flat_all[0][0 +: 32] = 32'h0000_0000;
  endtask

  // -------------------------
  // Readout + metrics
  // -------------------------
  function automatic real pred_bottom();
    return b2f(uut.x_state_global[0][0]);
  endfunction

  function automatic real mse_dataset();
    real acc = 0.0;

    set_rates(0.0, GAMMA_R);

    for (int i = 0; i < NUM_SAMPLES; i++) begin
      real d;
      clamp_eval(x_samp[i]);

      if (DO_EVAL_RESET) eval_reset_bottom();

      repeat (EVAL_SETTLE_TICKS) do_tick();

      d = pred_bottom() - y_samp[i];
      acc += d*d;
    end

    return acc / real'(NUM_SAMPLES);
  endfunction

  // -------------------------
  // Pretty results print
  // -------------------------
  task automatic print_model_vs_tanh();
  real x;

  // eval mode
  set_rates(0.0, GAMMA_R);

  $display("--------------------------------------------------");
  $display("[TB] Sweep: x in [-6,6]  (tanh vs model pred)");
  $display("   x        tanh(x)        pred y");
  $display("--------------------------------------------------");

  for (int i = 0; i <= 120; i++) begin
    x = -6.0 + (12.0 * real'(i) / 120.0);

    clamp_eval(x);  // top clamped to x, bottom free :contentReference[oaicite:4]{index=4}

    if (DO_EVAL_RESET) eval_reset_bottom(); // optional reset :contentReference[oaicite:5]{index=5}

    repeat (EVAL_SETTLE_TICKS) do_tick();   // settle :contentReference[oaicite:6]{index=6}

    $display("%8.4f   %10.6f   %10.6f", x, $tanh(x), pred_bottom()); // pred_bottom() :contentReference[oaicite:7]{index=7}
  end

  $display("--------------------------------------------------");
endtask



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

    // Initial eval (untrained)
    mse0 = mse_dataset();
    $display("[TB] Initial RMSE = %f", $sqrt(mse0));
    $display("[TB] Target: y = %0.6f * tanh(x)", W_gt);

    $display("[TB] Training schedule: settle=%0d ticks (a=0,g>0), learn=%0d ticks (a>0,g>0)",
             SETTLE_TICKS, LEARN_TICKS);

    // -------------------------
    // Training: PC-style two-phase per sample
    // -------------------------
    for (int ep = 0; ep < EPOCHS; ep++) begin
      for (int i = 0; i < NUM_SAMPLES; i++) begin
        clamp_train(x_samp[i], y_samp[i]);

        // (1) Inference settle: alpha=0, gamma>0
        set_rates(0.0, GAMMA_R);
        repeat (SETTLE_TICKS) do_tick();

        // (2) Learn while still settling: alpha>0, gamma>0
        set_rates(ALPHA_R, GAMMA_R);
        repeat (LEARN_TICKS) do_tick();
      end

      msep = mse_dataset();
      $display("[TB] Epoch %0d  RMSE = %f", ep, $sqrt(msep));
    end

    print_model_vs_tanh();
    $finish;
  end

endmodule

`default_nettype wire
