// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR_MULADDRECFN__E8_S18_H_
#define VERILATED_VTB_PC3_XOR_MULADDRECFN__E8_S18_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor_mulAddRecFN__E8_S18 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(control,0,0);
    VL_IN8(op,1,0);
    VL_IN8(roundingMode,2,0);
    VL_OUT8(exceptionFlags,4,0);
    CData/*0:0*/ __PVT__out_isZero;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut;
    CData/*0:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11;
    CData/*0:0*/ __VdfgRegularize_h72b89b20_0_0;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_94;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_96;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_102;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_104;
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp;
    SData/*10:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp;
    IData/*23:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddA;
    IData/*23:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddB;
    IData/*22:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____Vcellinp__propagateNaN____pinNumber5;
    IData/*25:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4;
    IData/*25:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7;
    IData/*23:0*/ __VdfgRegularize_h72b89b20_0_33;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_95;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_97;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_103;
    IData/*21:0*/ __VdfgRegularize_h038a369a_0_105;
    VL_IN64(a,32,0);
    VL_IN64(b,32,0);
    VL_IN64(c,32,0);
    VL_OUT64(out,32,0);
    QData/*51:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2;

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor_mulAddRecFN__E8_S18(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor_mulAddRecFN__E8_S18();
    VL_UNCOPYABLE(Vtb_pc3_xor_mulAddRecFN__E8_S18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
