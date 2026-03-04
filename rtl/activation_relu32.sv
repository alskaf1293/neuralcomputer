// --- activation_relu32_leaky.sv ---
// Leaky ReLU: f(x)= x if x>0 else leak*x
//             f'(x)= 1 if x>0 else leak
module activation_relu32_leaky #(
  parameter int EXP = 8,
  parameter int SIG = 24,
  // default leak = 1e-2 (0x3C23D70A). Set to 0 for vanilla ReLU.
  parameter logic [31:0] LEAK_IEEE = 32'h3C23D70A
)(
  input  logic [EXP+SIG:0] in_rec,
  output logic [EXP+SIG:0] f_rec,
  output logic [EXP+SIG:0] fp_rec
);
  localparam int RECW = EXP + SIG + 1;
  localparam [2:0] RM_RNE = 3'd0;

  // Helpers
  logic [RECW-1:0] rec_zero, rec_one, rec_leak;
  hf_f2rec32 U_Z   (.in_ieee(32'h00000000), .out_rec(rec_zero));
  hf_f2rec32 U_ONE (.in_ieee(32'h3F800000), .out_rec(rec_one));
  hf_f2rec32 U_LK  (.in_ieee(LEAK_IEEE),    .out_rec(rec_leak));

  // Convert to IEEE just to test sign/zero robustly
  logic [31:0] in_ieee;
  hf_rec2f32 U_R2F (.in_rec(in_rec), .out_ieee(in_ieee));

  wire is_zero = (in_ieee[30:0] == 31'd0);         // +0 or -0 both count as zero
  wire is_pos  = (~in_ieee[31]) & (~is_zero);      // strictly > 0

  // f(x): pass-through or leak*x
  logic [RECW-1:0] leak_mul_out; logic [4:0] leak_mul_exc;
  mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_LEAK (
    .control('0), .a(in_rec), .b(rec_leak),
    .roundingMode(RM_RNE), .out(leak_mul_out), .exceptionFlags(leak_mul_exc)
  );

  always_comb begin
    if (is_pos) begin
      f_rec  = in_rec;
      fp_rec = rec_one;
    end else if (is_zero) begin
      // At exactly 0, pick the leak branch to avoid dead derivative
      f_rec  = rec_zero;
      fp_rec = rec_leak;
    end else begin
      f_rec  = leak_mul_out;
      fp_rec = rec_leak;
    end
  end
endmodule

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

module activation_sigmoid32_synth #(
  parameter int EXP = 8,
  parameter int SIG = 24
)(
  input  logic [EXP+SIG:0] in_rec,
  output logic [EXP+SIG:0] f_rec,
  output logic [EXP+SIG:0] fp_rec
);
  localparam int RECW = EXP+SIG+1;
  localparam [2:0] RM_RNE = 3'd0;

  // constants
  logic [RECW-1:0] rec_one, rec_half, rec_quarter;
  hf_f2rec32 U1 (.in_ieee(32'h3F800000), .out_rec(rec_one));     // 1.0
  hf_f2rec32 UH (.in_ieee(32'h3F000000), .out_rec(rec_half));    // 0.5
  hf_f2rec32 UQ (.in_ieee(32'h3E800000), .out_rec(rec_quarter)); // 0.25

  // x_half = 0.5 * x
  logic [RECW-1:0] x_half;
  mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_HALF (
    .control('0), .a(in_rec), .b(rec_half),
    .roundingMode(RM_RNE), .out(x_half), .exceptionFlags()
  );

  // t = tanh(x/2), t' = tanh'(x/2) (PWL slope)
  logic [RECW-1:0] t_rec, t_fp;
  activation_tanh32_pwl #(.EXP(EXP), .SIG(SIG)) TANH (
    .in_rec(x_half),
    .f_rec(t_rec),
    .fp_rec(t_fp)
  );

  // f = 0.5*(1 + t)
  logic [RECW-1:0] one_plus_t;
  addRecFN #(.expWidth(EXP), .sigWidth(SIG)) ADD (
    .control('0), .subOp(1'b0),
    .a(rec_one), .b(t_rec),
    .roundingMode(RM_RNE), .out(one_plus_t), .exceptionFlags()
  );

  mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_F (
    .control('0), .a(one_plus_t), .b(rec_half),
    .roundingMode(RM_RNE), .out(f_rec), .exceptionFlags()
  );

  // fp = 0.25 * t'   (chain rule: (1/2)*t'(x/2)*(1/2))
  mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_FP (
    .control('0), .a(t_fp), .b(rec_quarter),
    .roundingMode(RM_RNE), .out(fp_rec), .exceptionFlags()
  );

endmodule