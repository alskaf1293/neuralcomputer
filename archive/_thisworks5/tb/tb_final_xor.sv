// ======================================================================
// tb_pc3_xor.sv
//
// Learn XOR with 2->5->1 network:
//   top    : 2 inputs (x1,x2) clamped
//   hidden : 5 units
//   bottom : 1 output (linear)
//
// Adds:
//  - hidden-state probe after inference settle (ep=0,s=0)
//  - prediction dump on all 4 XOR points every PRED_EVERY epochs
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_xor;

  // -------------------------
  // Shape
  // -------------------------
  localparam int NUM_LAYERS = 3;
  localparam int HIDDEN_K   = 5;
  localparam int MAX_K      = HIDDEN_K;
  localparam int K_LUT[NUM_LAYERS] = '{1, HIDDEN_K, 2}; // bottom=1, hidden=5, top=2

  localparam int EXP = 8;
  localparam int SIG = 24;

  // -------------------------
  // XOR dataset (4 points)
  // -------------------------
  localparam int NUM_SAMPLES = 4;
  localparam int EPOCHS      = 200;

  // Dump preds frequency
  localparam int PRED_EVERY  = 5;

  real x_samp[NUM_SAMPLES][2];
  real y_samp[NUM_SAMPLES];

  // -------------------------
  // Schedule / rates
  // -------------------------
  // Reduced from 0.01 since you observed divergence.
  localparam real ALPHA_R = 0.01;
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

  // Activation config (as in your TB)
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{
    ACT_TANH,     // bottom presyn (not important)
    ACT_LINEAR,   // hidden presyn raw
    ACT_LINEAR    // top presyn
  };

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .M0(0),
    .ACT_PRESYN_LUT(ACT_PRESYN_LUT),
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

  function automatic real abs_r(input real x);
    return (x < 0.0) ? -x : x;
  endfunction

  function automatic real tanh_r(input real z);
  return $tanh(z);
endfunction

task automatic build_dataset();
  int  G, ix, iy;
  real tx, ty, x1, x2;
  real beta;
  real y;

  beta = 3.0;  // try 3–5

  G = 1;
  while (G*G < NUM_SAMPLES) G++;

  if (G*G != NUM_SAMPLES)
    $fatal("NUM_SAMPLES must be a perfect square");

  for (int s = 0; s < NUM_SAMPLES; s++) begin
    ix = s % G;
    iy = s / G;

    tx = real'(ix) / real'(G-1);
    ty = real'(iy) / real'(G-1);

    x1 = -1.0 + 2.0*tx;
    x2 = -1.0 + 2.0*ty;

    x_samp[s][0] = x1;
    x_samp[s][1] = x2;

    // XOR in the SAME function class as the network
    y =
      tanh_r(beta*(x1 + x2))
      - tanh_r(beta*(x1 - x2));

    y_samp[s] = 0.5 * y;  // optional scaling
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
  // Clamp helpers
  // -------------------------
  task automatic clamp_train(input real x1, input real x2, input real y);
    // top clamped
    x_set_en_all[2][0]             = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]             = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);
    for (int k=2; k<MAX_K; k++) begin
      x_set_en_all[2][k]             = 1'b0;
      x_obs_flat_all[2][32*k +:32]   = 32'h0;
    end

    // hidden free
    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b0;
      x_obs_flat_all[1][32*h +:32]   = 32'h0;
    end

    // bottom clamped to target
    x_set_en_all[0][0]             = 1'b1; x_obs_flat_all[0][32*0 +:32] = f2b(y);
    for (int k=1; k<MAX_K; k++) begin
      x_set_en_all[0][k]             = 1'b0;
      x_obs_flat_all[0][32*k +:32]   = 32'h0;
    end
  endtask

  task automatic clamp_eval(input real x1, input real x2);
    // top clamped
    x_set_en_all[2][0]             = 1'b1; x_obs_flat_all[2][32*0 +:32] = f2b(x1);
    x_set_en_all[2][1]             = 1'b1; x_obs_flat_all[2][32*1 +:32] = f2b(x2);
    for (int k=2; k<MAX_K; k++) begin
      x_set_en_all[2][k]             = 1'b0;
      x_obs_flat_all[2][32*k +:32]   = 32'h0;
    end

    // hidden free
    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b0;
      x_obs_flat_all[1][32*h +:32]   = 32'h0;
    end

    // bottom free
    for (int k=0; k<MAX_K; k++) begin
      x_set_en_all[0][k]             = 1'b0;
      x_obs_flat_all[0][32*k +:32]   = 32'h0;
    end
  endtask

  // -------------------------
  // Init tasks
  // -------------------------
  task automatic init_hidden_only();
    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b1;
      x_obs_flat_all[1][32*h +:32]   = f2b(RESET_HIDDEN_VAL);
    end
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();
    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b0;
      x_obs_flat_all[1][32*h +:32]   = 32'h0;
    end
  endtask

  task automatic init_hidden_and_bottom();
    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b1;
      x_obs_flat_all[1][32*h +:32]   = f2b(RESET_HIDDEN_VAL);
    end
    x_set_en_all[0][0]             = 1'b1;
    x_obs_flat_all[0][32*0 +:32]   = f2b(RESET_BOTTOM_VAL);

    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
    for (int t=0; t<RESET_TICKS; t++) do_tick();

    for (int h=0; h<HIDDEN_K; h++) begin
      x_set_en_all[1][h]             = 1'b0;
      x_obs_flat_all[1][32*h +:32]   = 32'h0;
    end
    x_set_en_all[0][0]             = 1'b0;
    x_obs_flat_all[0][32*0 +:32]   = 32'h0;
  endtask

  // -------------------------
  // Readout + probes
  // -------------------------
  function automatic real pred_bottom();
    return b2f(uut.x_state_global[0][0]);
  endfunction

  function automatic real pred_hidden(input int h);
    return b2f(uut.x_state_global[1][h]);
  endfunction

  task automatic dump_hidden_states(input string tag);
    $display("[TB] Hidden states %s:", tag);
    for (int h = 0; h < HIDDEN_K; h++) begin
      real xh = pred_hidden(h);
      $display("[TB]   h=%0d  x=%0.6f  |x|=%0.6f", h, xh, abs_r(xh));
    end
  endtask

  task automatic dump_xor_preds(input int ep);
    $display("[TB] XOR preds at epoch %0d:", ep);
    rates_eval();
    for (int s=0; s<NUM_SAMPLES; s++) begin
      clamp_eval(x_samp[s][0], x_samp[s][1]);
      init_hidden_and_bottom();
      for (int t=0; t<EVAL_SETTLE_TICKS; t++) do_tick();
      $display("[TB]   x=[%0.1f,%0.1f]  tgt=%0.1f  pred=%0.6f",
               x_samp[s][0], x_samp[s][1], y_samp[s], pred_bottom());
    end
  endtask

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
    $display("[TB] Begin training XOR (2->5->1), hidden probe enabled, output linear");
    $display("[TB] ALPHA_R=%0.6f  GAMMA_R=%0.6f", ALPHA_R, GAMMA_R);
    $display("[TB] Schedule: infer=%0d learn=%0d eval=%0d ticks",
             INFER_TICKS_TRAIN, LEARN_TICKS_TRAIN, EVAL_SETTLE_TICKS);

    // Initial preds
    dump_xor_preds(-1);

    for (int ep=0; ep<EPOCHS; ep++) begin
      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_train(x_samp[s][0], x_samp[s][1], y_samp[s]);

        // reset hidden only (keep bottom clamped)
        init_hidden_only();

        // inference settle
        rates_infer();
        for (int t=0; t<INFER_TICKS_TRAIN; t++) do_tick();

        // ---- probe once, right after inference settle ----
        if ((ep == 0) && (s == 0)) begin
          dump_hidden_states($sformatf("after infer (ep=%0d s=%0d x=[%0.1f,%0.1f] y=%0.1f)",
                                       ep, s, x_samp[s][0], x_samp[s][1], y_samp[s]));
          $display("[TB] Bottom state after infer (still clamped): y_state=%0.6f",
                   pred_bottom());
        end

        // learning
        rates_learn();
        for (int t=0; t<LEARN_TICKS_TRAIN; t++) do_tick();
      end

      msep = mse_dataset();
      if ((ep % 5) == 0) $display("[TB] Epoch %0d  MSE = %f", ep, msep);

      if ((ep % PRED_EVERY) == 0) begin
        dump_xor_preds(ep);
      end
    end

    // Final eval table
    $display("--------------------------------------------------");
    $display("[TB] Final XOR eval (x1,x2 -> target, pred)");
    $display("--------------------------------------------------");
    dump_xor_preds(EPOCHS);

    $display("--------------------------------------------------");
    $finish;
  end

endmodule

`default_nettype wire
