// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR_HF_F2REC32_H_
#define VERILATED_VTB_PC3_XOR_HF_F2REC32_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor_hf_f2rec32 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    CData/*2:0*/ __VdfgRegularize_h038a369a_0_67;
    CData/*2:0*/ __VdfgRegularize_h038a369a_0_68;
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    VL_IN(in_ieee,31,0);
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_118;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_119;
    VL_OUT64(out_rec,32,0);

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor_hf_f2rec32(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor_hf_f2rec32();
    VL_UNCOPYABLE(Vtb_pc3_xor_hf_f2rec32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
