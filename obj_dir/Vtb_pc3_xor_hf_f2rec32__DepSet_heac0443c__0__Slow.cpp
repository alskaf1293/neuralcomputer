// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_hf_f2rec32.h"

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__0__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [0U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                      [0U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [0U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [0U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                              [0U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [0U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [0U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                               [0U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [0U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [0U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [0U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [0U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [0U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [0U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [0U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                          [0U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___stl_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_THETA_PRESET__BRA__1__KET____DOT__u_p__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*22:0*/ __PVT__u__DOT__countLeadingZeros__DOT__reverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn = 0;
    IData/*23:0*/ __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn;
    __PVT__u__DOT__countLeadingZeros__DOT__oneLeastReverseIn = 0;
    // Body
    __PVT__u__DOT__countLeadingZeros__DOT__reverseIn 
        = (((((0x400000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] << 0x16U)) | ((0x200000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 0x14U)) 
                                               | (0x100000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 0x12U)))) 
             | ((0x80000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [1U] << 0x10U)) | ((0x40000U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    << 0xeU)) 
                                                | (0x20000U 
                                                   & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                      [1U] 
                                                      << 0xcU))))) 
            | (((0x10000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                             [1U] << 0xaU)) | ((0x8000U 
                                                & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                   [1U] 
                                                   << 8U)) 
                                               | (0x4000U 
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     << 6U)))) 
               | ((0x2000U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                              [1U] << 4U)) | ((0x1000U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  << 2U)) 
                                              | (0x800U 
                                                 & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [1U]))))) 
           | ((((0x400U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [1U] >> 2U)) | ((0x200U 
                                            & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                               [1U] 
                                               >> 4U)) 
                                           | (0x100U 
                                              & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                 [1U] 
                                                 >> 6U)))) 
               | ((0x80U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] >> 8U)) | ((0x40U 
                                             & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0xaU)) 
                                            | (0x20U 
                                               & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                  [1U] 
                                                  >> 0xcU))))) 
              | (((0x10U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                            [1U] >> 0xeU)) | ((8U & 
                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                [1U] 
                                                >> 0x10U)) 
                                              | (4U 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x12U)))) 
                 | ((2U & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                           [1U] >> 0x14U)) | (1U & 
                                              (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
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
                                                  & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                     [1U] 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x1e0U 
                                                 | (0x1fU 
                                                    & (~ (IData)(vlSelfRef.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar))))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                    [1U] 
                                                    >> 0x17U))) 
                                               + (0x80U 
                                                  | ((0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee
                                                          [1U] 
                                                          >> 0x17U)))
                                                      ? 2U
                                                      : 1U))));
}
