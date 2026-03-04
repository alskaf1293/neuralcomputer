// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR_MULRECFN__E8_S18_H_
#define VERILATED_VTB_PC3_XOR_MULRECFN__E8_S18_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor_mulRecFN__E8_S18 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(control,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    CData/*0:0*/ __PVT__out_isNaN;
    CData/*0:0*/ __PVT__out_isZero;
    CData/*0:0*/ __PVT__out_sign;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__signA;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isSigNaNA;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_36;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_38;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_43;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_45;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_49;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_51;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_55;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_57;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_61;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_63;
    SData/*8:0*/ __PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp;
    SData/*8:0*/ __PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp;
    SData/*10:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp;
    IData/*22:0*/ mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7;
    IData/*22:0*/ mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4;
    IData/*25:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7;
    IData/*23:0*/ __VdfgRegularize_h73e0a55c_0_1;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_37;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_39;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_44;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_46;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_50;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_52;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_56;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_58;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_62;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_64;
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_OUT64(out,32,0);

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor_mulRecFN__E8_S18(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor_mulRecFN__E8_S18();
    VL_UNCOPYABLE(Vtb_pc3_xor_mulRecFN__E8_S18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
