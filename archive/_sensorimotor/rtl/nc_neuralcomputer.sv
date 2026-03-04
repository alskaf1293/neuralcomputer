typedef enum logic [2:0] {
  ACT_LINEAR = 3'd0,
  ACT_RELU   = 3'd1,
  ACT_TANH   = 3'd2,
  ACT_SIGMOID  = 3'd3
} act_kind_e;

module activation32 #(
    parameter int KIND = 1, // ACT_RELU
    parameter int EXP  = 8,
    parameter int SIG  = 24
)(

    input  logic [EXP+SIG:0] in_rec,   // RECW bits
    output logic [EXP+SIG:0] f_rec,    // activation value
    output logic [EXP+SIG:0] fp_rec    // derivative wrt input
);
    localparam int ACT_LINEAR  = 0;
    localparam int ACT_RELU    = 1;
    localparam int ACT_TANH    = 2;
    localparam int ACT_SIGMOID = 3;

    localparam int   RECW   = EXP + SIG + 1;
    localparam [2:0] RM_RNE = 3'd0;

    // constants
    logic [RECW-1:0] rec_one, rec_zero;
    hf_f2rec32 U_ACT_ONE  (.in_ieee(32'h3F800000), .out_rec(rec_one));
    hf_f2rec32 U_ACT_ZERO (.in_ieee(32'h00000000), .out_rec(rec_zero));

    generate
      if (KIND == ACT_LINEAR) begin : G_LINEAR
        // f(x) = x, f'(x) = 1
        assign f_rec  = in_rec;
        assign fp_rec = rec_one;

      end else if (KIND == ACT_RELU) begin : G_RELU
        logic [RECW-1:0] f_relu, fp_relu;
        activation_relu32 #(.EXP(EXP), .SIG(SIG)) U_ACT_RELU (
          .in_rec(in_rec),
          .f_rec(f_relu),
          .fp_rec(fp_relu)
        );
        assign f_rec  = f_relu;
        assign fp_rec = fp_relu;

      end else if (KIND == ACT_TANH) begin : G_TANH
        logic [31:0] in_ieee_bits;
        logic [31:0] f_ieee_bits, fp_ieee_bits;

        hf_rec2f32 U_R2F_IN (.in_rec(in_rec), .out_ieee(in_ieee_bits));

        always_comb begin
          f_ieee_bits  = in_ieee_bits;
          fp_ieee_bits = 32'h3F800000;
        end

        hf_f2rec32 U_F2R_F  (.in_ieee(f_ieee_bits),  .out_rec(f_rec));
        hf_f2rec32 U_F2R_FP (.in_ieee(fp_ieee_bits), .out_rec(fp_rec));
      
      end else if (KIND == ACT_SIGMOID) begin : G_SIGMOID
        logic [31:0] in_ieee_bits;
        logic [31:0] f_ieee_bits, fp_ieee_bits;

        // recFN -> IEEE float bits
        hf_rec2f32 U_R2F_IN_SIG (.in_rec(in_rec), .out_ieee(in_ieee_bits));
        always_comb begin
          f_ieee_bits  = in_ieee_bits;
          fp_ieee_bits = 32'h3F800000;
        end

        // IEEE -> recFN
        hf_f2rec32 U_F2R_F_SIG  (.in_ieee(f_ieee_bits),  .out_rec(f_rec));
        hf_f2rec32 U_F2R_FP_SIG (.in_ieee(fp_ieee_bits), .out_rec(fp_rec));
      
      end else begin : G_DEFAULT
        // Fallback to linear for safety
        assign f_rec  = in_rec;
        assign fp_rec = rec_one;
      end
    endgenerate

endmodule

`timescale 1ns/1ps
`default_nettype none

module neuron_core_single_back #(
    parameter bit CLAMP_HARD = 1'b0,
    parameter int ACT_PRESYN_KIND = 1,
    parameter int N   = 4,
    parameter int M   = 4,
    parameter int EXP = 8,
    parameter int SIG = 24,
    parameter logic [31:0] X_I_INIT_IEEE     = 32'h0000_0000,
    parameter logic [31:0] BIAS_INIT_IEEE    = 32'h0000_0000,
    parameter logic [31:0] BIAS_LR_SCALE_IEEE= 32'h3F800000,
    parameter bit          FREEZE_BIAS       = 1'b0,
    parameter int N_SAFE = (N > 1) ? N : 2,
    parameter int M_SAFE = (M > 1) ? M : 2
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // FLAT theta presets (N lanes)
    input  logic [32*N-1:0]           theta_preset_flat_ieee,

    // Tick control
    input  logic                     start_tick,
    output logic                     busy_o,
    output logic                     done_o,

    // Learning rate and optional external clamp
    input  logic [31:0]              alpha_ieee,
    input  logic [31:0]              gamma_ieee,
    input  logic                     x_set_en,
    input  logic [31:0]              x_obs_ieee,

    // FLAT presynaptic vector x^{(l+1)} (N lanes)
    input  logic [32*N-1:0]           x_vec_flat_ieee,

    // FLAT back inputs (M lanes)
    input  logic [32*M-1:0]           back_in_flat_ieee,

    // Observability
    output logic [$clog2(N_SAFE)-1:0] col_idx_o,
    output logic [31:0]               eps_ieee,
    output logic [31:0]               x_i_ieee,

    // FLAT back vector out (N lanes)
    output logic                      back_vec_valid_o,
    output logic [32*N-1:0]           back_vec_flat_ieee,

    // θ debug dump stream (still scalar ports)
    input  logic                      dbg_dump_start,
    output logic                      dbg_busy,
    output logic                      dbg_valid,
    output logic [$clog2(N_SAFE)-1:0] dbg_idx,
    output logic [31:0]               dbg_theta_ieee
);
    localparam int ACT_LINEAR  = 0;
    localparam int ACT_RELU    = 1;
    localparam int ACT_TANH    = 2;
    localparam int ACT_SIGMOID = 3;

    // -------- local array "views" (internal only; ports are flat) --------
    logic [31:0] theta_preset_ieee [N];
    logic [31:0] x_vec_ieee        [N];
    logic [31:0] back_in_ieee      [M];

    logic [31:0] back_vec_ieee     [N];   // internal back vec as array

    generate
      for (genvar i=0; i<N; i++) begin : G_UNFLAT_IN
        assign theta_preset_ieee[i] = theta_preset_flat_ieee[32*i +: 32];
        assign x_vec_ieee[i]        = x_vec_flat_ieee[32*i +: 32];
      end
      for (genvar r=0; r<M; r++) begin : G_UNFLAT_BACKIN
        assign back_in_ieee[r] = back_in_flat_ieee[32*r +: 32];
      end
      for (genvar i=0; i<N; i++) begin : G_FLAT_BACKOUT
        assign back_vec_flat_ieee[32*i +: 32] = back_vec_ieee[i];
      end
    endgenerate

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

    // x_i = x^{(l)} (this neuron's current activity/state that we integrate over ticks)
    logic [RECW-1:0] x_i, x_i_init_rec, x_i_eff;
    hf_f2rec32 U_XI0 (.in_ieee(X_I_INIT_IEEE), .out_rec(x_i_init_rec));
    assign x_i_eff = (x_set_en ? x_obs : x_i);

    // x_i = phi(u_i_eff)
    // x_i is the state itself now (no state activation)
    logic [RECW-1:0] x_i_curr;
    assign x_i_curr = x_i_eff;

    // Compute f'(x_i) for the current activity (for activity dynamics gating)
    logic [RECW-1:0] fpi_act;

    activation32 #(
      .KIND(ACT_PRESYN_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_CURR_DERIV (
      .in_rec(x_i_curr),         // derivative evaluated at current activity
      .f_rec(),
      .fp_rec(fpi_act)
    );

    // ------------- accumulators -----------------------------
    logic [RECW-1:0] mu_acc, mu_final, eps_i, m_i;
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

    logic [RECW-1:0] xj_act_raw, xj_actp;

    // f(x^(l+1))
    activation32 #(
      .KIND(ACT_PRESYN_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_PRE (
      .in_rec(xj_in_feat),
      .f_rec(xj_act_raw),
      .fp_rec(xj_actp)
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
    logic [RECW-1:0] back_sum_c_in, back_acc_out;
    assign back_sum_c_in = (r == '0) ? rec_zero : back_sum;

    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) ADD_BACKSUM (
      .control('0), .subOp(1'b0),
      .a(back_sum_c_in), .b(back_in_rec[r]),
      .roundingMode(RM_RNE), .out(back_acc_out), .exceptionFlags()
    );

    // gate: back_eff = φ'(x_i) * back_sum
    logic [RECW-1:0] back_eff;

    wire [RECW-1:0] back_sum_latest = back_acc_out;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BACK_GATE (
      .control('0), .a(back_sum_latest), .b(fpi_act),
      .roundingMode(RM_RNE), .out(back_eff), .exceptionFlags()
    );

    // --------- prediction μ_i accumulation over j in [0..N] (bias at N) ----------
    logic [RECW-1:0] mu_c_in, pred_mac_out;
    assign mu_c_in = (j == '0) ? rec_zero : mu_acc;

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_PRED (
      .control('0), .op(2'b00),
      .a(theta[j]), .b(xj_act), .c(mu_c_in),
      .roundingMode(RM_RNE), .out(pred_mac_out), .exceptionFlags()
    );

    // ε_i = x_i_curr - μ_i
    logic [RECW-1:0] err_sub_out; 
    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) SUB_ERR (
      .control('0), .subOp(1'b1),
      .a(x_i_curr), .b(mu_final),
      .roundingMode(RM_RNE), .out(err_sub_out), .exceptionFlags()
    );

    // m_i = α * ε_i   (no normalization)
    logic [RECW-1:0] mul_ae_out;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_AE (
      .control('0), .a(alpha), .b(err_sub_out),
      .roundingMode(RM_RNE), .out(mul_ae_out), .exceptionFlags()
    );

    // Δx_i = γ*(back_eff - ε_i)
    logic [RECW-1:0] sub_back_minus_eps, state_out;

    addRecFN #(.expWidth(EXP), .sigWidth(SIG)) SUB_BME (
      .control('0), .subOp(1'b1),
      .a(back_eff), .b(err_sub_out),
      .roundingMode(RM_RNE), .out(sub_back_minus_eps), .exceptionFlags()
    );

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_STATE (
      .control('0), .op(2'b00),
      .a(gamma), .b(sub_back_minus_eps), .c(x_i),
      .roundingMode(RM_RNE), .out(state_out), .exceptionFlags()
    );

    // --------- θ update: θ_j <- θ_j + m_i_eff * act_j  (bias learns slower / can freeze)
    logic [RECW-1:0] m_i_bias_scaled, m_i_eff;
    logic [RECW-1:0] weight_out;

    // m_i_bias_scaled = m_i * bias_lr_scale
    wire [RECW-1:0] m_i_now = mul_ae_out;
    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BLR (
      .control('0), .a(m_i_now), .b(rec_bias_lr),
      .roundingMode(RM_RNE), .out(m_i_bias_scaled), .exceptionFlags()
    );

    // m_i is just latched mul_ae_out for clarity
    // bias lane uses scaled m_i
    assign m_i_eff = (j == N) ? m_i_bias_scaled : m_i_now;

    mulAddRecFN #(.expWidth(EXP), .sigWidth(SIG)) FMA_W (
      .control('0), .op(2'b00),
      .a(m_i_eff), .b(xj_act), .c(theta[j]),
      .roundingMode(RM_RNE), .out(weight_out), .exceptionFlags()
    );

    // --------- back vector: back_vec[j] = θ_j * ε_i for j in [0..N-1] ----------
    logic [RECW-1:0] back_vec_rec [N];
    logic [RECW-1:0] back_mul_out;

    mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_BACKJ (
      .control('0), .a(theta[(j < N) ? j : 0]), .b(eps_i), // bias lane ignored
      .roundingMode(RM_RNE), .out(back_mul_out), .exceptionFlags()
    );

    generate
      for (genvar go=0; go<N; go++) begin : G_BACK_OUT
        hf_rec2f32 u_bof (.in_rec(back_vec_rec[go]), .out_ieee(back_vec_ieee[go]));
      end
    endgenerate

    // --------- observability outputs ----------
    hf_rec2f32 U_EPS (.in_rec(eps_i),   .out_ieee(eps_ieee));
    hf_rec2f32 U_XO  (.in_rec(x_i_curr), .out_ieee(x_i_ieee));

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
        col_j            <= '0;
        busy_o           <= 1'b0;
        done_o           <= 1'b0;
        back_vec_valid_o <= 1'b0;
        mu_final <= rec_zero;
        mu_acc           <= rec_zero;
        eps_i            <= rec_zero;
        m_i              <= rec_zero;
        back_sum         <= rec_zero;

        // init θ: copy presets for [0..N-1], init bias
        for (int k=0; k<N; k++) theta[k]      <= theta_preset_rec[k];
        theta[N] <= theta_bias_init; // bias slot

        for (int k=0; k<N; k++) x_col_ieee[k]   <= 32'h0000_0000;
        for (int k=0; k<N; k++) back_vec_rec[k] <= rec_zero;

        x_i <= x_i_init_rec;
      end else begin
        // per-cycle defaults
        done_o           <= 1'b0;
        back_vec_valid_o <= 1'b0;

        unique case (st)
          S_IDLE: begin
            busy_o <= 1'b0;
            if (start_edge) begin
              busy_o   <= 1'b1;
              mu_final <= rec_zero;
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
              mu_final <= pred_mac_out;
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
            if (CLAMP_HARD && x_set_en) x_i <= x_obs;
            else                        x_i <= state_out;
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
    always_ff @(posedge clk) begin
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
// Yosys-friendly: ALL PORTS PACKED/FLAT (no unpacked array ports)
// Flattening is row-major, 32-bit IEEE lanes.
// ============================================================
module pc_layer #(
  parameter int K   = 4,
  parameter int N   = 4,
  parameter int M   = 2,
  parameter int EXP = 8,
  parameter int SIG = 24,
  parameter bit CLAMP_HARD_THIS_LAYER = 1'b0,

  // Activation choices for this layer
  parameter int ACT_PRESYN_THIS_LAYER = 1,

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

  // FLAT x_obs vector: K lanes
  input  logic [32*K-1:0]          x_obs_flat_ieee,

  // FLAT presynaptic activations from layer l+1: N lanes
  input  logic [32*N-1:0]          x_up_flat_ieee,

  // FLAT back inputs: shape M x K, row-major lanes (r*K + c)
  input  logic [32*M*K-1:0]        back_from_down_flat_ieee,

  // Back matrix this layer emits upward (shape K x N) and its transpose (N x K)
  output logic                     back_up_valid_o,
  output logic [32*K*N-1:0]        back_matrix_kn_flat_ieee, // (i*N + j)
  output logic [32*N*K-1:0]        back_matrix_nk_flat_ieee, // (j*K + i)

  // Per-neuron current states (IEEE), FLAT K lanes
  output logic [32*K-1:0]          x_state_flat_ieee
);

  // ---- Internal collectors ----
  logic [K-1:0] busy_vec, done_vec, back_valid_vec;

  // Optional per-neuron observability (still useful internally)
  logic [31:0] eps_i_ieee [K];
  logic [31:0] x_i_ieee   [K];

  // ---------- Edge detect for this layer ----------
  logic start_q;
  always_ff @(posedge clk) begin
    if (!rst_n) start_q <= 1'b0;
    else        start_q <= start_tick;
  end
  wire start_edge = start_tick & ~start_q;

  // done_latched: OR of done pulses since last tick
  logic [K-1:0] done_latched;
  always_ff @(posedge clk) begin
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
  always_ff @(posedge clk) begin
    if (!rst_n) done_all_q <= 1'b0;
    else        done_all_q <= done_all_now;
  end
  wire done_layer_pulse = done_all_now & ~done_all_q;

  // same mechanism as for done_latched, but for back_vec_valid
  logic [K-1:0] back_valid_latched;
  always_ff @(posedge clk) begin
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
  genvar gi;
  generate
    for (gi=0; gi<K; gi++) begin : G_NEURON
      // ---- pack presynaptic x_up (N lanes) into flat for this neuron ----
      logic [32*N-1:0] x_vec_flat_i;
      for (genvar tj = 0; tj < N; tj++) begin : G_PACK_XVEC
        assign x_vec_flat_i[32*tj +: 32] = x_up_flat_ieee[32*tj +: 32];
      end

      // ---- pack this neuron's M back inputs into flat ----
      logic [32*M-1:0] back_in_flat_i;
      for (genvar gr = 0; gr < M; gr++) begin : G_PACK_BACKIN
        // back_from_down_flat_ieee lane index = (gr*K + gi)
        localparam int IDX = (gr*K + gi);
        assign back_in_flat_i[32*gr +: 32] = back_from_down_flat_ieee[32*IDX +: 32];
      end

      // ---- pack theta row into flat (N) ----
      logic [32*N-1:0] theta_row_flat_i;
      for (genvar tj2 = 0; tj2 < N; tj2++) begin : G_PACK_THETA
        assign theta_row_flat_i[32*tj2 +: 32] = theta_init_pkg::theta_l1(gi, tj2);
      end

      // ---- neuron emits flat back vec (N) ----
      logic [32*N-1:0] back_vec_flat_i;

      neuron_core_single_back #(
        .CLAMP_HARD(CLAMP_HARD_THIS_LAYER),
        .ACT_PRESYN_KIND(ACT_PRESYN_THIS_LAYER),
        .N(N), .M(M), .EXP(EXP), .SIG(SIG),
        .X_I_INIT_IEEE(X_INIT_IEEE_THIS_LAYER),
        .FREEZE_BIAS(1'b0)
      ) u_core (
        .clk(clk), .rst_n(rst_n),

        .theta_preset_flat_ieee(theta_row_flat_i),

        .start_tick(start_tick),
        .busy_o(busy_vec[gi]),
        .done_o(done_vec[gi]),

        .alpha_ieee(alpha_ieee),
        .gamma_ieee(gamma_ieee),
        .x_set_en(x_set_en_vec[gi]),
        .x_obs_ieee(x_obs_flat_ieee[32*gi +: 32]),

        .x_vec_flat_ieee(x_vec_flat_i),
        .back_in_flat_ieee(back_in_flat_i),

        .col_idx_o(),
        .eps_ieee(eps_i_ieee[gi]),
        .x_i_ieee(x_i_ieee[gi]),

        .back_vec_valid_o(back_valid_vec[gi]),
        .back_vec_flat_ieee(back_vec_flat_i),

        .dbg_dump_start(1'b0),
        .dbg_busy(), .dbg_valid(), .dbg_idx(), .dbg_theta_ieee()
      );

      // ---- write this neuron's back vec into (KxN) flat matrix ----
      for (genvar gj = 0; gj < N; gj++) begin : G_KN_STORE
        // back_matrix_kn_flat_ieee lane index = (gi*N + gj)
        localparam int KN_IDX = (gi*N + gj);
        assign back_matrix_kn_flat_ieee[32*KN_IDX +: 32] = back_vec_flat_i[32*gj +: 32];
      end

      // ---- export state to flat ----
      assign x_state_flat_ieee[32*gi +: 32] = x_i_ieee[gi];
    end
  endgenerate

  // ---- Provide transpose (N x K) for wiring to adjacent layers ----
  genvar jT, iT;
  generate
    for (jT=0; jT<N; jT++) begin : G_TRANSPOSE_J
      for (iT=0; iT<K; iT++) begin : G_TRANSPOSE_I
        // kn(i,j) at (i*N + j), nk(j,i) at (j*K + i)
        localparam int KN_IDX2 = (iT*N + jT);
        localparam int NK_IDX2 = (jT*K + iT);
        assign back_matrix_nk_flat_ieee[32*NK_IDX2 +: 32] =
               back_matrix_kn_flat_ieee[32*KN_IDX2 +: 32];
      end
    end
  endgenerate

  // ---- Status ----
  assign busy_o = |busy_vec;
  assign done_o = done_layer_pulse;

endmodule

// ======================================================================
// pc_network_nlayer.sv (Yosys-friendly ports)
// - Flattened clamp ports (no 2D packed ports)
// - Keeps internal per-layer sizing logic the same
// ======================================================================

`timescale 1ns/1ps
`default_nettype none
`include "rtl/includes/theta_init_pkg.sv"
import theta_init_pkg::*;

module pc_network_nlayer #(
    parameter int NUM_LAYERS = 4,
    parameter int MAX_K      = 2,

    // per-layer neuron counts
    parameter int K0 = 1,
    parameter int K1 = 2,
    parameter int K2 = 2,
    parameter int K3 = 2,

    // per-layer activation kinds
    parameter int ACT0 = 3,
    parameter int ACT1 = 2,
    parameter int ACT2 = 0,
    parameter int ACT3 = 0,

    parameter int M0  = 0,
    parameter int EXP = 8,
    parameter int SIG = 24
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start_tick,

    input  logic [31:0] alpha_ieee,
    input  logic [31:0] gamma_ieee,

    // ------------------------------------------------------------
    // Yosys-friendly clamp buses:
    //  x_set_en_all_flat[ layer*MAX_K + neuron ]
    //  x_obs_all_flat_ieee[ 32*(layer*MAX_K + neuron) +: 32 ]
    // ------------------------------------------------------------
    input  logic [NUM_LAYERS*MAX_K-1:0]      x_set_en_all_flat,
    input  logic [NUM_LAYERS*MAX_K*32-1:0]   x_obs_all_flat_ieee,

    output logic busy_o,
    output logic done_o
);
    localparam int ACT_LINEAR  = 0;
    localparam int ACT_RELU    = 1;
    localparam int ACT_TANH    = 2;
    localparam int ACT_SIGMOID = 3;

    // ------------------------------------------------------------------
    // Helpers for indexing the flattened clamp buses
    // ------------------------------------------------------------------
    function automatic int ln_idx(input int layer, input int neuron);
      return layer*MAX_K + neuron;
    endfunction

    // (bit index of 32-bit lane base)
    function automatic int ln_bit32(input int layer, input int neuron);
      return 32*(layer*MAX_K + neuron);
    endfunction

    function automatic int K_SEL(input int idx);
      begin
        unique case (idx)
          0: K_SEL = K0;
          1: K_SEL = K1;
          2: K_SEL = K2;
          3: K_SEL = K3;
          default: K_SEL = 1;
        endcase
      end
    endfunction

    function automatic int ACT_SEL(input int idx);
      begin
        unique case (idx)
          0: ACT_SEL = ACT0;
          1: ACT_SEL = ACT1;
          2: ACT_SEL = ACT2;
          3: ACT_SEL = ACT3;
          default: ACT_SEL = ACT_RELU;
        endcase
      end
    endfunction


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
    // Start arbiter signal that actually fans out to layers
    // ------------------------------------------------------------------
    logic start_tick_int;

    // ------------------------------------------------------------------
    // Layer instantiations
    // ------------------------------------------------------------------
    genvar ul;
    generate
      for (ul = 0; ul < NUM_LAYERS; ul++) begin : G_LAYER
        // ---- derive K, N, M for this layer ----
        localparam int K_CUR  = K_SEL(ul);
        localparam int K_PREV = (ul == 0) ? K_CUR : K_SEL(ul-1);
        localparam int K_NEXT = (ul == NUM_LAYERS-1) ? K_CUR : K_SEL(ul+1);

        localparam int N_CUR  = (NUM_LAYERS == 1) ? K_SEL(0) :
                                (ul == NUM_LAYERS-1) ? K_SEL(NUM_LAYERS-2)
                                                    : K_NEXT;

        localparam int M_CUR  = (ul == 0) ? M0_EFF : K_PREV;

        localparam int ACT_PRESYN_THIS = ACT_SEL(ul);

        localparam bit CLAMP_HARD_THIS = 1'b1;

        // ---- local, exactly-sized signals matching pc_layer ports ----
        logic [K_CUR-1:0]          x_set_en_vec_l;
        logic [32*K_CUR-1:0]       x_obs_flat_l;
        logic [32*N_CUR-1:0]       x_up_flat_l;
        logic [32*M_CUR*K_CUR-1:0] back_from_down_flat_l;

        logic [32*K_CUR*N_CUR-1:0] back_kn_flat_l;
        logic [32*N_CUR*K_CUR-1:0] back_nk_flat_l;
        logic [32*K_CUR-1:0]       x_state_flat_l;

        // ---- import clamp control from TB-wide flattened buses ----
        for (genvar i = 0; i < K_CUR; i++) begin : G_CLAMP_IMPORT
          localparam int I_LN = (ul*MAX_K + i);
          assign x_set_en_vec_l[i]        = x_set_en_all_flat[I_LN];
          assign x_obs_flat_l[32*i +: 32] = x_obs_all_flat_ieee[32*I_LN +: 32];
        end

        // ---- presynaptic wiring from above (or zeros at top) ----
        if (NUM_LAYERS == 1) begin : G_SINGLE_PRESYN
          for (genvar j = 0; j < N_CUR; j++) begin : G_SINGLE_PRESYN_Z
            assign x_up_flat_l[32*j +: 32] = 32'h0000_0000;
          end
        end else if (ul == NUM_LAYERS-1) begin : G_TOP_PRESYN
          for (genvar j = 0; j < N_CUR; j++) begin : G_TOP_PRESYN_Z
            assign x_up_flat_l[32*j +: 32] = 32'h0000_0000;
          end
        end else begin : G_MID_PRESYN
          for (genvar j = 0; j < N_CUR; j++) begin : G_MID_PRESYN_W
            assign x_up_flat_l[32*j +: 32] = x_state_global[ul+1][j];
          end
        end

        // ---- back_from_down wiring ----
        if (ul == 0) begin : G_BOTTOM_BACK
          for (genvar r = 0; r < M_CUR; r++) begin : G_BOT_BACK_R
            for (genvar c = 0; c < K_CUR; c++) begin : G_BOT_BACK_C
              localparam int IDX = (r*K_CUR + c);
              assign back_from_down_flat_l[32*IDX +: 32] = 32'h0000_0000;
            end
          end
        end else begin : G_UPPER_BACK
          for (genvar r = 0; r < M_CUR; r++) begin : G_UP_BACK_R
            for (genvar c = 0; c < K_CUR; c++) begin : G_UP_BACK_C
              localparam int IDX = (r*K_CUR + c);
              assign back_from_down_flat_l[32*IDX +: 32] = back_nk_global[ul-1][c][r];
            end
          end
        end

        localparam logic [31:0] X_INIT_SEED = 32'h3A83126F;

        // ---- instantiate the layer ----
        pc_layer #(
            .K(K_CUR),
            .N(N_CUR),
            .M(M_CUR),
            .EXP(EXP),
            .SIG(SIG),
            .CLAMP_HARD_THIS_LAYER(CLAMP_HARD_THIS),
            .ACT_PRESYN_THIS_LAYER(ACT_PRESYN_THIS),
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
            .x_obs_flat_ieee(x_obs_flat_l),
            .x_up_flat_ieee(x_up_flat_l),
            .back_from_down_flat_ieee(back_from_down_flat_l),

            .back_up_valid_o(back_valid_vec[ul]),
            .back_matrix_kn_flat_ieee(back_kn_flat_l),
            .back_matrix_nk_flat_ieee(back_nk_flat_l),

            .x_state_flat_ieee(x_state_flat_l)
        );

        // ---- export to global padded arrays for other layers and TB ----

        // state: K_CUR lanes
        for (genvar i2 = 0; i2 < K_CUR; i2++) begin : G_STATE_EXPORT
          assign x_state_global[ul][i2] = x_state_flat_l[32*i2 +: 32];
        end

        // back_kn: K_CUR x N_CUR
        for (genvar i3 = 0; i3 < K_CUR; i3++) begin : G_KN_EXPORT_I
          for (genvar j3 = 0; j3 < N_CUR; j3++) begin : G_KN_EXPORT_J
            localparam int KN_IDX = (i3*N_CUR + j3);
            assign back_kn_global[ul][i3][j3] = back_kn_flat_l[32*KN_IDX +: 32];
          end
        end

        // back_nk: N_CUR x K_CUR
        for (genvar j4 = 0; j4 < N_CUR; j4++) begin : G_NK_EXPORT_J
          for (genvar i4 = 0; i4 < K_CUR; i4++) begin : G_NK_EXPORT_I
            localparam int NK_IDX = (j4*K_CUR + i4);
            assign back_nk_global[ul][j4][i4] = back_nk_flat_l[32*NK_IDX +: 32];
          end
        end

      end // for ul
    endgenerate

    // ------------------------------------------------------------------
    // Network-level completion and start-arbiter
    // ------------------------------------------------------------------

    // Track when the internal start actually fired (for clearing done_latched)
    logic start_q_int;
    always_ff @(posedge clk) begin
      if (!rst_n) start_q_int <= 1'b0;
      else        start_q_int <= start_tick_int;
    end
    wire start_edge_int = start_tick_int & ~start_q_int;

    // Latch per-layer done pulses since last internal start
    logic [NUM_LAYERS-1:0] done_latched;
    always_ff @(posedge clk) begin
      if (!rst_n) begin
        done_latched <= '0;
      end else if (start_edge_int) begin
        done_latched <= '0;
      end else begin
        done_latched <= done_latched | done_vec;
      end
    end

    // Pulse done_o once when all layers have reported done
    logic done_q_net;
    wire  done_all_now_net = &done_latched;

    always_ff @(posedge clk) begin
      if (!rst_n) done_q_net <= 1'b0;
      else        done_q_net <= done_all_now_net;
    end

    wire done_net_pulse = done_all_now_net & ~done_q_net;

    // TB-side start request edge detect
    logic tb_start_q;
    always_ff @(posedge clk) begin
      if (!rst_n) tb_start_q <= 1'b0;
      else        tb_start_q <= start_tick;
    end
    wire tb_start_edge = start_tick & ~tb_start_q;

    // Start request latch until network is idle and not in cooldown
    logic start_req, cooldown;
    always_ff @(posedge clk) begin
      if (!rst_n) start_req <= 1'b0;
      else begin
        if (tb_start_edge) start_req <= 1'b1;
        if (start_req && ~(|busy_vec) && !cooldown)
          start_req <= 1'b0;
      end
    end

    always_ff @(posedge clk) begin
      if (!rst_n) cooldown <= 1'b0;
      else        cooldown <= done_net_pulse; // 1-cycle cooldown after done pulse
    end

    wire ready      = ~(|busy_vec) & ~cooldown;
    wire start_fire = start_req & ready;

    assign start_tick_int = start_fire;

    assign busy_o = |busy_vec;
    assign done_o = done_net_pulse;

endmodule

`default_nettype wire
