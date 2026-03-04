// ============================================================================
// tb_pc_control_1d_diag.sv
//
// Diagnostic rewrite:
//  - Adds toggles for teacher sign flip, L3 channel swap, scrub-before-learn
//  - Adds post-learn re-infer check (same sample) to confirm learning moves output
//  - Keeps your robust done-edge tick
//  - Keeps closed-loop rule: plant always steps with u_pred
// ============================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc_control_1d;

  // ---- shape bottom->top: 1 -> H -> 4 -> 4 ----
  localparam int K0 = 1;
  localparam int H  = 8;
  localparam int K1 = H;
  localparam int K2 = 4;
  localparam int K3 = 4;

  localparam int NUM_LAYERS = 4;
  localparam int MAX_K      = (H > 4) ? H : 4;

  localparam int EXP = 8;
  localparam int SIG = 24;

  // ---- plant ----
  localparam real DT_R   = 0.05;
  localparam real BETA_R = 0.02;
  localparam real UMAX_R = 3.0;

  // ---- teacher gains ----
  localparam real KP_R = 6.0;
  localparam real KD_R = 2.0;

  // ---- learning ----
  localparam real ALPHA_R = 0.01;
  localparam real GAMMA_R = 0.10;

  // ---- tick counts ----
  localparam int SCRUB_TICKS = 5;
  localparam int INFER_TICKS = 40;
  localparam int LEARN_TICKS = 10;

  // ---- training schedule ----
  localparam int PRETRAIN_SAMPLES = 4000;
  localparam int EPISODES         = 20;
  localparam int HORIZON          = 200;
  localparam int GOAL_PERIOD      = 50;
  localparam int PRINT_EVERY_T    = 10;

  // ---- pretrain target scaling ramp (helps when ACT0 is linear) ----
  localparam real U_TGT_SCALE_START = 0.25;
  localparam real U_TGT_SCALE_END   = 1.00;

  // ---- DIAGNOSTIC SWITCHES ----
  // Flip teacher sign to test if your learning rule is inverted.
  localparam bit DIAG_FLIP_TEACHER_SIGN   = 1'b0;

  // Swap p and pg when clamping L3 to test channel-order mismatch.
  localparam bit DIAG_SWAP_P_PG           = 1'b0;

  // Scrub internal layers briefly before learning (with L3/L0 clamped) to align state distribution.
  localparam bit DIAG_SCRUB_BEFORE_LEARN  = 1'b1;
  localparam int DIAG_SCRUB_LEARN_TICKS   = 3;

  // Post-learn re-infer on the same sample to observe immediate learning effect.
  localparam bit DIAG_POSTLEARN_REINFER   = 1'b1;
  localparam int DIAG_PRINT_EVERY_N       = 100;

  // If 1, skip closed-loop episodes and only run pretrain + diag sweep.
  localparam bit DIAG_ONLY_PRETRAIN       = 1'b0;

  // ---- clock/reset ----
  logic clk, rst_n;
  initial begin clk=1'b0; forever #5 clk=~clk; end
  initial begin rst_n=1'b0; #50 rst_n=1'b1; end

  // ---- DUT ----
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

  localparam int ACT_LINEAR  = 0;
  localparam int ACT_RELU    = 1;
  localparam int ACT_TANH    = 2;
  localparam int ACT_SIGMOID = 3;

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K0(K0), .K1(K1), .K2(K2), .K3(K3),

    // Keep linear everywhere for diagnostics.
    .ACT0(ACT_LINEAR),
    .ACT1(ACT_LINEAR),
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

  // ---- helpers ----
  function automatic [31:0] f2b(input real r);
    f2b = real_to_f32(r);
  endfunction

  function automatic real b2f(input [31:0] b);
    int unsigned u; u = b;
    return f32_to_real(u);
  endfunction

  function automatic real clamp_r(input real x, input real lo, input real hi);
    if (x < lo) clamp_r = lo;
    else if (x > hi) clamp_r = hi;
    else clamp_r = x;
  endfunction

  function automatic real randu(input real lo, input real hi);
    randu = lo + (hi-lo) * ($urandom_range(0, 1000000)/1000000.0);
  endfunction

  task automatic set_rates_infer();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_learn();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // ---- robust tick (done edge) ----
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
    int guard;
    guard = 0;

    @(posedge clk); start_tick = 1'b1;
    @(posedge clk); start_tick = 1'b0;

    while (!done_edge_flag) begin
      @(posedge clk);
      guard++;
      if (guard > 200000) $fatal("[TB][TICK] deadlock waiting done edge");
    end
  endtask

  // ---- clamps ----
  task automatic clear_clamps();
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  endtask

  // L3 semantic clamp with optional p<->pg swap
  task automatic clamp_L3(input real p, input real v, input real pg, input real vg);
    real p_use, pg_use;
    begin
      if (DIAG_SWAP_P_PG) begin
        p_use  = pg;
        pg_use = p;
      end else begin
        p_use  = p;
        pg_use = pg;
      end

      x_set_en_all[3][0] = 1'b1; x_obs_flat_all[3][32*0 +: 32] = f2b(p_use);
      x_set_en_all[3][1] = 1'b1; x_obs_flat_all[3][32*1 +: 32] = f2b(v);
      x_set_en_all[3][2] = 1'b1; x_obs_flat_all[3][32*2 +: 32] = f2b(pg_use);
      x_set_en_all[3][3] = 1'b1; x_obs_flat_all[3][32*3 +: 32] = f2b(vg);
    end
  endtask

  task automatic clamp_L0(input real u);
    x_set_en_all[0][0] = 1'b1;
    x_obs_flat_all[0][32*0 +: 32] = f2b(u);
  endtask

  // scrub only internal layers (L2 + L1). Do NOT clamp L0 here.
  task automatic clamp_scrub_internal();
    for (int i=0; i<K2; i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(0.0);
    end
    for (int i=0; i<H; i++) begin
      x_set_en_all[1][i] = 1'b1;
      x_obs_flat_all[1][32*i +: 32] = f2b(0.0);
    end
  endtask

  function automatic real read_u();
    read_u = b2f(uut.x_state_global[0][0]);
  endfunction

  // ---- teacher + plant ----
  function automatic real teacher_u(input real p, input real v, input real pg, input real vg);
    real e_p, e_v, u;
    begin
      e_p = (pg - p);
      e_v = (vg - v);
      u   = KP_R*e_p + KD_R*e_v;

      if (DIAG_FLIP_TEACHER_SIGN)
        u = -u;

      teacher_u = clamp_r(u, -UMAX_R, UMAX_R);
    end
  endfunction

  task automatic plant_step(inout real p, inout real v, input real u);
    real u_sat;
    begin
      u_sat = clamp_r(u, -UMAX_R, UMAX_R);
      p = p + DT_R * v;
      v = (1.0 - BETA_R)*v + DT_R * u_sat;
    end
  endtask

  // ---- scrub + infer (L0 free) ----
  task automatic scrub_then_infer(
    input  real p, input real v, input real pg, input real vg,
    output real u_pred
  );
    begin
      // scrub
      clear_clamps();
      clamp_L3(p,v,pg,vg);
      clamp_scrub_internal();
      set_rates_infer();
      for (int k=0; k<SCRUB_TICKS; k++) do_tick();

      // infer (L0 free)
      clear_clamps();
      clamp_L3(p,v,pg,vg);
      set_rates_infer();
      for (int k=0; k<INFER_TICKS; k++) do_tick();

      u_pred = clamp_r(read_u(), -UMAX_R, UMAX_R);
    end
  endtask

  // ---- learn step (L0 clamped) ----
  task automatic learn_on_sample(
    input real p, input real v, input real pg, input real vg,
    input real u_t
  );
    begin
      clear_clamps();
      clamp_L3(p,v,pg,vg);
      clamp_L0(u_t);
      set_rates_learn();

      if (DIAG_SCRUB_BEFORE_LEARN) begin
        // scrub internal briefly while L3/L0 are clamped
        clamp_scrub_internal();
        for (int k=0; k<DIAG_SCRUB_LEARN_TICKS; k++) do_tick();

        // re-assert only what we want for learning phase
        clear_clamps();
        clamp_L3(p,v,pg,vg);
        clamp_L0(u_t);
        set_rates_learn();
      end

      for (int k=0; k<LEARN_TICKS; k++) do_tick();
    end
  endtask

  // ---- supervised pretrain: infer-then-learn imitation with post-learn check ----
  task automatic pretrain_supervised(input int iters);
    real p, v, pg, vg, u_t_full, u_t, u_before, u_after;
    real s;

    begin
      $display("[TB] pretrain_supervised iters=%0d", iters);
      vg = 0.0;

      for (int n=0; n<iters; n++) begin
        p  = randu(-1.0, 1.0);
        v  = randu(-0.5, 0.5);
        pg = randu(-1.0, 1.0);

        u_t_full = teacher_u(p,v,pg,vg);

        s  = U_TGT_SCALE_START +
             (U_TGT_SCALE_END - U_TGT_SCALE_START) * (real'(n) / real'(iters-1));
        u_t = clamp_r(s * u_t_full, -UMAX_R, UMAX_R);

        scrub_then_infer(p,v,pg,vg,u_before);
        learn_on_sample(p,v,pg,vg,u_t);

        if (DIAG_POSTLEARN_REINFER)
          scrub_then_infer(p,v,pg,vg,u_after);
        else
          u_after = 0.0;

        if ((n % DIAG_PRINT_EVERY_N) == 0) begin
          if (DIAG_POSTLEARN_REINFER) begin
            $display("[TB][PRE] n=%0d u_t=%0.3f (full=%0.3f) before=%0.3f after=%0.3f d=%0.3f scale=%0.3f",
                     n, u_t, u_t_full, u_before, u_after, (u_after-u_before), s);
          end else begin
            $display("[TB][PRE] n=%0d u_t=%0.3f (full=%0.3f) u_p=%0.3f scale=%0.3f",
                     n, u_t, u_t_full, u_before, s);
          end
        end
      end
    end
  endtask

  // ---- diagnostic: clamp sweep ----
  task automatic diag_clamp_sweep();
    real p0,v0,vg0,pg0,u0;
    begin
      p0=0.2; v0=-0.1; vg0=0.0;
      $display("[TB][DIAG] clamp sweep p=%0.3f v=%0.3f (swap_p_pg=%0d flip_teacher=%0d)",
               p0, v0, DIAG_SWAP_P_PG, DIAG_FLIP_TEACHER_SIGN);
      for (int k=0;k<5;k++) begin
        pg0 = -1.0 + 0.5*real'(k);
        scrub_then_infer(p0,v0,pg0,vg0,u0);
        $display("[TB][DIAG] pg=%0.3f -> u_pred=%0.6f (u_t=%0.6f)",
                 pg0, u0, teacher_u(p0,v0,pg0,vg0));
      end
    end
  endtask

  // ---- closed-loop episode: plant always steps with u_pred ----
  task automatic run_episode(
    input  int ep,
    input  bit training,
    output real ctrl_rmse,
    output real effort,
    output real imit_rmse
  );
    real p,v,pg,vg;
    real u_t,u_p;
    real se_p,u2,se_u;

    begin
      p  = randu(-1.0,1.0);
      v  = randu(-0.5,0.5);
      pg = randu(-1.0,1.0);
      vg = 0.0;

      se_p=0.0; u2=0.0; se_u=0.0;

      for (int t=0;t<HORIZON;t++) begin
        if ((t % GOAL_PERIOD)==0) begin
          pg = randu(-1.0,1.0);
          vg = 0.0;
        end

        u_t = teacher_u(p,v,pg,vg);

        scrub_then_infer(p,v,pg,vg,u_p);

        // ALWAYS apply predicted action
        plant_step(p,v,u_p);

        if (training) begin
          learn_on_sample(p,v,pg,vg,u_t);
        end

        se_p += (p-pg)*(p-pg);
        se_u += (u_p-u_t)*(u_p-u_t);
        u2   += u_p*u_p;

        if ((t % PRINT_EVERY_T)==0) begin
          $display("[TB] ep=%0d t=%0d %s p=%0.3f v=%0.3f pg=%0.3f u_t=%0.3f u_p=%0.3f",
                   ep,t,(training?"TR":"EV"),p,v,pg,u_t,u_p);
        end
      end

      ctrl_rmse = $sqrt(se_p/real'(HORIZON));
      effort    = u2/real'(HORIZON);
      imit_rmse = $sqrt(se_u/real'(HORIZON));
    end
  endtask

  // ---- main ----
  initial begin
    real tr_rmse,tr_eff,tr_imit;
    real ev_rmse,ev_eff,ev_imit;

    start_tick = 1'b0;
    clear_clamps();

    wait(rst_n);
    repeat (10) @(posedge clk);

    $display("[TB] starting. PRETRAIN=%0d SCRUB=%0d INFER=%0d LEARN=%0d HORIZON=%0d EPISODES=%0d",
             PRETRAIN_SAMPLES, SCRUB_TICKS, INFER_TICKS, LEARN_TICKS, HORIZON, EPISODES);
    $display("[TB] DIAG: swap_p_pg=%0d flip_teacher=%0d scrub_before_learn=%0d postlearn_reinfer=%0d only_pretrain=%0d",
             DIAG_SWAP_P_PG, DIAG_FLIP_TEACHER_SIGN, DIAG_SCRUB_BEFORE_LEARN,
             DIAG_POSTLEARN_REINFER, DIAG_ONLY_PRETRAIN);

    pretrain_supervised(PRETRAIN_SAMPLES);
    diag_clamp_sweep();

    if (DIAG_ONLY_PRETRAIN) begin
      $display("[TB] DIAG_ONLY_PRETRAIN set. Skipping episodes.");
      $display("[TB] done.");
      $finish;
    end

    for (int ep=0; ep<EPISODES; ep++) begin
      run_episode(ep, 1'b1, tr_rmse, tr_eff, tr_imit);

      if ((ep % 5)==0) begin
        run_episode(ep, 1'b0, ev_rmse, ev_eff, ev_imit);
        $display("[TB] ep=%0d TRAIN ctrl_rmse=%f effort=%f imit_rmse=%f | EVAL ctrl_rmse=%f effort=%f imit_rmse=%f",
                 ep,tr_rmse,tr_eff,tr_imit, ev_rmse,ev_eff,ev_imit);
      end else begin
        $display("[TB] ep=%0d TRAIN ctrl_rmse=%f effort=%f imit_rmse=%f",
                 ep,tr_rmse,tr_eff,tr_imit);
      end
    end

    $display("[TB] done.");
    $finish;
  end

endmodule

`default_nettype wire