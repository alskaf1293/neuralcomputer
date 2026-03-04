// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR_ACTIVATION32__KZ6_H_
#define VERILATED_VTB_PC3_XOR_ACTIVATION32__KZ6_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_pc3_xor_addRecFN__E8_S18;
class Vtb_pc3_xor_hf_f2rec32;
class Vtb_pc3_xor_mulAddRecFN__E8_S18;


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor_activation32__Kz6 final : public VerilatedModule {
  public:
    // CELLS
    Vtb_pc3_xor_hf_f2rec32* __PVT__U_ONE;
    Vtb_pc3_xor_hf_f2rec32* __PVT__U_ZERO;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__U0;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UCLIP;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP0;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP1;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP2;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP3;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP4;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP5;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP6;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP7;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__UBP8;
    Vtb_pc3_xor_addRecFN__E8_S18* __PVT__G_TANH__DOT__U_TANH__DOT__NEG_X;
    Vtb_pc3_xor_mulAddRecFN__E8_S18* __PVT__G_TANH__DOT__U_TANH__DOT__FMA;
    Vtb_pc3_xor_addRecFN__E8_S18* __PVT__G_TANH__DOT__U_TANH__DOT__NEG_Y;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__0__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__0__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__1__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__1__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__2__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__2__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__3__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__3__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__4__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__4__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__5__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__5__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__6__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__6__KET____DOT__UB;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__7__KET____DOT__UM;
    Vtb_pc3_xor_hf_f2rec32* __PVT__G_TANH__DOT__U_TANH__DOT__G_MB__BRA__7__KET____DOT__UB;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__lt_zero;
    CData/*2:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__seg;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA;
    VL_IN64(in_rec,32,0);
    VL_OUT64(f_rec,32,0);
    VL_OUT64(fp_rec,32,0);
    QData/*32:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__x_abs;
    VlUnpacked<QData/*32:0*/, 8> __PVT__G_TANH__DOT__U_TANH__DOT__m_rec;
    VlUnpacked<QData/*32:0*/, 8> __PVT__G_TANH__DOT__U_TANH__DOT__b_rec;
    VlUnpacked<CData/*0:0*/, 9> __PVT__G_TANH__DOT__U_TANH__DOT__ge_bp;

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor_activation32__Kz6(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor_activation32__Kz6();
    VL_UNCOPYABLE(Vtb_pc3_xor_activation32__Kz6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
