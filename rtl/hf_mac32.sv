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