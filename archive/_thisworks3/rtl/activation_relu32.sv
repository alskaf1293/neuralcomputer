// Leaky ReLU in recFN space:
//   f(x)  = x        if x >= 0 else leak*x
//   f'(x) = 1        if x >= 0 else leak
module activation_lrelu32 #(
  parameter int EXP = 8,
  parameter int SIG = 24,
  
  parameter logic [31:0] LEAK_IEEE = 32'h3F800000
)(
  input  logic [EXP+SIG:0] in_rec,
  output logic [EXP+SIG:0] f_rec,
  output logic [EXP+SIG:0] fp_rec
);
  localparam int   RECW   = EXP + SIG + 1;
  localparam [2:0] RM_RNE = 3'd0;

  // Constants in recFN
  logic [RECW-1:0] rec_one, rec_leak;
  hf_f2rec32 U_ONE  (.in_ieee(32'h3F800000), .out_rec(rec_one));
  hf_f2rec32 U_LEAK (.in_ieee(LEAK_IEEE),    .out_rec(rec_leak));

  // Negative test: recFN sign bit is MSB
  wire is_neg = in_rec[RECW-1];

  // leak*x
  logic [RECW-1:0] leak_mul_out;
  logic [4:0]      leak_mul_exc;
  mulRecFN #(.expWidth(EXP), .sigWidth(SIG)) MUL_LEAK (
    .control('0),
    .a(in_rec),
    .b(rec_leak),
    .roundingMode(RM_RNE),
    .out(leak_mul_out),
    .exceptionFlags(leak_mul_exc)
  );

  // Piecewise select for value + derivative
  always_comb begin
    if (!is_neg) begin
      f_rec  = in_rec;     // x
      fp_rec = rec_one;    // 1
    end else begin
      f_rec  = leak_mul_out; // leak*x
      fp_rec = rec_leak;     // leak
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
