// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_activation32__Kz6.h"
#include "Vtb_pc3_xor_mulAddRecFN__E8_S18.h"

VL_INLINE_OPT void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__ordered_eq = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_ltMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_ltMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_eqMags;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_eqMags = 0;
    CData/*0:0*/ __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__ordered_eq;
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__ordered_eq = 0;
    // Body
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                                      >> 0x17U))), 7U)));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                      >> 0x1dU)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0xfeU, (0x1ffU & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                    >> 0x17U)))) 
           | (IData)(((0x7f000000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0x800000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0xffU, (0x1ffU & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                    >> 0x17U)))) 
           | (IData)(((0x7f800000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0x800000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0xffU, (0x1ffU & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                    >> 0x17U)))) 
           | (IData)(((0x7f800000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0xc00000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x100U, (0x1ffU & (IData)(
                                                    (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                     >> 0x17U)))) 
           | (IData)(((0x80000000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0x800000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x100U, (0x1ffU & (IData)(
                                                    (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                     >> 0x17U)))) 
           | (IData)(((0x80000000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0xa00000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x100U, (0x1ffU & (IData)(
                                                    (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                     >> 0x17U)))) 
           | (IData)(((0x80000000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0xc00000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0x800000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                      & (0xc00000U > vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB))));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x15000000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x7f000000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0x800000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x7f800000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0x800000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x7f800000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0xc00000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x80000000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0x800000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x80000000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0xa00000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x80000000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0xc00000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0x800000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b)) 
                   & (0xc00000U == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->__PVT__mulAddRecFNToRaw__DOT__mulAddB)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__ordered_eq 
        = ((0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                             >> 0x17U))), 6U)) 
           | ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                          >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__common_eqMags)));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_eqMags));
    __PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__ordered_eq 
        = ((~ (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                       >> 0x20U))) & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_eqMags));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[0U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((0U != VL_SHIFTR_III(32,32,32, 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                               >> 0x17U))), 6U)) 
                              & ((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                          >> 0x20U)) 
                                 | (((~ (VL_GTS_III(10, 0x2aU, 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                                >> 0x17U)))) 
                                         | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__common_eqMags))) 
                                     & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                >> 0x20U))) 
                                    | VL_GTS_III(10, 0x2aU, 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                                             >> 0x17U))))))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[1U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__1__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[2U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__2__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[3U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__3__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[4U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__4__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[5U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__5__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[6U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__6__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[7U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__7__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[8U] 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                 & (((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                     & (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__ordered_eq)) 
                    | ((~ (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)) 
                       & (~ (((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                       >> 0x20U)) | 
                              (((~ ((IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_ltMags) 
                                    | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_eqMags))) 
                                & (IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__FMA->b 
                                           >> 0x20U))) 
                               | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__common_ltMags))) 
                             | (IData)(__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__8__KET____DOT__C__DOT__ordered_eq)))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 0U;
    if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
        [7U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 7U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [6U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 6U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [5U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 5U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [4U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 4U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [3U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 3U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [2U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 2U;
    } else if (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp
               [1U]) {
        vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__seg = 1U;
    }
}
