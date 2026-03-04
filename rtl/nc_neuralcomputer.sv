typedef enum logic [2:0] {
  ACT_LINEAR = 3'd0,
  ACT_RELU   = 3'd1,
  ACT_TANH   = 3'd2,
  ACT_SIGMOID  = 3'd3
} act_kind_e;

// Generic scalar activation wrapper in recFN space.
// - KIND = ACT_LINEAR  => f(x) = x,     f'(x) = 1
// - KIND = ACT_RELU    => f(x) = ReLU,  f'(x) = ReLU'
// - KIND = ACT_TANH => f(x) = tanh, f'(x) = tanh'
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

    end else if (KIND == ACT_SIGMOID) begin : G_SIGMOID
      activation_sigmoid32_synth #(.EXP(EXP), .SIG(SIG)) U_SIG (
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

`timescale 1ns/1ps
`default_nettype none

module neuron_core_single_back #(
    parameter bit CLAMP_HARD = 1'b0,

    // Activation choices
    parameter act_kind_e ACT_PRESYN_KIND = ACT_RELU,   // φ for presynaptic x_j
    parameter act_kind_e ACT_STATE_KIND  = ACT_RELU,   // φ for state x_i

    // N = dim(layer l+1) [presynaptic to this neuron, not counting bias]
    // M = dim(layer l-1) [back inputs coming into this neuron]
    parameter int N   = 1024,
    parameter int M   = 1024,
    parameter int EXP = 8,
    parameter int SIG = 24,

    // Initial θ for the N true presynaptic lanes (no bias index here)
    parameter logic [31:0] X_I_INIT_IEEE         = 32'h0000_0000,

    // Bias controls
    parameter logic [31:0] BIAS_INIT_IEEE     = 32'h00000000, // ~0.01
    parameter logic [31:0] BIAS_LR_SCALE_IEEE = 32'h3F800000, // 1.0
    parameter bit          FREEZE_BIAS        = 1'b0,

    // safe sizes for $clog2
    parameter int N_SAFE = (N > 1) ? N : 2,
    parameter int M_SAFE = (M > 1) ? M : 2
)(
    input  logic                     clk,
    input  logic                     rst_n,

    input logic [31:0] theta_preset_ieee [N],

    // Tick control
    input  logic                     start_tick,
    output logic                     busy_o,
    output logic                     done_o,

    // Learning rate and optional external clamp
    input  logic [31:0]              alpha_ieee,
    input  logic [31:0]              gamma_ieee,
    input  logic                     x_set_en,
    input  logic [31:0]              x_obs_ieee,

    // Presynaptic from layer l+1 (length N)
    input  logic [31:0]              x_vec_ieee [N],

    // Back contributions from layer l-1 (length M), will be summed
    input  logic [31:0]              back_in_ieee [M],

    // Observability
    output logic [$clog2(N_SAFE)-1:0] col_idx_o,   // indexes only the first N lanes (no bias)
    output logic [31:0]               eps_ieee,
    output logic [31:0]               x_i_ieee,

    // Back output (vector, not streamed): θ .* ε_i for all true presynaptic j in [0..N-1]
    output logic                      back_vec_valid_o,
    output logic [31:0]               back_vec_ieee [N],

    // θ debug dump stream (exports only the first N θ; bias not streamed)
    input  logic                      dbg_dump_start,
    output logic                      dbg_busy,
    output logic                      dbg_valid,
    output logic [$clog2(N_SAFE)-1:0] dbg_idx,
    output logic [31:0]               dbg_theta_ieee
);
    // ----------------- widths and constants -----------------
    localparam int   RECW   = EXP + SIG + 1;
    localparam [2:0] RM_RNE = 3'd0;
    localparam int   N_EFF  = N + 1;     // +1 bias lane at index N

    // recFN constants
    logic [RECW-1:0] rec_zero, rec_one, rec_bias_lr;
    hf_f2rec32 U_REC_ZERO (.in_ieee(32'h0000_0000),           .out_rec(rec_zero));
    hf_f2rec32 U_REC_ONE  (.in_ieee(32'h3F800000),            .out_rec(rec_one));
    hf_f2rec32 U_REC_BLR  (.in_ieee(BIAS_LR_SCALE_IEEE),      .out_rec(rec_bias_lr));

    // ------------- indices and small regs -------------------
    logic [$clog2(N_SAFE)-1:0] col_j;               // external observability (0..N-1)
    logic [$clog2(N_EFF)-1:0]  j, dbg_j_int;        // internal counters include bias lane
    logic [$clog2(M_SAFE)-1:0] r;

    assign col_idx_o = col_j;

    // ------------- IEEE->recFN params -----------------------
    logic [RECW-1:0] alpha, gamma, x_obs;
    hf_f2rec32 U_A    (.in_ieee(alpha_ieee), .out_rec(alpha));
    hf_f2rec32 U_G    (.in_ieee(gamma_ieee), .out_rec(gamma));
    hf_f2rec32 U_XOBS (.in_ieee(x_obs_ieee), .out_rec(x_obs));

    // ------------- pre-activation state and clamp -------------
    logic [RECW-1:0] u_i, u_i_init_rec, u_i_eff;
    hf_f2rec32 U_UI0 (.in_ieee(X_I_INIT_IEEE), .out_rec(u_i_init_rec)); // reuse init param

    assign u_i_eff = (x_set_en ? x_obs : u_i);

    // x_i = phi(u_i_eff)
    logic [RECW-1:0] x_i_act, phi_prime_ui;

    activation32 #(
      .KIND(ACT_STATE_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_STATE (
      .in_rec(u_i_eff),
      .f_rec(x_i_act),
      .fp_rec(phi_prime_ui)
    );


    // ------------- accumulators -----------------------------
    logic [RECW-1:0] mu_acc, eps_i, m_i;
    logic [RECW-1:0] back_sum;

    // ------------- θ storage and presets (N true + 1 bias) ---
    logic [RECW-1:0] theta [N_EFF];
    logic [RECW-1:0] theta_preset_rec [N];

    for (genvar gi=0; gi<N; gi++) begin : G_THETA_PRESET
      hf_f2rec32 u_p (.in_ieee(theta_preset_ieee[gi]), .out_rec(theta_preset_rec[gi]));
    end


    // Bias init (default 0.0 unless overridden)
    logic [RECW-1:0] theta_bias_init;
    hf_f2rec32 U_BIAS_INIT (.in_ieee(BIAS_INIT_IEEE), .out_rec(theta_bias_init));

    // ------------- presynaptic buffer + bias lane -----------
    logic [31:0]     x_col_ieee [N];     // external N lanes only (no bias)
    logic [RECW-1:0] x_col_rec  [N];     // recFN converted lanes

    generate
      for (genvar gx=0; gx<N; gx++) begin : G_XREC
        hf_f2rec32 u_xr (.in_ieee(x_col_ieee[gx]), .out_rec(x_col_rec[gx]));
      end
    endgenerate

    // Select activation for lane j (strict configurable φ for j<N; const 1 for bias lane j==N)
    wire is_bias_idx = (j == N);
    wire [RECW-1:0] xj_in_feat = is_bias_idx ? rec_one
                                            : x_col_rec[(j < N) ? j : 0];

    logic [RECW-1:0] xj_act_raw, xj_actp_unused;

    activation32 #(
      .KIND(ACT_PRESYN_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_PRE (
      .in_rec(xj_in_feat),
      .f_rec(xj_act_raw),
      .fp_rec(xj_actp_unused)
    );

    // IMPORTANT: bias lane uses constant 1 as the feature
    wire [RECW-1:0] xj_act = is_bias_idx ? rec_one : xj_act_raw;

    // ------------- back input rec conversion ----------------
    logic [RECW-1:0] back_in_rec [M];
    generate
      for (genvar gm=0; gm<M; gm++) begin : G_BACKIN
        hf_f2rec32 u_b (.in_ieee(back_in_ieee[gm]), .out_rec(back_in_rec[gm]));
      end
    endgenerate

    // --------- back_sum accumulate over M ----------
    logic [RECW-1:0] back_sum_c_in, back_acc_out; logic [4:0] back_acc_exc;
    assign back_sum_c_in = (r == '0) ? rec_zero : back_sum;

    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) ADD_BACKSUM (
      .control('0), .subOp(1'b0),
      .a(back_sum_c_in), .b(back_in_rec[r]),
      .roundingMode(RM_RNE), .out(back_acc_out), .exceptionFlags(back_acc_exc)
    );

    // gate: back_eff = φ'(x_i) * back_sum
    logic [RECW-1:0] back_eff; logic [4:0] mul_back_phi_exc;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BACK_GATE (
      .control('0), .a(back_sum), .b(phi_prime_ui),
      .roundingMode(RM_RNE), .out(back_eff), .exceptionFlags(mul_back_phi_exc)
    );

    // --------- prediction μ_i accumulation over j in [0..N] (bias at N) ----------
    logic [RECW-1:0] mu_c_in, pred_mac_out; logic [4:0] pred_exc;
    assign mu_c_in = (j == '0) ? rec_zero : mu_acc;

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_PRED (
      .control('0), .op(2'b00),
      .a(theta[j]), .b(xj_act), .c(mu_c_in),
      .roundingMode(RM_RNE), .out(pred_mac_out), .exceptionFlags(pred_exc)
    );

    // ε_i = x_i_act - μ_i
    logic [RECW-1:0] err_sub_out; logic [4:0] err_exc;
    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) SUB_ERR (
      .control('0), .subOp(1'b1),
      .a(x_i_act), .b(mu_acc),
      .roundingMode(RM_RNE), .out(err_sub_out), .exceptionFlags(err_exc)
    );

    // m_i = α * ε_i   (no normalization)
    logic [RECW-1:0] mul_ae_out; logic [4:0] mul_ae_exc;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_AE (
      .control('0), .a(alpha), .b(err_sub_out),
      .roundingMode(RM_RNE), .out(mul_ae_out), .exceptionFlags(mul_ae_exc)
    );

    // Δx_i = γ*(back_eff - ε_i)
    logic [RECW-1:0] sub_back_minus_eps, state_out;
    logic [4:0]      sub_bme_exc,        state_exc;

    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) SUB_BME (
      .control('0), .subOp(1'b1),
      .a(back_eff), .b(eps_i),
      .roundingMode(RM_RNE), .out(sub_back_minus_eps), .exceptionFlags(sub_bme_exc)
    );

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_STATE (
      .control('0), .op(2'b00),
      .a(gamma), .b(sub_back_minus_eps), .c(u_i),
      .roundingMode(RM_RNE), .out(state_out), .exceptionFlags(state_exc)
    );

    // --------- θ update: θ_j <- θ_j + m_i_eff * act_j  (bias learns slower / can freeze)
    logic [RECW-1:0] m_i_bias_scaled, m_i_eff;
    logic [RECW-1:0] weight_out;        logic [4:0] weight_exc;

    // m_i_bias_scaled = m_i * bias_lr_scale
    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BLR (
      .control('0), .a(mul_ae_out), .b(rec_bias_lr),
      .roundingMode(RM_RNE), .out(m_i_bias_scaled), .exceptionFlags()
    );

    // m_i is just latched mul_ae_out for clarity
    // bias lane uses scaled m_i
    assign m_i_eff = (j == N) ? m_i_bias_scaled : m_i;

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_W (
      .control('0), .op(2'b00),
      .a(m_i_eff), .b(xj_act), .c(theta[j]),
      .roundingMode(RM_RNE), .out(weight_out), .exceptionFlags(weight_exc)
    );

    // --------- back vector: back_vec[j] = θ_j * ε_i for j in [0..N-1] ----------
    logic [RECW-1:0] back_vec_rec [N];
    logic [RECW-1:0] back_mul_out;      
    logic [4:0] back_mul_exc;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BACKJ (
      .control('0), .a(theta[(j < N) ? j : 0]), .b(eps_i), // bias lane ignored
      .roundingMode(RM_RNE), .out(back_mul_out), .exceptionFlags(back_mul_exc)
    );

    generate
      for (genvar go=0; go<N; go++) begin : G_BACK_OUT
        hf_rec2f32 u_bof (.in_rec(back_vec_rec[go]), .out_ieee(back_vec_ieee[go]));
      end
    endgenerate

    // --------- observability outputs ----------
    hf_rec2f32 U_EPS (.in_rec(eps_i),   .out_ieee(eps_ieee));
    hf_rec2f32 U_XO  (.in_rec(x_i_act), .out_ieee(x_i_ieee));

    // Export only true θ’s (0..N-1) on the debug stream
    hf_rec2f32 U_DBG (.in_rec(theta[(dbg_j_int < N) ? dbg_j_int : 0]), .out_ieee(dbg_theta_ieee));

    // -------------------- FSM --------------------
    typedef enum logic [2:0] {
      S_IDLE,
      S_PRED,
      S_ERR,
      S_BACKSUM,
      S_BACKVEC,
      S_WUP,
      S_STATE
    } st_e;

    st_e st;

    // Edge detect (posedge aligned)
    logic start_q;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) start_q <= 1'b0;
      else        start_q <= start_tick;
    end
    wire start_edge = start_tick & ~start_q;

    // -------------------- sequential --------------------
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        st               <= S_IDLE;
        j                <= '0;
        r                <= '0;
        col_j            <= '0;
        busy_o           <= 1'b0;
        done_o           <= 1'b0;
        back_vec_valid_o <= 1'b0;
        mu_acc           <= rec_zero;
        eps_i            <= rec_zero;
        m_i              <= rec_zero;
        back_sum         <= rec_zero;

        // init θ: copy presets for [0..N-1], init bias
        for (int k=0; k<N; k++) theta[k]      <= theta_preset_rec[k];
        theta[N] <= theta_bias_init; // bias slot

        for (int k=0; k<N; k++) x_col_ieee[k]   <= 32'h0000_0000;
        for (int k=0; k<N; k++) back_vec_rec[k] <= rec_zero;

        u_i <= u_i_init_rec;
      end else begin
        // per-cycle defaults
        done_o           <= 1'b0;
        back_vec_valid_o <= 1'b0;

        unique case (st)
          S_IDLE: begin
            busy_o <= 1'b0;
            if (start_edge) begin
              busy_o   <= 1'b1;
              mu_acc   <= rec_zero;
              back_sum <= rec_zero;
              j        <= '0;
              r        <= '0;
              col_j    <= '0;
              // snapshot presynaptic column once at start
              for (int k=0; k<N; k++) x_col_ieee[k] <= x_vec_ieee[k];
              st       <= S_PRED;
            end
          end

          // accumulate μ_i over j in [0..N] (last is bias)
          S_PRED: begin
            mu_acc <= pred_mac_out;
            if (j == N_EFF-1) begin
              st <= S_ERR;
            end else begin
              j <= j + 1;
              if (j < N-1) col_j <= j + 1; // expose only true-lane index
            end
          end

          // compute ε_i and m_i; reset back_sum accumulation
          S_ERR: begin
            eps_i <= err_sub_out;
            m_i   <= mul_ae_out;
            r     <= '0;
            back_sum <= rec_zero;
            st    <= S_BACKSUM;
          end

          // sum M back inputs
          S_BACKSUM: begin
            back_sum <= back_acc_out;
            if (r == M-1) begin
              j  <= '0;
              st <= S_BACKVEC;
            end else begin
              r <= r + 1;
            end
          end

          // build full back vector for true lanes only
          S_BACKVEC: begin
            if (j < N) begin
              back_vec_rec[j] <= back_mul_out; // θ_j * ε
            end
            if (j == N-1) begin
              back_vec_valid_o <= 1'b1; // full vector is ready
              j  <= '0;
              st <= S_WUP;
            end else begin
              j <= j + 1;
            end
          end

          // weight updates over j in [0..N] (includes bias lane; optional freeze)
          S_WUP: begin
            if (FREEZE_BIAS && (j == N)) begin
              theta[j] <= theta[j];     // keep bias fixed
            end else begin
              theta[j] <= weight_out;
            end
            if (j == N_EFF-1) begin
              st <= S_STATE;
            end else begin
              j <= j + 1;
            end
          end

          // state update (or hard clamp) and emit single-cycle done_o
          S_STATE: begin
            if (CLAMP_HARD && x_set_en) u_i <= x_obs;
            else                        u_i <= state_out;
            busy_o <= 1'b0;
            done_o <= 1'b1;
            st     <= S_IDLE;
          end
        endcase
      end
    end

    // ---------------- θ debug dump FSM (independent) ----------------
    // Note: streams only θ[0..N-1] (excludes bias index N)
    logic dbg_active;
    always_ff @(posedge clk or negedge rst_n) begin
      if (!rst_n) begin
        dbg_active <= 1'b0;
        dbg_busy   <= 1'b0;
        dbg_valid  <= 1'b0;
        dbg_j_int  <= '0;
        dbg_idx    <= '0;
      end else begin
        dbg_valid <= 1'b0;
        if (!busy_o && dbg_dump_start && !dbg_active) begin
          dbg_active <= 1'b1;
          dbg_busy   <= 1'b0; // goes high with first valid
          dbg_j_int  <= '0;
          dbg_idx    <= '0;
        end else if (dbg_active) begin
          dbg_valid <= 1'b1;
          dbg_busy  <= 1'b1;
          dbg_idx   <= dbg_j_int[$bits(dbg_idx)-1:0];
          if (dbg_j_int == (N-1)) begin
            dbg_active <= 1'b0;
            dbg_busy   <= 1'b0;
          end else begin
            dbg_j_int <= dbg_j_int + 1'b1;
          end
        end
      end
    end

endmodule

`default_nettype wire

// ============================================================
// pc_layer  - K neurons, consumes N presynaptic, M back-in
// Emits KxN back matrix (and its transpose), exposes x_state.
// - Robust done_o: one-shot when all cores finish within a tick
// - Sticky back_up_valid_o across the tick (no cycle alignment req)
// - Activation type per layer via ACT_PRESYN_THIS_LAYER / ACT_STATE_THIS_LAYER
// ============================================================
module pc_layer #(
  parameter int K   = 256,
  parameter int N   = 256,
  parameter int M   = 256,
  parameter int EXP = 8,
  parameter int SIG = 24,
  parameter bit CLAMP_HARD_THIS_LAYER = 1'b0,

  // Activation choices for this layer
  parameter act_kind_e ACT_PRESYN_THIS_LAYER = ACT_RELU,
  parameter act_kind_e ACT_STATE_THIS_LAYER  = ACT_RELU,

  parameter logic [31:0] THETA_PRESET_IEEE_PER_NEURON [K][N] = '{default:'{default:32'h0000_0000}},
  parameter logic [31:0] X_INIT_IEEE_THIS_LAYER = 32'h0000_0000
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // Tick control (fanout to all neurons)
  input  logic                     start_tick,
  output logic                     busy_o,       // OR of all cores' busy
  output logic                     done_o,       // one-shot when all cores done (per tick)

  // Learning rates and optional clamps (vectorized per neuron i)
  input  logic [31:0]              alpha_ieee,
  input  logic [31:0]              gamma_ieee,
  input  logic [K-1:0]             x_set_en_vec,
  input  logic [31:0]              x_obs_ieee_vec [K],

  // Presynaptic activations from layer l+1 (broadcast to all K neurons)
  input  logic [31:0]              x_up_ieee [N],

  // Back matrix from layer l-1 to this layer (shape M x K)
  input  logic [31:0]              back_from_down_ieee [M][K],

  // Back matrix this layer emits upward (shape K x N) and its transpose (N x K)
  output logic                     back_up_valid_o,
  output logic [31:0]              back_matrix_kn_ieee [K][N],
  output logic [31:0]              back_matrix_nk_ieee [N][K],

  // Per-neuron current states (IEEE)
  output logic [31:0]              x_state_ieee [K]
);

  // ---- Internal fanouts and collectors ----
  logic [K-1:0] busy_vec, done_vec, back_valid_vec;

  // Optional per-neuron observability (not exported)
  logic [31:0] eps_i_ieee [K];
  logic [31:0] x_i_ieee   [K];

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

  // same mechanism as for done_latched, but for back_vec_valid
  logic [K-1:0] back_valid_latched;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      back_valid_latched <= '0;
    end else if (start_edge) begin
      back_valid_latched <= '0;
    end else begin
      back_valid_latched <= back_valid_latched | back_valid_vec;
    end
  end
  assign back_up_valid_o = &back_valid_latched;

  // ---- Instantiate K neuron cores ----
  genvar gi, gj, gr;
  generate
    for (gi=0; gi<K; gi++) begin : G_NEURON
      // Column gi of the MxK back matrix is the gi-th neuron's M-vector input
      logic [31:0] back_in_ieee_i [M];
      for (gr=0; gr<M; gr++) begin : G_FAN_DOWN_COL
        assign back_in_ieee_i[gr] = back_from_down_ieee[gr][gi];
      end

      // Back vector out of this neuron (length N)
      logic [31:0] back_vec_ieee_i [N];

      logic [31:0] theta_row_ieee [N];
      for (genvar tj=0; tj<N; tj++) begin : G_THETA_ROW
        assign theta_row_ieee[tj] = THETA_PRESET_IEEE_PER_NEURON[gi][tj];
      end

      neuron_core_single_back #(
        .CLAMP_HARD(CLAMP_HARD_THIS_LAYER),
        .ACT_PRESYN_KIND(ACT_PRESYN_THIS_LAYER),
        .ACT_STATE_KIND(ACT_STATE_THIS_LAYER),
        .N(N), .M(M), .EXP(EXP), .SIG(SIG),
        .X_I_INIT_IEEE(X_INIT_IEEE_THIS_LAYER),
        .FREEZE_BIAS(1'b0)
      ) u_core (
        .clk(clk), .rst_n(rst_n),
        .start_tick(start_tick),
        .busy_o(busy_vec[gi]),
        .done_o(done_vec[gi]),

        .alpha_ieee(alpha_ieee),
        .gamma_ieee(gamma_ieee),
        .x_set_en(x_set_en_vec[gi]),
        .x_obs_ieee(x_obs_ieee_vec[gi]),

        .x_vec_ieee(x_up_ieee),
        .back_in_ieee(back_in_ieee_i),

        .theta_preset_ieee(theta_row_ieee),

        .col_idx_o(),
        .eps_ieee(eps_i_ieee[gi]),
        .x_i_ieee(x_i_ieee[gi]),
        .back_vec_valid_o(back_valid_vec[gi]),
        .back_vec_ieee(back_vec_ieee_i),

        .dbg_dump_start(1'b0),
        .dbg_busy(), .dbg_valid(), .dbg_idx(), .dbg_theta_ieee()
      );

      // Row gi of KxN back matrix
      for (gj=0; gj<N; gj++) begin : G_ROW_ASSIGN
        assign back_matrix_kn_ieee[gi][gj] = back_vec_ieee_i[gj];
      end
    end
  endgenerate

  // ---- Provide transpose (N x K) for wiring to adjacent layers ----
  genvar gtn, gtk;
  generate
    for (gtn=0; gtn<N; gtn++) begin : G_TRANSPOSE
      for (gtk=0; gtk<K; gtk++) begin : G_T_COL
        assign back_matrix_nk_ieee[gtn][gtk] = back_matrix_kn_ieee[gtk][gtn];
      end
    end
  endgenerate

  // ---- Status and outputs ----
  assign busy_o = |busy_vec;
  assign done_o = done_layer_pulse;

  for (genvar gx=0; gx<K; gx++) begin
    assign x_state_ieee[gx] = x_i_ieee[gx];
  end

endmodule

// ======================================================================
// pc_network_nlayer.sv
// Generic N-layer predictive-coding stack
// - Arbitrary NUM_LAYERS
// - Arbitrary K per layer (via K_LUT)
// - Ports use MAX_K for TB-facing buses
// - Each layer has local, exactly-sized arrays for pc_layer ports
// - Per-layer activation types via ACT_PRESYN_LUT and ACT_STATE_LUT
// ======================================================================

`timescale 1ns/1ps
`default_nettype none
`include "rtl/includes/theta_init_pkg.sv"
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
    parameter act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{default:ACT_RELU},
    parameter act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{default:ACT_RELU},

    parameter int EXP = 8,
    parameter int SIG = 24
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start_tick,

    input  logic [31:0] alpha_ieee,
    input  logic [31:0] gamma_ieee,

    // Per-layer clamps from TB: [layer][neuron]
    input  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all,
    input  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all,

    output logic busy_o,
    output logic done_o
);

    // ------------------------------------------------------------------
    // Per-layer status
    // ------------------------------------------------------------------
    logic [NUM_LAYERS-1:0] busy_vec;
    logic [NUM_LAYERS-1:0] done_vec;
    logic [NUM_LAYERS-1:0] back_valid_vec;

    // Global state and back matrices, padded to MAX_K for cross-layer wiring
    logic [31:0] x_state_global [NUM_LAYERS][MAX_K];
    logic [31:0] back_kn_global [NUM_LAYERS][MAX_K][MAX_K]; // K x N (padded)
    logic [31:0] back_nk_global [NUM_LAYERS][MAX_K][MAX_K]; // N x K (padded)

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
        localparam act_kind_e ACT_PRESYN_THIS = ACT_PRESYN_LUT[ul];
        localparam act_kind_e ACT_STATE_THIS  = ACT_STATE_LUT[ul];

        // ---- local, exactly-sized signals matching pc_layer ports ----
        logic [K_CUR-1:0]           x_set_en_vec_l;
        logic [31:0]                x_obs_ieee_vec_l [K_CUR];

        logic [31:0]                x_up_l          [N_CUR];
        logic [31:0]                back_from_down_l[M_CUR][K_CUR];

        logic [31:0]                back_kn_l       [K_CUR][N_CUR];
        logic [31:0]                back_nk_l       [N_CUR][K_CUR];

        logic [31:0]                x_state_l       [K_CUR];

        // ---- import clamp control from TB-wide buses ----
        for (genvar i = 0; i < K_CUR; i++) begin : G_CLAMP_IMPORT
          assign x_set_en_vec_l[i] = x_set_en_all[ul][i];
          assign x_obs_ieee_vec_l[i] = x_obs_flat_all[ul][32*i +: 32];
        end

        // ---- presynaptic wiring from above (or zeros at top) ----
        if (NUM_LAYERS == 1) begin : G_SINGLE_PRESYN
          for (genvar j = 0; j < N_CUR; j++) begin
            assign x_up_l[j] = 32'h0000_0000;
          end
        end else if (ul == NUM_LAYERS-1) begin : G_TOP_PRESYN
          // top layer: N_CUR = K_{NUM_LAYERS-2}, drive zeros
          for (genvar j = 0; j < N_CUR; j++) begin
            assign x_up_l[j] = 32'h0000_0000;
          end
        end else begin : G_MID_PRESYN
          // layer ul: presyn from x_state_global[ul+1]
          for (genvar j = 0; j < N_CUR; j++) begin
            assign x_up_l[j] = x_state_global[ul+1][j];
          end
        end

        // ---- back_from_down wiring ----
        if (ul == 0) begin : G_BOTTOM_BACK
          // bottom: tie off external back inputs
          for (genvar r = 0; r < M_CUR; r++)
            for (genvar c = 0; c < K_CUR; c++)
              assign back_from_down_l[r][c] = 32'h0000_0000;
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
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_PRESYN_THIS_LAYER(ACT_PRESYN_THIS),
            .ACT_STATE_THIS_LAYER(ACT_STATE_THIS),
            .THETA_PRESET_IEEE_PER_NEURON(THETA_L0),
            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .alpha_ieee(alpha_ieee),
            .gamma_ieee(gamma_ieee),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up_ieee(x_up_l),
            .back_from_down_ieee(back_from_down_l),

            .back_up_valid_o(back_valid_vec[ul]),
            .back_matrix_kn_ieee(back_kn_l),
            .back_matrix_nk_ieee(back_nk_l),

            .x_state_ieee(x_state_l)
          );

        end else if (ul == 1) begin : G_LAYER_INST_L1

          pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_PRESYN_THIS_LAYER(ACT_PRESYN_THIS),
            .ACT_STATE_THIS_LAYER(ACT_STATE_THIS),
            .THETA_PRESET_IEEE_PER_NEURON(THETA_L1),
            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .alpha_ieee(alpha_ieee),
            .gamma_ieee(gamma_ieee),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up_ieee(x_up_l),
            .back_from_down_ieee(back_from_down_l),

            .back_up_valid_o(back_valid_vec[ul]),
            .back_matrix_kn_ieee(back_kn_l),
            .back_matrix_nk_ieee(back_nk_l),

            .x_state_ieee(x_state_l)
          );

        end else begin : G_LAYER_INST_LX
          pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_PRESYN_THIS_LAYER(ACT_PRESYN_THIS),
            .ACT_STATE_THIS_LAYER(ACT_STATE_THIS),

            // For ul==2 (top), N_CUR is likely 0, so this param won’t be used.
            // For safety, pass zeros. You can later add THETA_L2 if you ever need it.
            .THETA_PRESET_IEEE_PER_NEURON('{default:'{default:32'h0000_0000}}),

            .X_INIT_IEEE_THIS_LAYER(X_INIT_SEED)
          ) L (
            .clk(clk),
            .rst_n(rst_n),
            .start_tick(start_tick_int),

            .busy_o(busy_vec[ul]),
            .done_o(done_vec[ul]),

            .alpha_ieee(alpha_ieee),
            .gamma_ieee(gamma_ieee),

            .x_set_en_vec(x_set_en_vec_l),
            .x_obs_ieee_vec(x_obs_ieee_vec_l),

            .x_up_ieee(x_up_l),
            .back_from_down_ieee(back_from_down_l),

            .back_up_valid_o(back_valid_vec[ul]),
            .back_matrix_kn_ieee(back_kn_l),
            .back_matrix_nk_ieee(back_nk_l),

            .x_state_ieee(x_state_l)
          );
        end

        // ---- export to global padded arrays for other layers and TB ----

        // state
        for (genvar i2 = 0; i2 < K_CUR; i2++) begin : G_STATE_EXPORT
          assign x_state_global[ul][i2] = x_state_l[i2];
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

`default_nettype wire
