`timescale 1ns/1ps
`default_nettype none

typedef enum logic [2:0] {
  ACT_LINEAR = 3'd0,
  ACT_RELU   = 3'd1,
  ACT_TANH   = 3'd2
} act_kind_e;

`timescale 1ns/1ps

module hf_f2rec32 (
    input logic [31:0] in_ieee,
    output logic [32:0] out_rec
);
    // Parameters per HardFloat convention for fNToRecFN
    localparam int EXP=8, SIG=24;
    fNToRecFN #(.expWidth(EXP), .sigWidth(SIG)) u (.in(in_ieee), .out(out_rec));
endmodule

module hf_rec2f32 (
    input logic [32:0] in_rec,
    output logic [31:0] out_ieee
);
    localparam int EXP=8, SIG=24;
    recFNToFN #(.expWidth(EXP), .sigWidth(SIG)) u (.in(in_rec), .out(out_ieee));
endmodule

module hf_add32 (
    input logic subOp, // 0: a+b, 1: a-b
    input logic [2:0] rnd_mode, // HardFloat rounding; 0=RNE typical
    input logic [32:0] a_rec,
    input logic [32:0] b_rec,
    output logic [32:0] sum_rec,
    output logic [4:0] flags
);
    localparam int EXP=8, SIG=24;
    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) u (
    .control(1'b0), .subOp(subOp), .roundingMode(rnd_mode),
    .a(a_rec), .b(b_rec), .out(sum_rec), .exceptionFlags(flags)
    );
endmodule

module hf_mul32 (
    input logic [2:0] rnd_mode,
    input logic [32:0] a_rec,
    input logic [32:0] b_rec,
    output logic [32:0] prod_rec,
    output logic [4:0] flags
);
    localparam int EXP=8, SIG=24;
    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) u (
        .control(1'b0), .roundingMode(rnd_mode), .a(a_rec), .b(b_rec), .out(prod_rec), .exceptionFlags(flags)
    );
endmodule

module hf_fma32 (
    input logic subOpMul, // if 1, do (-a)*b + c (via HardFloat conv.)
    input logic subOpAdd, // if 1, do (a*b) - c
    input logic [1:0] opSel, // 0: a*b + c, 1: a*b - c, 2: (-a)*b + c, 3: (-a)*b - c
    input logic [2:0] rnd_mode,
    input logic [32:0] a_rec,
    input logic [32:0] b_rec,
    input logic [32:0] c_rec,
    output logic [32:0] out_rec,
    output logic [4:0] flags
);
    localparam int EXP=8, SIG=24;
    // HardFloat mulAddRecFN has control bits for sign of addend and multiplier
    // Ports: control, op, ... in some drops; here we use subOp flags as typical simple interface.
    // Use provided module with parameters; some trees expect (op) rather than separate subOps.
    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) u (
        .control(1'b0),
        .op(opSel), // 2-bit {subMul, subAdd}
        .roundingMode(rnd_mode),
        .a(a_rec), .b(b_rec), .c(c_rec),
        .out(out_rec), .exceptionFlags(flags)
    );
endmodule

// ---- activations ----

// activation_relu32.sv
`default_nettype none
module activation_relu32 #(
  parameter int EXP = 8,
  parameter int SIG = 24
)(
  input  logic [EXP+SIG:0] in_rec,  // recFN
  output logic [EXP+SIG:0] f_rec,   // ReLU(x)
  output logic [EXP+SIG:0] fp_rec   // ReLU'(x) in {0,1}
);
  // recFN <-> IEEE32 helpers (you already have these modules)
  logic [31:0] in_ieee, f_ieee, fp_ieee;
  hf_rec2f32 u_r2f (.in_rec(in_rec), .out_ieee(in_ieee));

  // IEEE fields
  logic        sign;
  logic [7:0]  exp;
  logic [22:0] man;
  logic        is_zero, is_nan, is_pos;

  assign sign    = in_ieee[31];
  assign exp     = in_ieee[30:23];
  assign man     = in_ieee[22:0];
  assign is_zero = (exp == 8'h00) && (man == 23'h0);           // catches +0 and -0
  assign is_nan  = (exp == 8'hFF) && (man != 23'h0);
  assign is_pos  = (!sign) && (!is_zero) && (!is_nan);         // +Inf counts as "pos" here

  localparam logic [31:0] ONE_IEEE  = 32'h3f800000; // 1.0
  localparam logic [31:0] ZERO_IEEE = 32'h00000000; // 0.0

  always_comb begin
    if (is_pos) begin
      f_ieee  = in_ieee;     // ReLU(x) = x
      fp_ieee = ONE_IEEE;    // ReLU'(x) = 1
    end else begin
      f_ieee  = ZERO_IEEE;   // ReLU(x) = 0
      fp_ieee = ZERO_IEEE;   // ReLU'(x) = 0  (at x<=0 and NaN)
    end
  end

  hf_f2rec32 u_f2r  (.in_ieee(f_ieee),  .out_rec(f_rec));
  hf_f2rec32 u_f2r2 (.in_ieee(fp_ieee), .out_rec(fp_rec));
endmodule
`default_nettype wire

module activation_tanh32_pwl #(
  parameter int EXP = 8,
  parameter int SIG = 24
)(
  input  logic [EXP+SIG:0] in_rec,
  output logic [EXP+SIG:0] f_rec,
  output logic [EXP+SIG:0] fp_rec
);
  localparam int RECW = EXP + SIG + 1;
  localparam [2:0] RM_RNE = 3'd0;

  // ---- constants ----
  logic [RECW-1:0] rec_zero, rec_clip;
  hf_f2rec32 U0    (.in_ieee(32'h00000000), .out_rec(rec_zero));
  hf_f2rec32 UCLIP (.in_ieee(32'h40400000), .out_rec(rec_clip)); // 3.0f

  // ---- breakpoints: 0,0.25,0.5,0.75,1.0,1.25,1.5,2.0,3.0 ----
  localparam int NB = 9;
  logic [RECW-1:0] bp [NB];

  hf_f2rec32 UBP0 (.in_ieee(32'h00000000), .out_rec(bp[0])); // 0.0
  hf_f2rec32 UBP1 (.in_ieee(32'h3E800000), .out_rec(bp[1])); // 0.25
  hf_f2rec32 UBP2 (.in_ieee(32'h3F000000), .out_rec(bp[2])); // 0.5
  hf_f2rec32 UBP3 (.in_ieee(32'h3F400000), .out_rec(bp[3])); // 0.75
  hf_f2rec32 UBP4 (.in_ieee(32'h3F800000), .out_rec(bp[4])); // 1.0
  hf_f2rec32 UBP5 (.in_ieee(32'h3FA00000), .out_rec(bp[5])); // 1.25
  hf_f2rec32 UBP6 (.in_ieee(32'h3FC00000), .out_rec(bp[6])); // 1.5
  hf_f2rec32 UBP7 (.in_ieee(32'h40000000), .out_rec(bp[7])); // 2.0
  hf_f2rec32 UBP8 (.in_ieee(32'h40400000), .out_rec(bp[8])); // 3.0

  // ---- segment coefficients (secants), k=0..7 for [bp[k], bp[k+1]] ----
  localparam int NS = 8;

  // m IEEE32:
  localparam logic [31:0] M_IEEE [NS] = '{
    32'h3F7ACBF5, // [0.00,0.25]
    32'h3F5E6948, // [0.25,0.50]
    32'h3F312F3F, // [0.50,0.75]
    32'h3F017ADA, // [0.75,1.00]
    32'h3EB18A42, // [1.00,1.25]
    32'h3E68EADF, // [1.25,1.50]
    32'h3DF12B73, // [1.50,2.00]
    32'h3CFE2CB3  // [2.00,3.00]
  };

  // b IEEE32:
  localparam logic [31:0] B_IEEE [NS] = '{
    32'h00000000,
    32'h3CE31568,
    32'h3DEDAD7E,
    32'h3E82F9F7,
    32'h3ED4656A,
    32'h3F105FB8,
    32'h3F3A7FA6,
    32'h3F66E7B8
  };

  logic [RECW-1:0] m_rec [NS];
  logic [RECW-1:0] b_rec [NS];

  generate
    for (genvar k=0; k<NS; k++) begin : G_MB
      hf_f2rec32 UM (.in_ieee(M_IEEE[k]), .out_rec(m_rec[k]));
      hf_f2rec32 UB (.in_ieee(B_IEEE[k]), .out_rec(b_rec[k]));
    end
  endgenerate

  // ---- sign + abs (robust in recFN) ----
  logic lt_zero, un_zero;
  compareRecFN #(.expWidth(EXP), .sigWidth(SIG)) CMP_NEG (
    .a(in_rec), .b(rec_zero),
    .signaling(1'b0),
    .lt(lt_zero), .eq(), .gt(), .unordered(un_zero),
    .exceptionFlags()
  );

  logic [RECW-1:0] neg_in, x_abs;
  addRecFN #(.expWidth(EXP), .sigWidth(SIG)) NEG_X (
    .control('0), .subOp(1'b1),
    .a(rec_zero), .b(in_rec),
    .roundingMode(RM_RNE), .out(neg_in), .exceptionFlags()
  );

  assign x_abs = lt_zero ? neg_in : in_rec;

  // ---- clip abs(x) to 3.0 ----
  logic gt_clip, un_clip;
  compareRecFN #(.expWidth(EXP), .sigWidth(SIG)) CMP_CLIP (
    .a(x_abs), .b(rec_clip),
    .signaling(1'b0),
    .lt(), .eq(), .gt(gt_clip), .unordered(un_clip),
    .exceptionFlags()
  );

  logic [RECW-1:0] x_clip;
  assign x_clip = gt_clip ? rec_clip : x_abs;

  // ---- select segment index seg in 0..7 by comparing to breakpoints ----
  logic [2:0] seg;
  logic ge_bp [NB];

  generate
    for (genvar i=0; i<NB; i++) begin : G_GE
      logic lt_i, eq_i, gt_i, un_i;
      compareRecFN #(.expWidth(EXP), .sigWidth(SIG)) C (
        .a(x_clip), .b(bp[i]),
        .signaling(1'b0),
        .lt(lt_i), .eq(eq_i), .gt(gt_i), .unordered(un_i),
        .exceptionFlags()
      );
      assign ge_bp[i] = (gt_i | eq_i) & ~un_i;
    end
  endgenerate

  always_comb begin
    seg = 3'd0;
    if (ge_bp[7])      seg = 3'd7;  // x >= 2.0
    else if (ge_bp[6]) seg = 3'd6;  // x >= 1.5
    else if (ge_bp[5]) seg = 3'd5;  // x >= 1.25
    else if (ge_bp[4]) seg = 3'd4;  // x >= 1.0
    else if (ge_bp[3]) seg = 3'd3;  // x >= 0.75
    else if (ge_bp[2]) seg = 3'd2;  // x >= 0.5
    else if (ge_bp[1]) seg = 3'd1;  // x >= 0.25
  end

  // ---- y_abs = m*x + b ----
  logic [RECW-1:0] y_abs;
  mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA (
    .control('0), .op(2'b00),
    .a(m_rec[seg]), .b(x_clip), .c(b_rec[seg]),
    .roundingMode(RM_RNE), .out(y_abs), .exceptionFlags()
  );

  // ---- restore sign (odd symmetry) ----
  logic [RECW-1:0] y_neg;
  addRecFN #(.expWidth(EXP), .sigWidth(SIG)) NEG_Y (
    .control('0), .subOp(1'b1),
    .a(rec_zero), .b(y_abs),
    .roundingMode(RM_RNE), .out(y_neg), .exceptionFlags()
  );

  // ---- derivative: fp = segment slope (even function) ----
  logic [RECW-1:0] fp_seg;
  assign fp_seg = m_rec[seg];

  // ---- final outputs; if unordered vs 0 compare, just pass-through safely ----
  always_comb begin
    if (un_zero) begin
      // NaN-ish behavior: propagate input, derivative 0 (safer than 1)
      f_rec  = in_rec;
      fp_rec = rec_zero;
    end else begin
      f_rec  = lt_zero ? y_neg : y_abs;
      fp_rec = fp_seg;
    end
  end

endmodule

module activation32 #(
    parameter act_kind_e KIND = ACT_RELU,
    parameter int EXP = 8,
    parameter int SIG = 24
)(
    input  logic [EXP+SIG:0] in_rec,
    output logic [EXP+SIG:0] f_rec,
    output logic [EXP+SIG:0] fp_rec
);
  localparam int   RECW   = EXP + SIG + 1;
  localparam [2:0] RM_RNE = 3'd0;

  // constants
  logic [RECW-1:0] rec_one, rec_zero;
  hf_f2rec32 U_ONE  (.in_ieee(32'h3F800000), .out_rec(rec_one));
  hf_f2rec32 U_ZERO (.in_ieee(32'h00000000), .out_rec(rec_zero));

  generate
    if (KIND == ACT_LINEAR) begin : G_LINEAR
      assign f_rec  = in_rec;
      assign fp_rec = rec_one;

    end else if (KIND == ACT_RELU) begin : G_RELU
      logic [RECW-1:0] f_relu, fp_relu;
      activation_relu32 #(.EXP(EXP), .SIG(SIG)) U_RELU (
        .in_rec(in_rec),
        .f_rec(f_relu),
        .fp_rec(fp_relu)
      );
      assign f_rec  = f_relu;
      assign fp_rec = fp_relu;

    end else if (KIND == ACT_TANH) begin : G_TANH
      activation_tanh32_pwl #(.EXP(EXP), .SIG(SIG)) U_TANH (
        .in_rec(in_rec),
        .f_rec(f_rec),
        .fp_rec(fp_rec)
      );

    end else begin : G_DEFAULT
      assign f_rec  = in_rec;
      assign fp_rec = rec_one;
    end
  endgenerate
endmodule

`ifndef USE_HARDENED_NEURON
module neuron_core #(
    parameter bit CLAMP_HARD = 1'b0,

    // Activation choices
    parameter act_kind_e ACT_KIND = ACT_RELU,

    // N = dim(layer l+1) [presynaptic to this neuron, not counting bias]
    // M = dim(layer l-1) [back inputs coming into this neuron]
    parameter int J   = 2,
    parameter int K   = 3,
    parameter int EXP = 8,
    parameter int SIG = 24,

    parameter logic [31:0] ALPHA_IEEE = 32'h3B94F200, // 0.00454545
    parameter logic [31:0] GAMMA_IEEE = 32'h3DCCCCCD, // 0.10

    // Initial θ for the N true presynaptic lanes (no bias index here)
    parameter logic [31:0] X_I_INIT_IEEE         = 32'h0000_0000,

    // Bias controls
    parameter logic [31:0] BIAS_INIT_IEEE     = 32'h00000000, // ~0.01
    parameter logic [31:0] BIAS_LR_SCALE_IEEE = 32'h3F800000, // 1.0
    parameter bit          FREEZE_BIAS        = 1'b0,

    // safe sizes for $clog2
    parameter int J_SAFE = (J > 1) ? J : 2,
    parameter int K_SAFE = (K > 1) ? K : 2,

    // theta init
    parameter logic [31:0] THETA_PRESET_IEEE [J] = '{default:32'h00000000},

    parameter int SERIAL_MAX_J = J
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // Tick control
    input  logic                     start_tick,
    output logic                     busy_o,
    output logic                     done_o,

    input logic x_vec [J],
    input logic back_in [K],

    output logic back_vec [J],
    output logic x_out [K],

    input logic learn_en,

    // -- don't need beyond this line

    input  logic                     x_set_en,
    input  logic [31:0]              x_obs_ieee
);
    // ----------------- widths and constants -----------------
    localparam int   RECW   = EXP + SIG + 1;
    localparam [2:0] RM_RNE = 3'd0;
    localparam int   J_EFF  = J + 1;     // +1 bias lane at index N

    // recFN constants
    logic [RECW-1:0] rec_zero, rec_one, rec_bias_lr;
    hf_f2rec32 U_REC_ZERO (.in_ieee(32'h0000_0000),           .out_rec(rec_zero));
    hf_f2rec32 U_REC_ONE  (.in_ieee(32'h3F800000),            .out_rec(rec_one));
    hf_f2rec32 U_REC_BLR  (.in_ieee(BIAS_LR_SCALE_IEEE),      .out_rec(rec_bias_lr));

    // ------------- indices and small regs -------------------
    logic [$clog2(J_EFF)-1:0]  j;                   // internal counter (includes bias lane)
    logic [$clog2(K_SAFE)-1:0] r;

    // ------------- IEEE->recFN params -----------------------
    logic [RECW-1:0] alpha, gamma, x_obs;
    hf_f2rec32 U_A (.in_ieee(ALPHA_IEEE), .out_rec(alpha));
    hf_f2rec32 U_G (.in_ieee(GAMMA_IEEE), .out_rec(gamma));
    hf_f2rec32 U_XOBS (.in_ieee(x_obs_ieee), .out_rec(x_obs));

    // ------------- pre-activation state and clamp -------------
    logic [RECW-1:0] x_i, x_i_init_rec, x_i_eff;
    hf_f2rec32 U_XI0 (.in_ieee(X_I_INIT_IEEE), .out_rec(x_i_init_rec));
    assign x_i_eff = (x_set_en ? x_obs : x_i);

    logic [RECW-1:0] phi_xi_unused, phi_prime_xi;

    activation32 #(
      .KIND(ACT_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_LOCAL_FEAT (
      .in_rec(x_i_eff),
      .f_rec(phi_xi_unused),
      .fp_rec(phi_prime_xi)
    );

    // ------------- accumulators -----------------------------
    logic [RECW-1:0] mu_acc, eps_i, m_i;
    logic [RECW-1:0] back_sum;

    // --- mac op ---
    logic [1:0] mac_op;

    // ------------- θ storage and presets (N true + 1 bias) ---
    logic [RECW-1:0] theta [J_EFF];
    logic [RECW-1:0] theta_preset_rec [J];

    genvar preset_idx;
    generate
      for (preset_idx = 0; preset_idx < J; preset_idx = preset_idx + 1) begin : G_THETA_PRESET
        hf_f2rec32 u_p (
          .in_ieee(THETA_PRESET_IEEE[preset_idx]),
          .out_rec(theta_preset_rec[preset_idx])
        );
      end
    endgenerate

    // Bias init (default 0.0 unless overridden)
    logic [RECW-1:0] theta_bias_init;
    hf_f2rec32 U_BIAS_INIT (.in_ieee(BIAS_INIT_IEEE), .out_rec(theta_bias_init));

    // ------------- presynaptic buffer + bias lane -----------
    logic [RECW-1:0] x_col [J];
    logic [$clog2(RECW)-1:0] rx_bit;

        logic [RECW-1:0] back_tx [J];
    logic [RECW-1:0] back_rx [K];

    logic [$clog2(RECW)-1:0] back_bit;

    localparam int BACK_START_CYCLE =
        RECW + 2*SERIAL_MAX_J + 4;

    logic [$clog2(BACK_START_CYCLE+1)-1:0] tick_cycle;

    for (genvar b=0; b<J; b++) begin : G_BACK_SERIAL
      assign back_vec[b] = back_tx[b][back_bit];
    end

    // Select activation for lane j (strict configurable φ for j<N; const 1 for bias lane j==N)
    wire is_bias_idx = (j == J);
    wire [RECW-1:0] xj_in_feat = is_bias_idx ? rec_one : x_col[(j < J) ? j : 0];

    logic [RECW-1:0] xj_act_raw, xj_actp_unused;

    activation32 #(
      .KIND(ACT_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_PRE (
      .in_rec(xj_in_feat),
      .f_rec(xj_act_raw),
      .fp_rec(xj_actp_unused)
    );

    // IMPORTANT: bias lane uses constant 1 as the feature
    wire [RECW-1:0] xj_act = is_bias_idx ? rec_one : xj_act_raw;

    // --------- back_sum accumulate over M ----------
    logic [RECW-1:0] back_sum_c_in;
    assign back_sum_c_in = (r == '0) ? rec_zero : back_sum;

    // gate: back_eff = φ'(x_i) * back_sum
    logic [RECW-1:0] back_eff;

    // --------- prediction μ_i accumulation over j in [0..N] (bias at N) ----------
    logic [RECW-1:0] mu_c_in, pred_mac_out; logic [4:0] pred_exc;
    assign mu_c_in = (j == '0) ? rec_zero : mu_acc;

    // Δx_i = γ*(back_eff - ε_i)
    logic [RECW-1:0] sub_back_minus_eps, state_out;
    logic [4:0] state_exc;

    // --------- θ update: θ_j <- θ_j + m_i_eff * act_j  (bias learns slower / can freeze)
    logic [RECW-1:0] m_i_bias_scaled, m_i_eff;
    logic [RECW-1:0] weight_out;        logic [4:0] weight_exc;

    // m_i is just latched mul_ae_out for clarity
    // bias lane uses scaled m_i
    assign m_i_eff = (j == J) ? m_i_bias_scaled : m_i;

    // --------- back vector: back_vec[j] = θ_j * ε_i for j in [0..N-1] ----------
    for (genvar destination=0; destination<K; destination++) begin : G_STATE_FANOUT
      assign x_out[destination] = x_i_eff[rx_bit];
    end

    // -------------------- FSM --------------------
    typedef enum logic [3:0] {
      S_IDLE,
      S_RX,
      S_PRED,
      S_ERR,
      S_LEARN,
      S_BACKSUM,
      S_BACKVEC,
      S_BACK_RX,
      S_BIAS_SCALE,
      S_WUP,
      S_BACK_GATE,
      S_STATE_DIFF,
      S_STATE
    } st_e;

    st_e st;

        // Shared floating-point MAC.
    logic [RECW-1:0] mac_a, mac_b, mac_c;
    logic [RECW-1:0] mac_out;
    logic [4:0] mac_exc;

    always_comb begin
      mac_a = rec_zero;
      mac_b = rec_zero;
      mac_c = rec_zero;
      mac_op = 2'b00;

      case (st)
        S_PRED: begin
          mac_a = theta[j];
          mac_b = xj_act;
          mac_c = mu_c_in;
        end

        S_WUP: begin
          mac_a = m_i_eff;
          mac_b = xj_act;
          mac_c = theta[j];
        end

        S_STATE: begin
          mac_a = gamma;
          mac_b = sub_back_minus_eps;
          mac_c = x_i;
        end

        S_BACKSUM: begin
          mac_a = back_rx[r];
          mac_b = rec_one;
          mac_c = back_sum_c_in;
        end

        S_BACKVEC: begin
          mac_a = theta[(j < J) ? j : 0];
          mac_b = eps_i;
          mac_c = rec_zero;
        end

        S_ERR: begin
          mac_a  = x_i_eff;
          mac_b  = rec_one;
          mac_c  = mu_acc;
          mac_op = 2'b01; // x_i_eff * 1 - mu_acc
        end

        S_LEARN: begin
          mac_a = alpha;
          mac_b = eps_i;
          mac_c = rec_zero;
        end

        S_BACK_GATE: begin
          mac_a = back_sum;
          mac_b = phi_prime_xi;
          mac_c = rec_zero;
        end

        S_BIAS_SCALE: begin
          mac_a = m_i;
          mac_b = rec_bias_lr;
          mac_c = rec_zero;
        end

        S_STATE_DIFF: begin
          mac_a  = back_eff;
          mac_b  = rec_one;
          mac_c  = eps_i;
          mac_op = 2'b01;
        end

        default: begin end
      endcase
    end

    mulAddRecFN #(
      .expWidth(EXP),
      .sigWidth(SIG)
    ) FMA_SHARED (
      .control('0),
      .op(mac_op),
      .a(mac_a),
      .b(mac_b),
      .c(mac_c),
      .roundingMode(RM_RNE),
      .out(mac_out),
      .exceptionFlags(mac_exc)
    );

    assign pred_mac_out = mac_out;
    assign weight_out   = mac_out;
    assign state_out    = mac_out;

    assign pred_exc   = mac_exc;
    assign weight_exc = mac_exc;
    assign state_exc  = mac_exc;

    // Edge detect (posedge aligned)
    logic start_q;
    always_ff @(posedge clk) begin
      if (!rst_n) start_q <= 1'b0;
      else        start_q <= start_tick;
    end
    wire start_edge = start_tick & ~start_q;

    // -------------------- sequential --------------------
    always_ff @(posedge clk) begin
      if (!rst_n) begin
        st               <= S_IDLE;
        j                <= '0;
        r                <= '0;
        rx_bit           <= '0;
        tick_cycle <= '0;
        back_bit   <= '0;
        busy_o           <= 1'b0;
        done_o           <= 1'b0;
        mu_acc           <= rec_zero;
        eps_i            <= rec_zero;
        m_i              <= rec_zero;
        back_sum         <= rec_zero;
        m_i_bias_scaled <= rec_zero;
        back_eff <= rec_zero;
        sub_back_minus_eps <= rec_zero;

        // init θ: copy presets for [0..N-1], init bias
        for (int k=0; k<J; k++) theta[k]      <= theta_preset_rec[k];
        theta[J] <= theta_bias_init; // bias slot

        for (int k=0; k<J; k++) x_col[k] <= rec_zero;
        for (int k=0; k<J; k++) back_tx[k] <= rec_zero;
        for (int k=0; k<K; k++) back_rx[k] <= rec_zero;

        x_i <= x_i_init_rec;
      end else begin
        // per-cycle defaults
        done_o           <= 1'b0;
        if (busy_o && tick_cycle < BACK_START_CYCLE) begin
          tick_cycle <= tick_cycle + 1'b1;
        end
        unique case (st)
          S_IDLE: begin
            busy_o <= 1'b0;

            if (start_edge) begin
              busy_o     <= 1'b1;
              mu_acc     <= rec_zero;
              back_sum   <= rec_zero;
              j          <= '0;
              r          <= '0;
              rx_bit     <= '0;
              tick_cycle <= '0;
              back_bit   <= '0;
              st         <= S_RX;
            end
          end

          S_RX: begin
            for (int k=0; k<J; k++) begin
              x_col[k][rx_bit] <= x_vec[k];
            end

            if (rx_bit == RECW-1) begin
              st <= S_PRED;
            end else begin
              rx_bit <= rx_bit + 1'b1;
            end
          end

          // accumulate μ_i over j in [0..N] (last is bias)
          S_PRED: begin
            mu_acc <= pred_mac_out;
            if (j == J_EFF-1) begin
              st <= S_ERR;
            end else begin
              j <= j + 1;
            end
          end

          // compute ε_i and m_i; reset back_sum accumulation
          S_ERR: begin
            eps_i <= mac_out;
            st    <= S_LEARN;
          end

          S_LEARN: begin
            m_i      <= mac_out;
            j        <= '0;
            r        <= '0;
            back_sum <= rec_zero;
            st       <= S_BACKVEC;
          end

          S_BACKVEC: begin
            if (j < J) begin
              back_tx[j] <= mac_out;
            end

            if (j == J-1) begin
              j        <= '0;
              back_bit <= '0;
              st       <= S_BACK_RX;
            end else begin
              j <= j + 1'b1;
            end
          end

          S_BACK_RX: begin
            if (tick_cycle == BACK_START_CYCLE) begin
              for (int k=0; k<K; k++) begin
                back_rx[k][back_bit] <= back_in[k];
              end

              if (back_bit == RECW-1) begin
                r                <= '0;
                st               <= S_BACKSUM;
              end else begin
                back_bit <= back_bit + 1'b1;
              end
            end
          end
          
          S_BACKSUM: begin
            back_sum <= mac_out;
            if (r == K-1) begin
              j  <= '0;
              st <= S_BIAS_SCALE;
            end else begin
              r <= r + 1;
            end
          end

          S_BIAS_SCALE: begin
            m_i_bias_scaled <= mac_out;
            st              <= S_WUP;
          end

          // weight updates over j in [0..N] (includes bias lane; optional freeze)
          S_WUP: begin
            if (learn_en && !(FREEZE_BIAS && (j == J))) begin
              theta[j] <= weight_out;
            end
            if (j == J_EFF-1) begin
              st <= S_BACK_GATE;
            end else begin
              j <= j + 1;
            end
          end

          S_BACK_GATE: begin
            back_eff <= mac_out;
            st       <= S_STATE_DIFF;
          end

          S_STATE_DIFF: begin
            sub_back_minus_eps <= mac_out;
            st                 <= S_STATE;
          end

          // state update (or hard clamp) and emit single-cycle done_o
          S_STATE: begin
            if (CLAMP_HARD && x_set_en) x_i <= x_obs;
            else                        x_i <= state_out;
            busy_o <= 1'b0;
            done_o <= 1'b1;
            st     <= S_IDLE;
          end
        endcase
      end
    end
endmodule
`endif

module pc_layer #(
  parameter int K   = 256,
  parameter int N   = 256,
  parameter int M   = 256,
  parameter int EXP = 8,
  parameter int SIG = 24,
  parameter bit CLAMP_HARD_THIS_LAYER = 1'b0,

  // Activation choices for this layer
  parameter act_kind_e ACT_THIS_LAYER = ACT_RELU,

  parameter logic [31:0] THETA_PRESET_IEEE_PER_NEURON [K][N] =
    '{K{'{N{32'h00000000}}}},
  parameter logic [31:0] X_INIT_IEEE_THIS_LAYER = 32'h0000_0000,
  parameter int SERIAL_MAX_J = N,
  parameter int MACRO_J = 2,
  parameter int MACRO_K = 3
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // Tick control (fanout to all neurons)
  input  logic                     start_tick,
  output logic                     busy_o,       // OR of all cores' busy
  output logic                     done_o,       // one-shot when all cores done (per tick)

  // Learning rates and optional clamps (vectorized per neuron i)
  input  logic [K-1:0]             x_set_en_vec,
  input  logic [31:0]              x_obs_ieee_vec [K],

  input logic x_up [N][K],
  input logic back_from_down [M][K],

  output logic back_matrix_kn [K][N],
  output logic back_matrix_nk [N][K],

  output logic x_state [K][M],

  input logic learn_en
);

  // ---- Internal fanouts and collectors ----
  logic [K-1:0] busy_vec, done_vec;

  // ---------- Edge detect for this layer ----------
  logic start_q, start_edge;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q <= 1'b0;
    else        start_q <= start_tick;
  end
  assign start_edge = start_tick & ~start_q;

  // done_latched: OR of done pulses since last tick
  logic [K-1:0] done_latched;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      done_latched <= '0;
    end else if (start_edge) begin
      done_latched <= '0;
    end else begin
      done_latched <= done_latched | done_vec;
    end
  end

  // one pulse when all neurons have reported done since last tick
  logic done_all_q;
  wire  done_all_now    = &done_latched;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) done_all_q <= 1'b0;
    else        done_all_q <= done_all_now;
  end
  wire done_layer_pulse = done_all_now & ~done_all_q;

  typedef logic [31:0] theta_row_t [N];

  function automatic theta_row_t preset_row(input int row_index);
    for (int column=0; column<N; column++)
      preset_row[column] = THETA_PRESET_IEEE_PER_NEURON[row_index][column];
  endfunction

  // ---- Instantiate K neuron cores ----
  genvar gi, gj, gr;
  generate
    for (gi=0; gi<K; gi++) begin : G_NEURON
      logic x_vec_i [N];

      for (genvar source=0; source<N; source++) begin : G_FORWARD_COL
        assign x_vec_i[source] = x_up[source][gi];
      end

      logic back_in_i [M];

      for (gr=0; gr<M; gr++) begin : G_FAN_DOWN_COL
        assign back_in_i[gr] = back_from_down[gr][gi];
      end

      logic back_vec_i [N];

      localparam theta_row_t THETA_ROW = preset_row(gi);

      `ifdef USE_HARDENED_NEURON
        wire [MACRO_J-1:0] macro_x;
        wire [MACRO_K-1:0] macro_back_in;
        wire [MACRO_J-1:0] macro_back_out;
        wire [MACRO_K-1:0] macro_state;

        for (genvar lane=0; lane<MACRO_J; lane++) begin : G_MACRO_FORWARD
          if (lane < N) begin : G_CONNECTED
            assign macro_x[MACRO_J-1-lane] = x_vec_i[lane];
            assign back_vec_i[lane] =
                macro_back_out[MACRO_J-1-lane];
          end else begin : G_ZERO
            assign macro_x[MACRO_J-1-lane] = 1'b0;
          end
        end

        for (genvar lane=0; lane<MACRO_K; lane++) begin : G_MACRO_BACK
          if (lane < M) begin : G_CONNECTED
            assign macro_back_in[MACRO_K-1-lane] = back_in_i[lane];
            assign x_state[gi][lane] =
                macro_state[MACRO_K-1-lane];
          end else begin : G_ZERO
            assign macro_back_in[MACRO_K-1-lane] = 1'b0;
          end
        end

        neuron_core u_core (
          .clk(clk),
          .rst_n(rst_n),
          .start_tick(start_tick),
          .busy_o(busy_vec[gi]),
          .done_o(done_vec[gi]),

          .x_vec(macro_x),
          .back_in(macro_back_in),
          .back_vec(macro_back_out),
          .x_out(macro_state),

          .learn_en(learn_en),
          .x_set_en(x_set_en_vec[gi]),
          .x_obs_ieee(x_obs_ieee_vec[gi])
        );
            `else
        neuron_core #(
          .CLAMP_HARD(CLAMP_HARD_THIS_LAYER),
          .ACT_KIND(ACT_THIS_LAYER),
          .J(N), .K(M), .EXP(EXP), .SIG(SIG),
          .SERIAL_MAX_J(SERIAL_MAX_J),
          .X_I_INIT_IEEE(X_INIT_IEEE_THIS_LAYER),
          .FREEZE_BIAS(1'b0),
          .THETA_PRESET_IEEE(THETA_ROW)
        ) u_core (
          .clk(clk),
          .rst_n(rst_n),
          .start_tick(start_tick),
          .busy_o(busy_vec[gi]),
          .done_o(done_vec[gi]),

          .x_vec(x_vec_i),
          .back_in(back_in_i),
          .x_out(x_state[gi]),
          .back_vec(back_vec_i),

          .learn_en(learn_en),
          .x_set_en(x_set_en_vec[gi]),
          .x_obs_ieee(x_obs_ieee_vec[gi])
        );
      `endif

      // Row gi of KxN back matrix
      for (gj=0; gj<N; gj++) begin : G_ROW_ASSIGN
        assign back_matrix_kn[gi][gj] = back_vec_i[gj];
      end
    end
  endgenerate

  // ---- Provide transpose (N x K) for wiring to adjacent layers ----
  genvar gtn, gtk;
  generate
    for (gtn=0; gtn<N; gtn++) begin : G_TRANSPOSE
      for (gtk=0; gtk<K; gtk++) begin : G_T_COL
        assign back_matrix_nk[gtn][gtk] = back_matrix_kn[gtk][gtn];
      end
    end
  endgenerate

  // ---- Status and outputs ----
  assign busy_o = |busy_vec;
  assign done_o = done_layer_pulse;

endmodule
package theta_init_pkg;

  localparam logic [31:0] THETA_L0 [0:7][0:15] = '{
    0: '{ 32'h3C4DFF13, 32'hBC5870CB, 32'h3D832897, 32'h3C2BDE4C, 32'hBD5B6902, 32'h3D141BFE, 32'h3E058794, 32'h3DC1F652, 32'hBD901FFF, 32'hBE019444, 32'hBD7F4B10, 32'h3B876ABF, 32'hBE6E154A, 32'hBCB33BF0, 32'hBDFF299F, 32'hBD95F7E7 },
    1: '{ 32'hBD5EEDB2, 32'hBD018E7A, 32'h3D289A97, 32'h3DD581BA, 32'hBC529758, 32'h3E0BED05, 32'hBD883B5C, 32'h3D0FFA81, 32'h3DB907DB, 32'h3C1A079E, 32'hBD9844C7, 32'hBDBCC4F5, 32'hBD3B7C08, 32'h3CB46244, 32'hBDCEC512, 32'hBCAB5B4C },
    2: '{ 32'hBC826FE8, 32'h3D5D87C5, 32'h3CAFD948, 32'h3D118F87, 32'hBD85E773, 32'hBC545BE7, 32'h3DA08EE5, 32'h3E18ED67, 32'hBE00EDA6, 32'h3E1B069B, 32'h3E09D151, 32'h3DA00338, 32'h3CD8A45D, 32'hBD009532, 32'h3E154D23, 32'h3E48BAFF },
    3: '{ 32'h3E387CC7, 32'h3E06AAA8, 32'h3D12620E, 32'hBDF776B2, 32'hB9E9865D, 32'h3D867232, 32'hBE03ED9F, 32'h3D21D78D, 32'h3D30127A, 32'h3D8E8CAF, 32'hBDF281E2, 32'hBD878446, 32'hBD32C38E, 32'hBDEF9350, 32'h3E321C7C, 32'hBD4B2003 },
    4: '{ 32'h3D06BEF7, 32'hBCD3D298, 32'h3E2225CB, 32'h3E073479, 32'h3D81B5EB, 32'hBE61A3B0, 32'h3BAA7D11, 32'h3D8C04D9, 32'h3DCD9C80, 32'hBD7D1840, 32'h3E3A92EF, 32'hBE07364F, 32'hBD877B1F, 32'h3DBF7F8D, 32'h3BA0BDFF, 32'h3E4D0B85 },
    5: '{ 32'h3C9A6F57, 32'hBD81AD9B, 32'hBD1AA667, 32'hBDDF777B, 32'hBE02D59F, 32'h3D811BB8, 32'h3D6E0BA7, 32'h3E049015, 32'hBD9A8B13, 32'h3E2CF6F0, 32'hBCEB6D92, 32'h3E21382B, 32'hBD3144E3, 32'hBD96A082, 32'h3CCC9FCB, 32'h3DD33DDA },
    6: '{ 32'h3C83E628, 32'hBD6FD527, 32'hBE095745, 32'hBE0F8403, 32'h3D4DE61F, 32'h3DCAB177, 32'hBC869713, 32'hBDDC07AA, 32'h3DB2CC8E, 32'hBE031CC3, 32'hBD92094E, 32'h3D7E5E72, 32'hBE666A1A, 32'h3D1E41CA, 32'hBD6E3D77, 32'h3C330B3B },
    7: '{ 32'hBBF80F0B, 32'h3CA59276, 32'h3D8E2A9B, 32'hBD9B506B, 32'h3E118231, 32'h3D94B43A, 32'h3DACCBE4, 32'h3DEE906B, 32'h3DA14C4F, 32'h3DACDE08, 32'h3BF7B485, 32'hBE121A06, 32'hBC5D4205, 32'hBD9D98BB, 32'hBE11B053, 32'h3CD3B97B }
  };


  localparam logic [31:0] THETA_L1 [0:15][0:7] = '{
    0: '{ 32'hBD68E0BB, 32'hBDD2E76A, 32'hBDD59B4B, 32'h3CDBE325, 32'h3D12E97B, 32'h3E076B6E, 32'hBAB661E2, 32'h3DD55E68 },
    1: '{ 32'h3E0F9788, 32'h3DEB8DCF, 32'hBE723507, 32'h3DFBA26A, 32'h3D0B1BBD, 32'h3D2D93A6, 32'h3D180E04, 32'h3D1CC6FF },
    2: '{ 32'h3D02D503, 32'hBD1302CA, 32'hBE42BA3B, 32'hBC327226, 32'hBDA49AB3, 32'h3DDD37AB, 32'hBCEC8EBA, 32'h3C08C41B },
    3: '{ 32'hBDADFFD3, 32'hBD5126A5, 32'hBA972A89, 32'hBE181A38, 32'h3CF6523D, 32'hBC2DC9EE, 32'hBDF2D5DF, 32'hBE75943D },
    4: '{ 32'h3D52256A, 32'hBCF3C7E5, 32'hBD59176A, 32'hBCC17537, 32'h3E3A01D4, 32'hBBA33015, 32'h3C0DEAC1, 32'hBE1846B9 },
    5: '{ 32'h3E28B002, 32'h3DBBE6CB, 32'h3DDA821D, 32'h3B9C36C9, 32'h3DBBBB1C, 32'h3D17F098, 32'h3D7B298A, 32'hBC795A5B },
    6: '{ 32'hBE16ED17, 32'h3DD2B59A, 32'hBE4623CF, 32'hBCC48E5E, 32'hBCA78B7A, 32'hBDD593E8, 32'h3D7B229F, 32'hBCA41C2F },
    7: '{ 32'hBD32F0F7, 32'h3D54ED5B, 32'hBD4334EF, 32'h3E0E3B47, 32'h3D0FF4BC, 32'hBD42496B, 32'hBE4717BE, 32'hBE05E9F7 },
    8: '{ 32'h3DDE953B, 32'hBBA5D1C4, 32'hBCE7EFA2, 32'h3E2844DB, 32'hBE0357E2, 32'hBD6FE2AB, 32'hBD419269, 32'h3D7029EB },
    9: '{ 32'hBD87E45B, 32'hBD7B4187, 32'hBE245E07, 32'h3D955EEA, 32'h3DA518EB, 32'hBD431FB9, 32'h3C85CEDF, 32'hBE045DF2 },
    10: '{ 32'hBD414132, 32'h3E0D1A28, 32'h3C5E6198, 32'h3E6C94CB, 32'hBDA13793, 32'h3D6DAF3B, 32'hBCA0288B, 32'h3D67C24D },
    11: '{ 32'hBA3D0A9E, 32'hBD65DDE3, 32'hBDB1B01B, 32'h3E9CFB28, 32'hBBFD71BD, 32'hBE4E818D, 32'hBD84D55A, 32'h3D8ADCCF },
    12: '{ 32'hBD4CCDAF, 32'h3E0B4F48, 32'h3DCD4A8A, 32'hBC799775, 32'hBD416B6F, 32'hBDCDC883, 32'hBD8F5A68, 32'hBE16D990 },
    13: '{ 32'h3DF6A90D, 32'h3E22E344, 32'hBE00A0E8, 32'hBDF20238, 32'hBE35187B, 32'hBDC565B9, 32'hBE9F0B61, 32'hBDE9F050 },
    14: '{ 32'h3E04CDDC, 32'hBD0D9664, 32'h3DAF04D3, 32'hBD48481F, 32'h3E344AD7, 32'h3CA3330B, 32'hBD1C77D8, 32'h3E82AF22 },
    15: '{ 32'hBD04E757, 32'hBDFA1B47, 32'h3CA56799, 32'hBB7E8262, 32'h3DDA621F, 32'hBDBCC029, 32'h3DA4CE58, 32'h3DAEA494 }
  };


endpackage : theta_init_pkg

import theta_init_pkg::*;

module pc_network_nlayer #(
    parameter int NUM_LAYERS = 3,

    // Max neurons per layer (TB picks this; must be >= all K_LUT entries)
    parameter int MAX_K      = 8,

    // Per-layer neuron counts: K_LUT[0] = K0 (bottom), K_LUT[NUM_LAYERS-1] = top
    parameter int K_LUT      [NUM_LAYERS]      = '{3,8,2},

    // Optional per-link backflow pipeline flags (currently not used internally;
    // kept so your TB param override still compiles without errors)
    parameter bit REG_BACK_LUT[NUM_LAYERS-1:0] = '{default:1'b1},

    // Bottom back dimension (from layer -1 to L0); usually 0 -> tied off
    parameter int M0 = 0,

    // Per-layer activation kinds
    parameter act_kind_e ACT_LUT[NUM_LAYERS] = '{default:ACT_RELU},

    parameter int EXP = 8,
    parameter int SIG = 24,
    parameter int MACRO_J = 2,
    parameter int MACRO_K = 3
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start_tick,

    // Per-layer clamps from TB: [layer][neuron]
    input  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all,
    input  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all,

    output logic busy_o,
    output logic done_o,

    input logic learn_en
);

    // ------------------------------------------------------------------
    // Per-layer status
    // ------------------------------------------------------------------
    logic [NUM_LAYERS-1:0] busy_vec;
    logic [NUM_LAYERS-1:0] done_vec;

    // Global state and back matrices, padded to MAX_K for cross-layer wiring
    logic x_state_global [NUM_LAYERS][MAX_K][MAX_K];
    logic back_kn_global [NUM_LAYERS][MAX_K][MAX_K];
    logic back_nk_global [NUM_LAYERS][MAX_K][MAX_K];

    // Bottom back inputs: tied off
    localparam int M0_EFF = (M0 > 0) ? M0 : 1;

    // ------------------------------------------------------------------
    // Layer instantiations
    // ------------------------------------------------------------------
    logic start_tick_int;

    genvar ul;
    generate
      for (ul = 0; ul < NUM_LAYERS; ul++) begin : G_LAYER
        // ---- derive K, N, M for this layer ----
        localparam int K_CUR = K_LUT[ul]; // number of neurons for this layer
        localparam int N_CUR = (NUM_LAYERS == 1) ? K_LUT[0] :
                               (ul == NUM_LAYERS-1) ? K_LUT[NUM_LAYERS-2]
                                                    : K_LUT[ul+1]; // how many presynaptic inputs this layer sees from above
        localparam int M_CUR = (ul == 0) ? M0_EFF : K_LUT[ul-1];

        localparam bit CLAMP_HARD_THIS = 1'b1;
        
        // parameter act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{default:ACT_RELU},
        // parameter act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{default:ACT_RELU},
        localparam act_kind_e ACT_THIS = ACT_LUT[ul];

        // ---- local, exactly-sized signals matching pc_layer ports ----
        logic [K_CUR-1:0]           x_set_en_vec_l;
        logic [31:0]                x_obs_ieee_vec_l [K_CUR];

        logic x_up_l [N_CUR][K_CUR];
        logic back_from_down_l [M_CUR][K_CUR];
        logic back_kn_l [K_CUR][N_CUR];
        logic back_nk_l [N_CUR][K_CUR];
        logic x_state_l [K_CUR][M_CUR];

        // ---- import clamp control from TB-wide buses ----
        for (genvar i = 0; i < K_CUR; i++) begin : G_CLAMP_IMPORT
          assign x_set_en_vec_l[i] = x_set_en_all[ul][i];
          assign x_obs_ieee_vec_l[i] = x_obs_flat_all[ul][32*i +: 32];
        end

        // ---- presynaptic wiring from above (or zeros at top) ----
        if (NUM_LAYERS == 1) begin : G_SINGLE_PRESYN
          for (genvar source=0; source<N_CUR; source++) begin
            for (genvar destination=0; destination<K_CUR; destination++) begin
              assign x_up_l[source][destination] = 1'b0;
            end
          end
        end else if (ul == NUM_LAYERS-1) begin : G_TOP_PRESYN
          for (genvar source=0; source<N_CUR; source++) begin
            for (genvar destination=0; destination<K_CUR; destination++) begin
              assign x_up_l[source][destination] = 1'b0;
            end
          end
        end else begin : G_MID_PRESYN
          for (genvar source=0; source<N_CUR; source++) begin
            for (genvar destination=0; destination<K_CUR; destination++) begin
              assign x_up_l[source][destination] =
                  x_state_global[ul+1][source][destination];
            end
          end
        end

        // ---- back_from_down wiring ----
        if (ul == 0) begin : G_BOTTOM_BACK
          // bottom: tie off external back inputs
          for (genvar r = 0; r < M_CUR; r++)
            for (genvar c = 0; c < K_CUR; c++)
              assign back_from_down_l[r][c] = '0;
        end else begin : G_UPPER_BACK
          // layer ul>0: get back from layer ul-1 via global back_nk
          //
          // pc_layer expects M_CUR x K_CUR
          // back_nk_global[ul-1] has dimension (padded) MAX_K x MAX_K
          // true mapping: back_from_down_l[r][c] = back_nk_prev[c][r]
          for (genvar r = 0; r < M_CUR; r++) begin
            for (genvar c = 0; c < K_CUR; c++) begin
              assign back_from_down_l[r][c] =
                back_nk_global[ul-1][c][r];
            end
          end
        end

        localparam logic [31:0] X_INIT_SEED = 32'h3A83126F;

        if (ul == 0) begin : G_LAYER_INST_L0

          pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .MACRO_J(MACRO_J),
            .MACRO_K(MACRO_K),
            .SERIAL_MAX_J(MAX_K),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_THIS_LAYER(ACT_THIS),
            `ifndef USE_HARDENED_NEURON
              .THETA_PRESET_IEEE_PER_NEURON(THETA_L0),
            `endif
            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up(x_up_l),
            .back_from_down(back_from_down_l),

            .back_matrix_kn(back_kn_l),
            .back_matrix_nk(back_nk_l),

            .x_state(x_state_l),
            .learn_en(learn_en)
          );

        end else if (ul == 1) begin : G_LAYER_INST_L1

          pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .MACRO_J(MACRO_J),
            .MACRO_K(MACRO_K),
            .SERIAL_MAX_J(MAX_K),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_THIS_LAYER(ACT_THIS),
            `ifndef USE_HARDENED_NEURON
                .THETA_PRESET_IEEE_PER_NEURON(THETA_L1),
            `endif
            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up(x_up_l),
            .back_from_down(back_from_down_l),

            .back_matrix_kn(back_kn_l),
            .back_matrix_nk(back_nk_l),

            .x_state(x_state_l),

            .learn_en(learn_en)
          );

        end else begin : G_LAYER_INST_LX
          pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .MACRO_J(MACRO_J),
            .MACRO_K(MACRO_K),
            .SERIAL_MAX_J(MAX_K),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_THIS_LAYER(ACT_THIS),

            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up(x_up_l),
            .back_from_down(back_from_down_l),

            .back_matrix_kn(back_kn_l),
            .back_matrix_nk(back_nk_l),

            .x_state(x_state_l),

            .learn_en(learn_en)
          );
        end

        // ---- export to global padded arrays for other layers and TB ----

        // state
        for (genvar source=0; source<K_CUR; source++) begin : G_STATE_EXPORT
          for (genvar destination=0; destination<M_CUR; destination++) begin : G_DESTINATION
            assign x_state_global[ul][source][destination] =
                x_state_l[source][destination];
          end
        end

        // back_kn: K_CUR x N_CUR -> padded
        for (genvar i3 = 0; i3 < K_CUR; i3++) begin : G_KN_EXPORT_I
          for (genvar j3 = 0; j3 < N_CUR; j3++) begin : G_KN_EXPORT_J
            assign back_kn_global[ul][i3][j3] = back_kn_l[i3][j3];
          end
        end

        // back_nk: N_CUR x K_CUR -> padded
        for (genvar j4 = 0; j4 < N_CUR; j4++) begin : G_NK_EXPORT_J
          for (genvar i4 = 0; i4 < K_CUR; i4++) begin : G_NK_EXPORT_I
            assign back_nk_global[ul][j4][i4] = back_nk_l[j4][i4];
          end
        end

      end // for ul
    endgenerate

    // ------------------------------------------------------------------
    // Network-level completion and start-arbiter
    // ------------------------------------------------------------------
    logic start_q_int;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) start_q_int <= 1'b0;
      else        start_q_int <= start_tick_int; // this is determined at the end of this block; assign start_tick_int = start_fire;
    end
    wire start_edge_int = start_tick_int & ~start_q_int;

    logic [NUM_LAYERS-1:0] done_latched;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        done_latched <= '0;
      end else if (start_edge_int) begin
        done_latched <= '0;
      end else begin
        done_latched <= done_latched | done_vec;
      end
    end

    logic done_q_net;
    wire  done_all_now_net = &done_latched;

    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) done_q_net <= 1'b0;
      else        done_q_net <= done_all_now_net;
    end

    wire done_net_pulse = done_all_now_net & ~done_q_net; // pulses if all nets are completed

    // TB-side start request
    logic tb_start_q;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) tb_start_q <= 1'b0;
      else        tb_start_q <= start_tick; // network input parameter
    end
    wire tb_start_edge = start_tick & ~tb_start_q;

    // If the testbench asks for a start (tb_start_edge = 1), remember it. 
    // Hold that request until the network is fully idle.
    // When the network becomes idle and not in cooldown, clear the request so the start will fire.
    logic start_req, cooldown;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) start_req <= 1'b0;
      else begin
        if (tb_start_edge) start_req <= 1'b1;
        if (start_req && ~(|busy_vec) && !cooldown)
          start_req <= 1'b0;
      end
    end

    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) cooldown <= 1'b0;
      else        cooldown <= done_net_pulse;
    end

    wire ready       = ~(|busy_vec) & ~cooldown;
    wire start_fire  = start_req & ready;

    assign start_tick_int = start_fire;

    assign busy_o = |busy_vec;
    assign done_o = done_net_pulse;
endmodule
