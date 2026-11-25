`timescale 1ns/1ps
`default_nettype none

`ifndef USE_HARDENED_NEURON
module neuron_core #(
    parameter bit CLAMP_HARD = 1'b0,

    // Activation choices
    parameter act_kind_e ACT_KIND = ACT_RELU,

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
    
    input  logic                     x_set_en,
    input  logic [31:0]              x_obs_ieee
);
    // -------- widths and constants --------
    localparam int   RECW   = EXP + SIG + 1;
    localparam [2:0] RM_RNE = 3'd0;
    localparam int   J_EFF  = J + 1;     // for bias lane

    logic [RECW-1:0] rec_zero, rec_one, rec_bias_lr;
    hf_f2rec32 U_REC_ZERO (.in_ieee(32'h0000_0000),           .out_rec(rec_zero));
    hf_f2rec32 U_REC_ONE  (.in_ieee(32'h3F800000),            .out_rec(rec_one));
    hf_f2rec32 U_REC_BLR  (.in_ieee(BIAS_LR_SCALE_IEEE),      .out_rec(rec_bias_lr));

    logic [RECW-1:0] alpha, gamma, x_obs;
    hf_f2rec32 U_A (.in_ieee(ALPHA_IEEE), .out_rec(alpha));
    hf_f2rec32 U_G (.in_ieee(GAMMA_IEEE), .out_rec(gamma));
    hf_f2rec32 U_XOBS (.in_ieee(x_obs_ieee), .out_rec(x_obs));

    // -------- stored activity and weights --------
    // θ initialization (J weights + 1 bias)
    logic [RECW-1:0] theta [J_EFF];
    logic [RECW-1:0] theta_preset_rec [J];

    for (genvar preset_idx=0; preset_idx<J; preset_idx++) begin : G_THETA_PRESET
      hf_f2rec32 u_p (
        .in_ieee(THETA_PRESET_IEEE[preset_idx]),
        .out_rec(theta_preset_rec[preset_idx])
      );
    end

    // bias initialization
    logic [RECW-1:0] theta_bias_init;
    hf_f2rec32 U_BIAS_INIT (.in_ieee(BIAS_INIT_IEEE), .out_rec(theta_bias_init));

    // activity x_i, clamp, reset value
    logic [RECW-1:0] x_i, x_i_eff, x_i_init_rec;
    hf_f2rec32 U_XI0 (.in_ieee(X_I_INIT_IEEE), .out_rec(x_i_init_rec));
    assign x_i_eff = (x_set_en ? x_obs : x_i);

    // φ'(x_i), used in activity update
    logic [RECW-1:0] phi_xi_unused, phi_prime_xi;

    activation32 #(
      .KIND(ACT_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_LOCAL_FEAT (
      .in_rec(x_i_eff),
      .f_rec(phi_xi_unused),
      .fp_rec(phi_prime_xi)
    );

    // -------- communication --------
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

    for (genvar destination=0; destination<K; destination++) begin : G_STATE_FANOUT
      assign x_out[destination] = x_i_eff[rx_bit];
    end

    // -------- prediction --------
    logic [$clog2(J_EFF)-1:0]  j;
    wire [RECW-1:0] xj_in_feat = x_col[(j < J) ? j : 0];

    logic [RECW-1:0] xj_act_raw, xj_actp_unused;

    activation32 #(
      .KIND(ACT_KIND),
      .EXP(EXP), .SIG(SIG)
    ) ACT_PRE (
      .in_rec(xj_in_feat),
      .f_rec(xj_act_raw),
      .fp_rec(xj_actp_unused)
    );

    // bias lane uses constant 1 as the feature
    wire is_bias_idx = (j == J);
    wire [RECW-1:0] xj_act = is_bias_idx ? rec_one : xj_act_raw;

    logic [RECW-1:0] mu_acc, mu_c_in;
    assign mu_c_in = (j == '0) ? rec_zero : mu_acc;

    // -------- error --------
    logic [RECW-1:0] eps_i;

    // -------- feedback --------
    logic [$clog2(K_SAFE)-1:0] r;
    logic [RECW-1:0] back_acc, back_sum_c_in;
    assign back_sum_c_in = (r == '0) ? rec_zero : back_acc;

    // back_eff = φ'(x_i) * back_acc
    logic [RECW-1:0] back_eff;

    // -------- activity update --------
    // Δx_i = γ*(back_eff - ε_i)
    logic [RECW-1:0] sub_back_minus_eps;

    // -------- weight update --------
    // θ update: θ_j <- θ_j + m_i_eff * act_j  (bias learns slower / can freeze)
    logic [RECW-1:0] m_i, m_i_bias_scaled, m_i_eff;

    assign m_i_eff = (j == J) ? m_i_bias_scaled : m_i;

    // -------- MAC signals and FMA --------
    logic [1:0] mac_op;
    logic [RECW-1:0] mac_a, mac_b, mac_c;
    logic [RECW-1:0] mac_out;
    logic [4:0] mac_exc;

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

    // -------- FSM --------
    typedef enum logic [3:0] {
      // Wait for a tick and receive activities
      S_IDLE,
      S_RECEIVE_ACTIVITIES,

      // Prediction
      S_PREDICT,

      // Error
      S_ERROR,

      // Prepare, exchange, and sum feedback
      S_PREPARE_FEEDBACK,
      S_EXCHANGE_FEEDBACK,
      S_SUM_FEEDBACK,

      // Activity update
      S_GATE_FEEDBACK,
      S_ACTIVITY_DIRECTION,
      S_UPDATE_ACTIVITY,

      // Weight update
      S_SCALE_ERROR,
      S_SCALE_BIAS_INCREMENT,
      S_UPDATE_WEIGHTS
    } st_e;

    st_e st;

    // -------- combinational --------
    always_comb begin
      mac_a = rec_zero;
      mac_b = rec_zero;
      mac_c = rec_zero;
      mac_op = 2'b00;

      case (st)
        // Prediction
        S_PREDICT: begin
          mac_a = theta[j];
          mac_b = xj_act;
          mac_c = mu_c_in;
        end

        // Error
        S_ERROR: begin
          mac_a = x_i_eff;
          mac_b = rec_one;
          mac_c = mu_acc;
          mac_op = 2'b01;
        end

        // Prepare and sum feedback
        S_PREPARE_FEEDBACK: begin
          mac_a = theta[(j < J) ? j : 0];
          mac_b = eps_i;
          mac_c = rec_zero;
        end

        S_SUM_FEEDBACK: begin
          mac_a = back_rx[r];
          mac_b = rec_one;
          mac_c = back_sum_c_in;
        end

        // Activity update
        S_GATE_FEEDBACK: begin
          mac_a = back_acc;
          mac_b = phi_prime_xi;
          mac_c = rec_zero;
        end

        S_ACTIVITY_DIRECTION: begin
          mac_a = back_eff;
          mac_b = rec_one;
          mac_c = eps_i;
          mac_op = 2'b01;
        end

        S_UPDATE_ACTIVITY: begin
          mac_a = gamma;
          mac_b = sub_back_minus_eps;
          mac_c = x_i;
        end

        // Weight update
        S_SCALE_ERROR: begin
          mac_a = alpha;
          mac_b = eps_i;
          mac_c = rec_zero;
        end

        S_SCALE_BIAS_INCREMENT: begin
          mac_a = m_i;
          mac_b = rec_bias_lr;
          mac_c = rec_zero;
        end

        S_UPDATE_WEIGHTS: begin
          mac_a = m_i_eff;
          mac_b = xj_act;
          mac_c = theta[j];
        end

        default: begin end
      endcase
    end

    // -------- sequential --------
    // edge detect
    logic start_q;
    wire start_edge = start_tick & ~start_q;

    always_ff @(posedge clk) begin
      if (!rst_n) begin
        start_q            <= 1'b0;
        st                 <= S_IDLE;
        j                  <= '0;
        r                  <= '0;
        rx_bit             <= '0;
        tick_cycle         <= '0;
        back_bit           <= '0;
        busy_o             <= 1'b0;
        done_o             <= 1'b0;
        mu_acc             <= rec_zero;
        eps_i              <= rec_zero;
        m_i                <= rec_zero;
        back_acc           <= rec_zero;
        m_i_bias_scaled    <= rec_zero;
        back_eff           <= rec_zero;
        sub_back_minus_eps <= rec_zero;

        // Initialize weights and bias.
        for (int k=0; k<J; k++)
          theta[k] <= theta_preset_rec[k];
        theta[J] <= theta_bias_init;

        for (int k=0; k<J; k++) x_col[k] <= rec_zero;
        for (int k=0; k<J; k++) back_tx[k] <= rec_zero;
        for (int k=0; k<K; k++) back_rx[k] <= rec_zero;

        x_i <= x_i_init_rec;
      end else begin
        done_o <= 1'b0;
        start_q <= start_tick;

        if (busy_o && tick_cycle < BACK_START_CYCLE)
          tick_cycle <= tick_cycle + 1'b1;

        unique case (st)
          // Wait for a tick and receive activities.
          S_IDLE: begin
            busy_o <= 1'b0;

            if (start_edge) begin
              busy_o     <= 1'b1;
              mu_acc     <= rec_zero;
              back_acc   <= rec_zero;
              j          <= '0;
              r          <= '0;
              rx_bit     <= '0;
              tick_cycle <= '0;
              back_bit   <= '0;
              st         <= S_RECEIVE_ACTIVITIES;
            end
          end

          S_RECEIVE_ACTIVITIES: begin
            for (int k=0; k<J; k++)
              x_col[k][rx_bit] <= x_vec[k];

            if (rx_bit == RECW-1)
              st <= S_PREDICT;
            else
              rx_bit <= rx_bit + 1'b1;
          end

          // Prediction.
          S_PREDICT: begin
            mu_acc <= mac_out;

            if (j == J_EFF-1)
              st <= S_ERROR;
            else
              j <= j + 1'b1;
          end

          // Prediction error.
          S_ERROR: begin
            eps_i <= mac_out;
            j     <= '0;
            r     <= '0;
            st    <= S_PREPARE_FEEDBACK;
          end

          // Prepare, exchange, and sum feedback.
          S_PREPARE_FEEDBACK: begin
            if (j < J)
              back_tx[j] <= mac_out;

            if (j == J-1) begin
              j        <= '0;
              back_bit <= '0;
              st       <= S_EXCHANGE_FEEDBACK;
            end else begin
              j <= j + 1'b1;
            end
          end

          S_EXCHANGE_FEEDBACK: begin
            if (tick_cycle == BACK_START_CYCLE) begin
              for (int k=0; k<K; k++)
                back_rx[k][back_bit] <= back_in[k];

              if (back_bit == RECW-1) begin
                r  <= '0;
                st <= S_SUM_FEEDBACK;
              end else begin
                back_bit <= back_bit + 1'b1;
              end
            end
          end

          S_SUM_FEEDBACK: begin
            back_acc <= mac_out;

            if (r == K-1) begin
              j  <= '0;
              st <= S_GATE_FEEDBACK;
            end else begin
              r <= r + 1'b1;
            end
          end

          // Activity update.
          S_GATE_FEEDBACK: begin
            back_eff <= mac_out;
            st       <= S_ACTIVITY_DIRECTION;
          end

          S_ACTIVITY_DIRECTION: begin
            sub_back_minus_eps <= mac_out;
            st                 <= S_UPDATE_ACTIVITY;
          end

          S_UPDATE_ACTIVITY: begin
            if (CLAMP_HARD && x_set_en)
              x_i <= x_obs;
            else
              x_i <= mac_out;

            st <= S_SCALE_ERROR;
          end

          // Weight update.
          S_SCALE_ERROR: begin
            m_i <= mac_out;
            j   <= '0;
            st  <= S_SCALE_BIAS_INCREMENT;
          end

          S_SCALE_BIAS_INCREMENT: begin
            m_i_bias_scaled <= mac_out;
            st              <= S_UPDATE_WEIGHTS;
          end

          S_UPDATE_WEIGHTS: begin
            if (learn_en && !(FREEZE_BIAS && (j == J)))
              theta[j] <= mac_out;

            if (j == J_EFF-1) begin
              busy_o <= 1'b0;
              done_o <= 1'b1;
              st     <= S_IDLE;
            end else
              j <= j + 1'b1;
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
