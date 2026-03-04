// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_hf_f2rec32.h"

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                 >> 4U)) 
                                      | (0x100U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                 >> 0xaU)) 
                                       | (0x20U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    vlSelfRef.__VdfgRegularize_h038a369a_0_67 = (7U 
                                                 & ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                         >> 7U)))
                                                     ? 
                                                    (6U 
                                                     | (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee)))
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee)))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__1(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h038a369a_0_118 = (((IData)(vlSelfRef.__VdfgRegularize_h038a369a_0_67) 
                                                   << 0x1dU) 
                                                  | ((0x1f800000U 
                                                      & ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                         << 0x17U)) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                 >> 4U)) 
                                      | (0x100U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                 >> 0xaU)) 
                                       | (0x20U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
    vlSelfRef.__VdfgRegularize_h038a369a_0_68 = (7U 
                                                 & ((3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                         >> 7U)))
                                                     ? 
                                                    (6U 
                                                     | (0U 
                                                        != 
                                                        (0x7fffffU 
                                                         & vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee)))
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee)))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__1(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h038a369a_0_119 = (((IData)(vlSelfRef.__VdfgRegularize_h038a369a_0_68) 
                                                   << 0x1dU) 
                                                  | ((0x1f800000U 
                                                      & ((IData)(vlSelfRef.__PVT__u__DOT__adjustedExp) 
                                                         << 0x17U)) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____Vcellinp__propagateNaN____pinNumber5));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    __PVT__u__DOT__adjustedExp = 0;
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                 >> 4U)) 
                                      | (0x100U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                 >> 0xaU)) 
                                       | (0x20U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    __PVT__u__DOT__adjustedExp = (0x1ffU & (((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                  >> 0x17U)))
                                              ? (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                              : (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                    >> 0x17U))) 
                                            + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                       >> 0x17U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelfRef.out_rec = (((QData)((IData)((vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                           >> 0x1fU))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              >> 7U)))
                                                          ? 
                                                         (6U 
                                                          | (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U])))
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffffffU 
                                                                    & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U])))
                                                           ? 0U
                                                           : 
                                                          ((IData)(__PVT__u__DOT__adjustedExp) 
                                                           >> 6U))) 
                                                        << 0x1dU) 
                                                       | ((0x1f800000U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              << 0x17U)) 
                                                          | (0x7fffffU 
                                                             & ((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                                     >> 0x17U)))
                                                                 ? 
                                                                VL_SHIFTL_III(23,23,32, 
                                                                              (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U] 
                                                                               << (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                                 : 
                                                                vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[0U])))))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    __PVT__u__DOT__adjustedExp = 0;
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                 >> 4U)) 
                                      | (0x100U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                 >> 0xaU)) 
                                       | (0x20U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    __PVT__u__DOT__adjustedExp = (0x1ffU & (((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                  >> 0x17U)))
                                              ? (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                              : (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                    >> 0x17U))) 
                                            + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                       >> 0x17U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelfRef.out_rec = (((QData)((IData)((vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                           >> 0x1fU))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              >> 7U)))
                                                          ? 
                                                         (6U 
                                                          | (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U])))
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffffffU 
                                                                    & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U])))
                                                           ? 0U
                                                           : 
                                                          ((IData)(__PVT__u__DOT__adjustedExp) 
                                                           >> 6U))) 
                                                        << 0x1dU) 
                                                       | ((0x1f800000U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              << 0x17U)) 
                                                          | (0x7fffffU 
                                                             & ((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                                     >> 0x17U)))
                                                                 ? 
                                                                VL_SHIFTL_III(23,23,32, 
                                                                              (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U] 
                                                                               << (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                                 : 
                                                                vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[2U])))))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    __PVT__u__DOT__adjustedExp = 0;
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                 >> 4U)) 
                                      | (0x100U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                 >> 0xaU)) 
                                       | (0x20U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    __PVT__u__DOT__adjustedExp = (0x1ffU & (((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                  >> 0x17U)))
                                              ? (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                              : (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                    >> 0x17U))) 
                                            + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                       >> 0x17U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelfRef.out_rec = (((QData)((IData)((vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                           >> 0x1fU))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              >> 7U)))
                                                          ? 
                                                         (6U 
                                                          | (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U])))
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffffffU 
                                                                    & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U])))
                                                           ? 0U
                                                           : 
                                                          ((IData)(__PVT__u__DOT__adjustedExp) 
                                                           >> 6U))) 
                                                        << 0x1dU) 
                                                       | ((0x1f800000U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              << 0x17U)) 
                                                          | (0x7fffffU 
                                                             & ((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                                     >> 0x17U)))
                                                                 ? 
                                                                VL_SHIFTL_III(23,23,32, 
                                                                              (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U] 
                                                                               << (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                                 : 
                                                                vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[3U])))))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    __PVT__u__DOT__adjustedExp = 0;
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                 >> 4U)) 
                                      | (0x100U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                 >> 0xaU)) 
                                       | (0x20U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    __PVT__u__DOT__adjustedExp = (0x1ffU & (((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                  >> 0x17U)))
                                              ? (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                              : (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                    >> 0x17U))) 
                                            + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                       >> 0x17U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelfRef.out_rec = (((QData)((IData)((vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                           >> 0x1fU))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              >> 7U)))
                                                          ? 
                                                         (6U 
                                                          | (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U])))
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffffffU 
                                                                    & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U])))
                                                           ? 0U
                                                           : 
                                                          ((IData)(__PVT__u__DOT__adjustedExp) 
                                                           >> 6U))) 
                                                        << 0x1dU) 
                                                       | ((0x1f800000U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              << 0x17U)) 
                                                          | (0x7fffffU 
                                                             & ((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                                     >> 0x17U)))
                                                                 ? 
                                                                VL_SHIFTL_III(23,23,32, 
                                                                              (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U] 
                                                                               << (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                                 : 
                                                                vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[4U])))))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __PVT__u__DOT__adjustedExp;
    __PVT__u__DOT__adjustedExp = 0;
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar;
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                            << 0x16U)) | ((0x200000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                              << 0x14U)) 
                                          | (0x100000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                             << 0x10U)) | ((0x40000U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                               << 0xeU)) 
                                           | (0x20000U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                 << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                             << 0xaU)) | ((0x8000U 
                                           & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                              << 8U)) 
                                          | (0x4000U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                              << 4U)) | ((0x1000U & 
                                          (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                           << 2U)) 
                                         | (0x800U 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                           >> 2U)) | ((0x200U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                 >> 4U)) 
                                      | (0x100U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                   >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                            >> 8U)) | ((0x40U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                 >> 0xaU)) 
                                       | (0x20U & (
                                                   vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                   >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                            >> 0xeU)) | ((8U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                >> 0x10U)) 
                                         | (4U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                  >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                           >> 0x14U)) | (1U & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    __PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    __PVT__u__DOT__adjustedExp = (0x1ffU & (((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                  >> 0x17U)))
                                              ? (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                              : (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                    >> 0x17U))) 
                                            + (0x80U 
                                               | ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                       >> 0x17U)))
                                                   ? 2U
                                                   : 1U))));
    vlSelfRef.out_rec = (((QData)((IData)((vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                           >> 0x1fU))) 
                          << 0x20U) | (QData)((IData)(
                                                      ((((3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              >> 7U)))
                                                          ? 
                                                         (6U 
                                                          | (0U 
                                                             != 
                                                             (0x7fffffU 
                                                              & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U])))
                                                          : 
                                                         ((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (0x7fffffffU 
                                                                    & vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U])))
                                                           ? 0U
                                                           : 
                                                          ((IData)(__PVT__u__DOT__adjustedExp) 
                                                           >> 6U))) 
                                                        << 0x1dU) 
                                                       | ((0x1f800000U 
                                                           & ((IData)(__PVT__u__DOT__adjustedExp) 
                                                              << 0x17U)) 
                                                          | (0x7fffffU 
                                                             & ((0U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                                     >> 0x17U)))
                                                                 ? 
                                                                VL_SHIFTL_III(23,23,32, 
                                                                              (vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U] 
                                                                               << (IData)(__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                                 : 
                                                                vlSymsp->TOP.tb_pc3_xor__DOT__x_obs_flat_all[5U])))))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [1U] 
                                               >> 0x16U))))));
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn 
        = ((0x800000U | __PVT__u__DOT__countLeadingZeros__DOT__reverseIn) 
           & ((IData)(1U) + (0x7fffffU & (~ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn))));
    vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar 
        = ((((((((((((((((((((((((2U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                  ? 1U : 0U) | ((4U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 2U
                                                 : 0U)) 
                               | ((8U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                   ? 3U : 0U)) | ((0x10U 
                                                   & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                   ? 4U
                                                   : 0U)) 
                             | ((0x20U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                 ? 5U : 0U)) | ((0x40U 
                                                 & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                                 ? 6U
                                                 : 0U)) 
                           | ((0x80U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                               ? 7U : 0U)) | ((0x100U 
                                               & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                               ? 8U
                                               : 0U)) 
                         | ((0x200U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                             ? 9U : 0U)) | ((0x400U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xaU
                                             : 0U)) 
                       | ((0x800U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                           ? 0xbU : 0U)) | ((0x1000U 
                                             & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                             ? 0xcU
                                             : 0U)) 
                     | ((0x2000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                         ? 0xdU : 0U)) | ((0x4000U 
                                           & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                           ? 0xeU : 0U)) 
                   | ((0x8000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                       ? 0xfU : 0U)) | ((0x10000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                         ? 0x10U : 0U)) 
                 | ((0x20000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                     ? 0x11U : 0U)) | ((0x40000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                        ? 0x12U : 0U)) 
               | ((0x80000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                   ? 0x13U : 0U)) | ((0x100000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                      ? 0x14U : 0U)) 
             | ((0x200000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                 ? 0x15U : 0U)) | ((0x400000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
                                    ? 0x16U : 0U)) 
           | ((0x800000U & __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn)
               ? 0x17U : 0U));
    vlSelfRef.__PVT__u__DOT__adjustedExp = (0x1ffU 
                                            & (((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}
