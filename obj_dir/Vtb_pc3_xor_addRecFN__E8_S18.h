// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR_ADDRECFN__E8_S18_H_
#define VERILATED_VTB_PC3_XOR_ADDRECFN__E8_S18_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor_addRecFN__E8_S18 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(control,0,0);
    VL_IN8(subOp,0,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    CData/*0:0*/ __PVT__out_isNaN;
    CData/*0:0*/ __PVT__out_isInf;
    CData/*0:0*/ __PVT__out_isZero;
    CData/*0:0*/ __PVT__out_sign;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isNaNA;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isInfA;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isNaNB;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isInfB;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__signB;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isSigNaNB;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__eqSigns;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__closeSubMags;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__addZeros;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_69;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_71;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_73;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_75;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_77;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_79;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_81;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_83;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_85;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_87;
    SData/*9:0*/ __PVT__addRecFNToRaw__DOT__sDiffExps;
    SData/*8:0*/ __PVT__addRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp;
    SData/*10:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp;
    IData/*26:0*/ __PVT__addRecFNToRaw__DOT__close_sSigSum;
    IData/*26:0*/ __PVT__addRecFNToRaw__DOT__close_sigOut;
    IData/*22:0*/ addRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber8;
    IData/*31:0*/ addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3;
    IData/*25:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6;
    IData/*23:0*/ __VdfgRegularize_h34705228_0_18;
    IData/*23:0*/ __VdfgRegularize_h34705228_0_19;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_41;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_42;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_47;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_48;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_53;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_54;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_59;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_60;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_65;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_66;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_70;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_72;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_74;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_76;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_78;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_80;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_82;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_84;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_86;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_88;
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_OUT64(out,32,0);

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor_addRecFN__E8_S18(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor_addRecFN__E8_S18();
    VL_UNCOPYABLE(Vtb_pc3_xor_addRecFN__E8_S18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
