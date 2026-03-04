// fp_add32_hf.sv
// IEEE-754 single-precision add using Berkeley HardFloat
module fp_add32_hf (
  input  logic        clk,            // optional (used if you register I/O)
  input  logic        en,             // optional clock-enable
  input  logic [31:0] a_ieee,         // IEEE-754 binary32
  input  logic [31:0] b_ieee,         // IEEE-754 binary32
  input  logic [2:0]  rnd_mode,       // 0=RNE,1=RTZ,2=RDN,3=RUP,4=RMM,6=ROD
  input  logic        sub,            // 0: a+b, 1: a-b   (HardFloat supports subOp)
  output logic [31:0] sum_ieee,       // IEEE-754 binary32
  output logic [4:0]  exc_flags       // {invalid, divByZero, overflow, underflow, inexact}
);

  // Parameters for FP32
  localparam int unsigned EXP = 8;
  localparam int unsigned SIG = 24;              // includes the hidden bit (aka "significand width")
  localparam int unsigned REC = 1 + EXP + SIG;   // recoded width (HardFloat's recFN)

  // Recode IEEE->recFN
  logic [REC-1:0] a_rec, b_rec;
  fNToRecFN #(EXP, SIG) u_a_to_rec (.in(a_ieee), .out(a_rec));
  fNToRecFN #(EXP, SIG) u_b_to_rec (.in(b_ieee), .out(b_rec));

  // Core adder (recFN domain)
  logic [REC-1:0] sum_rec;
  logic [4:0]     flags;

  // NOTE: Some HardFloat trees have 'addRecFN' with a 'subOp' port; others only do add,
  // and subtraction is done by flipping b's sign.
  // If your addRecFN lacks 'subOp', replace this instance with:
  //   addRecFN #(EXP,SIG) u_add (.roundingMode(rnd_mode), .a(a_rec), .b(b_rec_adj), .out(sum_rec), .exceptionFlags(flags));
  // and set b_rec_adj = {~b_rec[REC-1], b_rec[REC-2:0]} when sub==1.
  addRecFN #(EXP, SIG) u_add (
    .control        (1'b0),      // <— tie off
    .subOp          (sub),
    .roundingMode   (rnd_mode),
    .a              (a_rec),
    .b              (b_rec),
    .out            (sum_rec),
    .exceptionFlags (flags)
  );

  // Recode back recFN->IEEE
  recFNToFN #(EXP, SIG) u_rec_to_ieee (.in(sum_rec), .out(sum_ieee));

  // Flags out
  assign exc_flags = flags;

endmodule
