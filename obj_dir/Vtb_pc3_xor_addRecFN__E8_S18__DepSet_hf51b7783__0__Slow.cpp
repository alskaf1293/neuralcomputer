// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_addRecFN__E8_S18.h"

VL_ATTR_COLD void Vtb_pc3_xor_addRecFN__E8_S18___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_addRecFN__E8_S18___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a = ((IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r)
                    ? vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum
                    : 0x15000000ULL);
    vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfA = (
                                                   (~ (IData)(
                                                              (vlSelfRef.a 
                                                               >> 0x1dU))) 
                                                   & (3U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.a 
                                                                                >> 0x17U))), 7U)));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNA = (
                                                   (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.a 
                                                                              >> 0x17U))), 7U)) 
                                                   & (IData)(
                                                             (vlSelfRef.a 
                                                              >> 0x1dU)));
    vlSelfRef.__VdfgRegularize_h34705228_0_19 = (((0U 
                                                   != 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (0x1ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.a 
                                                                             >> 0x17U))), 6U)) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (IData)(vlSelfRef.a)));
}

VL_ATTR_COLD void Vtb_pc3_xor_addRecFN__E8_S18___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_addRecFN__E8_S18___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    CData/*4:0*/ __PVT__addRecFNToRaw__DOT__modNatAlignDist;
    __PVT__addRecFNToRaw__DOT__modNatAlignDist = 0;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__isMaxAlign;
    __PVT__addRecFNToRaw__DOT__isMaxAlign = 0;
    IData/*28:0*/ __PVT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller;
    __PVT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller = 0;
    IData/*26:0*/ __PVT__addRecFNToRaw__DOT__far_alignedSigSmaller;
    __PVT__addRecFNToRaw__DOT__far_alignedSigSmaller = 0;
    IData/*27:0*/ __PVT__addRecFNToRaw__DOT__far_sigSum;
    __PVT__addRecFNToRaw__DOT__far_sigSum = 0;
    CData/*0:0*/ __PVT__addRecFNToRaw__DOT__notSigNaN_invalidExc;
    __PVT__addRecFNToRaw__DOT__notSigNaN_invalidExc = 0;
    IData/*31:0*/ addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3;
    addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 = 0;
    SData/*12:0*/ __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn;
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn = 0;
    SData/*13:0*/ __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn;
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar;
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*26:0*/ __VdfgRegularize_h34705228_0_2;
    __VdfgRegularize_h34705228_0_2 = 0;
    IData/*24:0*/ __VdfgRegularize_h34705228_0_3;
    __VdfgRegularize_h34705228_0_3 = 0;
    IData/*23:0*/ __VdfgRegularize_h34705228_0_18;
    __VdfgRegularize_h34705228_0_18 = 0;
    // Body
    vlSelfRef.b = ((0U >= (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r))
                    ? vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec
                   [vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r]
                    : 0ULL);
    vlSelfRef.__PVT__addRecFNToRaw__DOT__addZeros = 
        ((0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                          (vlSelfRef.a 
                                                           >> 0x17U))), 6U)) 
         & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.b 
                                                             >> 0x17U))), 6U)));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfB = (
                                                   (~ (IData)(
                                                              (vlSelfRef.b 
                                                               >> 0x1dU))) 
                                                   & (3U 
                                                      == 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.b 
                                                                                >> 0x17U))), 7U)));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNB = (
                                                   (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.b 
                                                                              >> 0x17U))), 7U)) 
                                                   & (IData)(
                                                             (vlSelfRef.b 
                                                              >> 0x1dU)));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns = 
        ((1U & (IData)((vlSelfRef.a >> 0x20U))) == 
         (1U & (IData)((vlSelfRef.b >> 0x20U))));
    __VdfgRegularize_h34705228_0_18 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                             (0x1ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.b 
                                                                         >> 0x17U))), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(vlSelfRef.b)));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps 
        = (0x3ffU & ((0x1ffU & (IData)((vlSelfRef.a 
                                        >> 0x17U))) 
                     - (0x1ffU & (IData)((vlSelfRef.b 
                                          >> 0x17U)))));
    vlSelfRef.__PVT__out_isInf = ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfA) 
                                  | (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfB));
    __PVT__addRecFNToRaw__DOT__notSigNaN_invalidExc 
        = ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfA) 
           & ((~ (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns)) 
              & (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isInfB)));
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)))) {
        __VdfgRegularize_h34705228_0_3 = vlSelfRef.__VdfgRegularize_h34705228_0_19;
        __PVT__addRecFNToRaw__DOT__modNatAlignDist 
            = (0x1fU & ((0x1ffU & (IData)((vlSelfRef.b 
                                           >> 0x17U))) 
                        - (0x1ffU & (IData)((vlSelfRef.a 
                                             >> 0x17U)))));
    } else {
        __VdfgRegularize_h34705228_0_3 = __VdfgRegularize_h34705228_0_18;
        __PVT__addRecFNToRaw__DOT__modNatAlignDist 
            = (0x1fU & (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps));
    }
    vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sSigSum 
        = (0x7ffffffU & ((((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps))) 
                            & (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps))
                            ? VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h34705228_0_19, 2U)
                            : 0U) | ((((~ (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)) 
                                       & VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps))))
                                       ? VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h34705228_0_19, 1U)
                                       : 0U) | (VL_GTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                 ? vlSelfRef.__VdfgRegularize_h34705228_0_19
                                                 : 0U))) 
                         - VL_SHIFTL_III(27,27,32, __VdfgRegularize_h34705228_0_18, 1U)));
    __PVT__addRecFNToRaw__DOT__isMaxAlign = ((0U != 
                                              VL_SHIFTRS_III(32,32,32, 
                                                             VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
                                             & ((0xffffffffU 
                                                 != 
                                                 VL_SHIFTRS_III(32,32,32, 
                                                                VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)), 5U)) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)))));
    __PVT__invalidExc = ((IData)((0xe0000000ULL == 
                                  (0xe0400000ULL & vlSelfRef.a))) 
                         | ((IData)((0xe0000000ULL 
                                     == (0xe0400000ULL 
                                         & vlSelfRef.b))) 
                            | (IData)(__PVT__addRecFNToRaw__DOT__notSigNaN_invalidExc)));
    vlSelfRef.__PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNA) 
                                  | ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNB) 
                                     | (IData)(__PVT__addRecFNToRaw__DOT__notSigNaN_invalidExc)));
    __VdfgRegularize_h34705228_0_2 = (0x7ffffffU & 
                                      (VL_GTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,27, vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sSigSum))
                                        ? (- vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sSigSum)
                                        : vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sSigSum));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__closeSubMags 
        = ((~ (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns)) 
           & ((~ (IData)(__PVT__addRecFNToRaw__DOT__isMaxAlign)) 
              & (1U >= (IData)(__PVT__addRecFNToRaw__DOT__modNatAlignDist))));
    addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
        = ((IData)(__PVT__addRecFNToRaw__DOT__isMaxAlign)
            ? 0x1fU : (IData)(__PVT__addRecFNToRaw__DOT__modNatAlignDist));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(vlSelfRef.__PVT__out_isNaN));
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn 
        = ((((((0U != (3U & __VdfgRegularize_h34705228_0_2)) 
               << 0xcU) | ((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                                         >> 2U))) << 0xbU)) 
             | (((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                               >> 4U))) << 0xaU) | 
                ((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                               >> 6U))) << 9U))) | 
            (((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                            >> 8U))) << 8U) | (((0U 
                                                 != 
                                                 (3U 
                                                  & (__VdfgRegularize_h34705228_0_2 
                                                     >> 0xaU))) 
                                                << 7U) 
                                               | ((0U 
                                                   != 
                                                   (3U 
                                                    & (__VdfgRegularize_h34705228_0_2 
                                                       >> 0xcU))) 
                                                  << 6U)))) 
           | ((((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                              >> 0xeU))) << 5U) | (
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (__VdfgRegularize_h34705228_0_2 
                                                         >> 0x10U))) 
                                                    << 4U) 
                                                   | ((0U 
                                                       != 
                                                       (3U 
                                                        & (__VdfgRegularize_h34705228_0_2 
                                                           >> 0x12U))) 
                                                      << 3U))) 
              | (((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                                >> 0x14U))) << 2U) 
                 | (((0U != (3U & (__VdfgRegularize_h34705228_0_2 
                                   >> 0x16U))) << 1U) 
                    | (0U != (3U & (__VdfgRegularize_h34705228_0_2 
                                    >> 0x18U)))))));
    __PVT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
        = (0x1fffffffU & ((0x1fffffe0U & (__VdfgRegularize_h34705228_0_3 
                                          << 5U)) >> 
                          (0x1fU & addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3)));
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn 
        = ((0x2000U | (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)) 
           & ((IData)(1U) + (0x1fffU & (~ (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__reverseIn)))));
    __PVT__addRecFNToRaw__DOT__far_alignedSigSmaller 
        = ((0x7fffffeU & (__PVT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller 
                          >> 2U)) | ((0U != (7U & __PVT__addRecFNToRaw__DOT__far_mainAlignedSigSmaller)) 
                                     | (0U != (((((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (__VdfgRegularize_h34705228_0_3 
                                                        >> 0x16U))) 
                                                   << 6U) 
                                                  | ((0U 
                                                      != 
                                                      (0xfU 
                                                       & (__VdfgRegularize_h34705228_0_3 
                                                          >> 0x12U))) 
                                                     << 5U)) 
                                                 | (((0U 
                                                      != 
                                                      (0xfU 
                                                       & (__VdfgRegularize_h34705228_0_3 
                                                          >> 0xeU))) 
                                                     << 4U) 
                                                    | ((0U 
                                                        != 
                                                        (0xfU 
                                                         & (__VdfgRegularize_h34705228_0_3 
                                                            >> 0xaU))) 
                                                       << 3U))) 
                                                | (((0U 
                                                     != 
                                                     (0xfU 
                                                      & (__VdfgRegularize_h34705228_0_3 
                                                         >> 6U))) 
                                                    << 2U) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (__VdfgRegularize_h34705228_0_3 
                                                            >> 2U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & __VdfgRegularize_h34705228_0_3))))) 
                                               & ((((0x40U 
                                                     & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                       (7U 
                                                                        & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                           >> 2U))) 
                                                        << 5U)) 
                                                    | (0x20U 
                                                       & (VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                             >> 2U))) 
                                                          << 3U))) 
                                                   | ((0x10U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                             >> 2U))) 
                                                          << 1U)) 
                                                      | (8U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                               >> 2U))) 
                                                            >> 1U)))) 
                                                  | ((4U 
                                                      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                        (7U 
                                                                         & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                            >> 2U))) 
                                                         >> 3U)) 
                                                     | ((2U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                               >> 2U))) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 
                                                                                >> 2U))) 
                                                              >> 7U)))))))));
    __PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar 
        = ((((((((((((((2U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                        ? 1U : 0U) | ((4U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                       ? 2U : 0U)) 
                     | ((8U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                         ? 3U : 0U)) | ((0x10U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                         ? 4U : 0U)) 
                   | ((0x20U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                       ? 5U : 0U)) | ((0x40U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                       ? 6U : 0U)) 
                 | ((0x80U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                     ? 7U : 0U)) | ((0x100U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                     ? 8U : 0U)) | 
               ((0x200U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                 ? 9U : 0U)) | ((0x400U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                 ? 0xaU : 0U)) | ((0x800U 
                                                   & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                                   ? 0xbU
                                                   : 0U)) 
            | ((0x1000U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                ? 0xcU : 0U)) | ((0x2000U & (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__oneLeastReverseIn))
                                  ? 0xdU : 0U));
    __PVT__addRecFNToRaw__DOT__far_sigSum = (0xfffffffU 
                                             & (VL_SHIFTL_III(28,28,32, 
                                                              (0xffffffU 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? __VdfgRegularize_h34705228_0_18
                                                                   : vlSelfRef.__VdfgRegularize_h34705228_0_19)), 3U) 
                                                + (
                                                   ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns)
                                                     ? __PVT__addRecFNToRaw__DOT__far_alignedSigSmaller
                                                     : 
                                                    (0x8000000U 
                                                     | (0x7ffffffU 
                                                        & (~ __PVT__addRecFNToRaw__DOT__far_alignedSigSmaller)))) 
                                                   + 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns))))));
    vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sigOut 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,32, ((0x3ffffffU 
                                                  & __VdfgRegularize_h34705228_0_2) 
                                                 << 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))), 1U));
    vlSelfRef.__PVT__out_isZero = ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__addZeros) 
                                   | ((~ (IData)(vlSelfRef.__PVT__out_isInf)) 
                                      & ((~ (0U != 
                                             (3U & 
                                              (vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                               >> 0x19U)))) 
                                         & (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__closeSubMags))));
    __PVT__out_sig = (0x7ffffffU & ((IData)(vlSelfRef.__PVT__out_isNaN)
                                     ? (0x3000000U 
                                        | (0xfffffcU 
                                           & (((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                ? (IData)(vlSelfRef.a)
                                                : ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                    ? (IData)(vlSelfRef.b)
                                                    : 0U)) 
                                              << 2U)))
                                     : ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__closeSubMags)
                                         ? vlSelfRef.__PVT__addRecFNToRaw__DOT__close_sigOut
                                         : (0xfffffffU 
                                            & ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns)
                                                ? (
                                                   VL_SHIFTR_III(28,28,32, __PVT__addRecFNToRaw__DOT__far_sigSum, 1U) 
                                                   | (1U 
                                                      & __PVT__addRecFNToRaw__DOT__far_sigSum))
                                                : __PVT__addRecFNToRaw__DOT__far_sigSum)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (4U & (__PVT__out_sig 
                                                   >> 0x18U))), 1U)) 
           & (3U | (4U & (__PVT__out_sig >> 0x18U))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (4U 
                                                                   & (__PVT__out_sig 
                                                                      >> 0x18U))), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (7U 
                                                & (__PVT__out_sig 
                                                   & (1U 
                                                      | (2U 
                                                         & (__PVT__out_sig 
                                                            >> 0x19U))))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (4U 
                                                      & (__PVT__out_sig 
                                                         >> 0x18U))), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (4U 
                                                                      & (__PVT__out_sig 
                                                                         >> 0x18U)))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (4U 
                                                & (__PVT__out_sig 
                                                   >> 0x18U)))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & ((((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                               | VL_GTS_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__sDiffExps))))
                                                               ? 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.b 
                                                                          >> 0x17U)))
                                                               : 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.a 
                                                                          >> 0x17U)))) 
                                                             - 
                                                             ((IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__closeSubMags)
                                                               ? 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(5,5,32, (IData)(__PVT__addRecFNToRaw__DOT__countLeadingZeros_close__DOT__Bit__BRA__13__KET____DOT__countSoFar), 1U))
                                                               : 
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.__PVT__addRecFNToRaw__DOT__eqSigns))))))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(vlSelfRef.__PVT__out_isInf) | ((
                                                   (~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__out_isInf)) 
                                                      & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                                  & VL_LTES_III(32, 3U, 
                                                                VL_SHIFTRS_III(32,32,32, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}
