// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_activation32__Kz6.h"
#include "Vtb_pc3_xor_addRecFN__E8_S18.h"

VL_INLINE_OPT void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_h038a369a_0_2;
    __VdfgRegularize_h038a369a_0_2 = 0;
    // Body
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero 
        = ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
           & ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                         >> 0x17U))), 6U)) 
              & ((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                          >> 0x20U)) | (((~ (VL_GTS_III(10, 0x2aU, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                    >> 0x17U)))) 
                                             | (IData)(
                                                       ((0x15000000ULL 
                                                         == 
                                                         (0xff800000ULL 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18))))) 
                                         & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                    >> 0x20U))) 
                                        | VL_GTS_III(10, 0x2aU, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                 >> 0x17U))))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
        = ((IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero)
            ? (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)
                                        ? ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
                                           | (IData)(
                                                     (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                      >> 0x20U)))
                                        : (((~ (IData)(
                                                       (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                        >> 0x20U))) 
                                            & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB)) 
                                           | ((~ ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB) 
                                                  | (0U 
                                                     == 
                                                     VL_SHIFTR_III(32,32,32, 
                                                                   (0x1ffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                               >> 0x17U))), 6U)))) 
                                              & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                          >> 0x19U))) 
                                                     & VL_GTS_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,27, 
                                                                                (0x7ffffffU 
                                                                                & (- 
                                                                                VL_SHIFTL_III(27,27,32, vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18, 1U))))))) 
                                                 | ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                    & ((~ (IData)(
                                                                  (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                   >> 0x20U))) 
                                                       & VL_GTS_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x2aU) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                                >> 0x17U)))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)
                                                  ? 0x3fU
                                                  : 0x1ffU) 
                                                & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                     ? 0x1bfU
                                                     : 0x1ffU) 
                                                   & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                               | (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x180U
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U))) 
                                              << 0x17U) 
                                             | ((0x400000U 
                                                 & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     << 0x16U) 
                                                    | (0xffc00000U 
                                                       & (((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                           << 0x16U) 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                | ((1U 
                                                    & ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                       | (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                    ? 
                                                   (0x3fffffU 
                                                    & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                    : 0U))))))
            : vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b);
    __VdfgRegularize_h038a369a_0_2 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                      & (0xc00000U > __VdfgRegularize_h038a369a_0_2))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                   & (0xc00000U == __VdfgRegularize_h038a369a_0_2)));
}

VL_INLINE_OPT void Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_h038a369a_0_11;
    __VdfgRegularize_h038a369a_0_11 = 0;
    // Body
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero 
        = ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
           & ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                         >> 0x17U))), 6U)) 
              & ((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                          >> 0x20U)) | (((~ (VL_GTS_III(10, 0x2aU, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                    >> 0x17U)))) 
                                             | (IData)(
                                                       ((0x15000000ULL 
                                                         == 
                                                         (0xff800000ULL 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18))))) 
                                         & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                    >> 0x20U))) 
                                        | VL_GTS_III(10, 0x2aU, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                 >> 0x17U))))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
        = ((IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero)
            ? (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)
                                        ? ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
                                           | (IData)(
                                                     (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                      >> 0x20U)))
                                        : (((~ (IData)(
                                                       (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                        >> 0x20U))) 
                                            & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB)) 
                                           | ((~ ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB) 
                                                  | (0U 
                                                     == 
                                                     VL_SHIFTR_III(32,32,32, 
                                                                   (0x1ffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                               >> 0x17U))), 6U)))) 
                                              & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                          >> 0x19U))) 
                                                     & VL_GTS_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,27, 
                                                                                (0x7ffffffU 
                                                                                & (- 
                                                                                VL_SHIFTL_III(27,27,32, vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18, 1U))))))) 
                                                 | ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                    & ((~ (IData)(
                                                                  (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                   >> 0x20U))) 
                                                       & VL_GTS_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x2aU) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                                >> 0x17U)))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)
                                                  ? 0x3fU
                                                  : 0x1ffU) 
                                                & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                     ? 0x1bfU
                                                     : 0x1ffU) 
                                                   & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                               | (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x180U
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U))) 
                                              << 0x17U) 
                                             | ((0x400000U 
                                                 & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     << 0x16U) 
                                                    | (0xffc00000U 
                                                       & (((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                           << 0x16U) 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                | ((1U 
                                                    & ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                       | (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                    ? 
                                                   (0x3fffffU 
                                                    & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                    : 0U))))))
            : vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b);
    __VdfgRegularize_h038a369a_0_11 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                      & (0xc00000U > __VdfgRegularize_h038a369a_0_11))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                   & (0xc00000U == __VdfgRegularize_h038a369a_0_11)));
}

VL_INLINE_OPT void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_h038a369a_0_20;
    __VdfgRegularize_h038a369a_0_20 = 0;
    // Body
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero 
        = ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
           & ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                         >> 0x17U))), 6U)) 
              & ((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                          >> 0x20U)) | (((~ (VL_GTS_III(10, 0x2aU, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                    >> 0x17U)))) 
                                             | (IData)(
                                                       ((0x15000000ULL 
                                                         == 
                                                         (0xff800000ULL 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18))))) 
                                         & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                    >> 0x20U))) 
                                        | VL_GTS_III(10, 0x2aU, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                 >> 0x17U))))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
        = ((IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero)
            ? (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)
                                        ? ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
                                           | (IData)(
                                                     (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                      >> 0x20U)))
                                        : (((~ (IData)(
                                                       (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                        >> 0x20U))) 
                                            & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB)) 
                                           | ((~ ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB) 
                                                  | (0U 
                                                     == 
                                                     VL_SHIFTR_III(32,32,32, 
                                                                   (0x1ffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                               >> 0x17U))), 6U)))) 
                                              & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                          >> 0x19U))) 
                                                     & VL_GTS_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,27, 
                                                                                (0x7ffffffU 
                                                                                & (- 
                                                                                VL_SHIFTL_III(27,27,32, vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18, 1U))))))) 
                                                 | ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                    & ((~ (IData)(
                                                                  (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                   >> 0x20U))) 
                                                       & VL_GTS_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x2aU) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                                >> 0x17U)))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)
                                                  ? 0x3fU
                                                  : 0x1ffU) 
                                                & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                     ? 0x1bfU
                                                     : 0x1ffU) 
                                                   & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                               | (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x180U
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U))) 
                                              << 0x17U) 
                                             | ((0x400000U 
                                                 & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     << 0x16U) 
                                                    | (0xffc00000U 
                                                       & (((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                           << 0x16U) 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                | ((1U 
                                                    & ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                       | (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                    ? 
                                                   (0x3fffffU 
                                                    & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                    : 0U))))))
            : vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b);
    __VdfgRegularize_h038a369a_0_20 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                      & (0xc00000U > __VdfgRegularize_h038a369a_0_20))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                   & (0xc00000U == __VdfgRegularize_h038a369a_0_20)));
}

VL_INLINE_OPT void Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ __VdfgRegularize_h038a369a_0_29;
    __VdfgRegularize_h038a369a_0_29 = 0;
    // Body
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero 
        = ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
           & ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                         >> 0x17U))), 6U)) 
              & ((IData)((vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                          >> 0x20U)) | (((~ (VL_GTS_III(10, 0x2aU, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                    >> 0x17U)))) 
                                             | (IData)(
                                                       ((0x15000000ULL 
                                                         == 
                                                         (0xff800000ULL 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18))))) 
                                         & (IData)(
                                                   (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                    >> 0x20U))) 
                                        | VL_GTS_III(10, 0x2aU, 
                                                     (0x1ffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                 >> 0x17U))))))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
        = ((IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero)
            ? (((QData)((IData)((1U & ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)
                                        ? ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isNaNB)) 
                                           | (IData)(
                                                     (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                      >> 0x20U)))
                                        : (((~ (IData)(
                                                       (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                        >> 0x20U))) 
                                            & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB)) 
                                           | ((~ ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__isInfB) 
                                                  | (0U 
                                                     == 
                                                     VL_SHIFTR_III(32,32,32, 
                                                                   (0x1ffU 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                               >> 0x17U))), 6U)))) 
                                              & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                          >> 0x19U))) 
                                                     & VL_GTS_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,27, 
                                                                                (0x7ffffffU 
                                                                                & (- 
                                                                                VL_SHIFTL_III(27,27,32, vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__VdfgRegularize_h34705228_0_18, 1U))))))) 
                                                 | ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                    & ((~ (IData)(
                                                                  (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                   >> 0x20U))) 
                                                       & VL_GTS_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x2aU) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b 
                                                                                >> 0x17U)))))))))))))))) 
                << 0x20U) | (QData)((IData)(((((((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)
                                                  ? 0x3fU
                                                  : 0x1ffU) 
                                                & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                     ? 0x1bfU
                                                     : 0x1ffU) 
                                                   & (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                               | (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                    ? 0x180U
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                      ? 0x1c0U
                                                      : 0U))) 
                                              << 0x17U) 
                                             | ((0x400000U 
                                                 & (((IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                     << 0x16U) 
                                                    | (0xffc00000U 
                                                       & (((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                           << 0x16U) 
                                                          & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                | ((1U 
                                                    & ((~ (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__out_isZero)) 
                                                       | (IData)(vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                    ? 
                                                   (0x3fffffU 
                                                    & vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                    : 0U))))))
            : vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__NEG_X->b);
    __VdfgRegularize_h038a369a_0_29 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags 
        = (VL_GTS_III(10, 0x101U, (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                     >> 0x17U)))) 
           | (IData)(((0x80800000ULL == (0xff800000ULL 
                                         & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                      & (0xc00000U > __VdfgRegularize_h038a369a_0_29))));
    vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags 
        = (IData)(((0x80800000ULL == (0xff800000ULL 
                                      & vlSelfRef.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs)) 
                   & (0xc00000U == __VdfgRegularize_h038a369a_0_29)));
}
