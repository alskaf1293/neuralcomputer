// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor___024root.h"

VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_static(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_static\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__clk__0 
        = vlSelfRef.tb_pc3_xor__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__rst_n__0 
        = vlSelfRef.tb_pc3_xor__DOT__rst_n;
}

VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_final(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_final\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__stl(Vtb_pc3_xor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_pc3_xor___024root___eval_phase__stl(Vtb_pc3_xor___024root* vlSelf);

VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_settle(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_settle\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pc3_xor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_final_xor.sv", 32, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_pc3_xor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__stl(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___dump_triggers__stl\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pc3_xor___024root___stl_sequent__TOP__0(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___stl_sequent__TOP__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    CData/*0:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf = 0;
    IData/*23:0*/ __VdfgRegularize_h5a29a087_0_0;
    __VdfgRegularize_h5a29a087_0_0 = 0;
    IData/*23:0*/ __VdfgRegularize_h5a29a087_0_1;
    __VdfgRegularize_h5a29a087_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h80967095_0_0;
    __VdfgRegularize_h80967095_0_0 = 0;
    IData/*23:0*/ __VdfgRegularize_h80967095_0_1;
    __VdfgRegularize_h80967095_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hce6ba32d_0_0;
    __VdfgRegularize_hce6ba32d_0_0 = 0;
    IData/*23:0*/ __VdfgRegularize_hce6ba32d_0_1;
    __VdfgRegularize_hce6ba32d_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_hbeb9bc18_0_0;
    __VdfgRegularize_hbeb9bc18_0_0 = 0;
    IData/*23:0*/ __VdfgRegularize_hbeb9bc18_0_1;
    __VdfgRegularize_hbeb9bc18_0_1 = 0;
    IData/*23:0*/ __VdfgRegularize_h991f6e3f_0_0;
    __VdfgRegularize_h991f6e3f_0_0 = 0;
    IData/*23:0*/ __VdfgRegularize_h991f6e3f_0_1;
    __VdfgRegularize_h991f6e3f_0_1 = 0;
    // Body
    vlSelfRef.tb_pc3_xor__DOT__done_o = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_q_net)) 
                                         & (7U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched)));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__busy_vec = 
        ((((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o) 
           | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o)) 
          << 2U) | ((((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o) 
                      | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o)) 
                     << 1U) | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec)));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_from_down_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hb3ab5945_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
            : 0U);
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
            : 0U);
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)
            : 0U);
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [0U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [0U] 
                                                                           >> 0x17U))), 7U)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [1U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [1U] 
                                                                           >> 0x17U))), 7U)));
    __VdfgRegularize_h5a29a087_0_0 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [0U])));
    __VdfgRegularize_h5a29a087_0_1 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [1U])));
    vlSelfRef.__VdfgRegularize_h4c598ad6_0_0 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i)));
    vlSelfRef.__VdfgRegularize_haa948053_0_0 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i)));
    vlSelfRef.__VdfgRegularize_haa948053_0_1 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i)));
    vlSelfRef.__VdfgRegularize_h0055b36c_0_0 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i)));
    vlSelfRef.__VdfgRegularize_h0055b36c_0_1 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [0U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [0U] 
                                                                           >> 0x17U))), 7U)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [1U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [1U] 
                                                                           >> 0x17U))), 7U)));
    __VdfgRegularize_h80967095_0_0 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [0U])));
    __VdfgRegularize_h80967095_0_1 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [1U])));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                       [0U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [0U] 
                                                                           >> 0x17U))), 7U)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                       [1U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [1U] 
                                                                           >> 0x17U))), 7U)));
    __VdfgRegularize_hce6ba32d_0_0 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                           [0U])));
    __VdfgRegularize_hce6ba32d_0_1 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                           [1U])));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [0U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [0U] 
                                                                           >> 0x17U))), 7U)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                       [1U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [1U] 
                                                                           >> 0x17U))), 7U)));
    __VdfgRegularize_hbeb9bc18_0_0 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [0U])));
    __VdfgRegularize_hbeb9bc18_0_1 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                           [1U])));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                       [0U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [0U] 
                                                                           >> 0x17U))), 7U)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf 
        = ((~ (IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                       [1U] >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                               (0x1ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                           [1U] 
                                                                           >> 0x17U))), 7U)));
    __VdfgRegularize_h991f6e3f_0_0 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                           [0U])));
    __VdfgRegularize_h991f6e3f_0_1 = (((0U != VL_SHIFTR_III(32,32,32, 
                                                            (0x1ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U))), 6U)) 
                                       << 0x17U) | 
                                      (0x7fffffU & (IData)(
                                                           vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                           [1U])));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
            : 0U);
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)
            : 0U);
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int 
        = ((~ ((0U != (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__busy_vec)) 
               | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__cooldown))) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[0U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [0U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [0U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [0U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h5a29a087_0_0, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h5a29a087_0_0)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[1U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [1U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [1U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [1U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h5a29a087_0_1, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h5a29a087_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[0U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [0U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [0U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [0U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h80967095_0_0, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h80967095_0_0)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[1U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [1U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [1U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [1U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h80967095_0_1, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h80967095_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[0U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                     [0U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [0U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [0U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_hce6ba32d_0_0, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_hce6ba32d_0_0)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[1U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                     [1U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [1U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [1U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_hce6ba32d_0_1, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_hce6ba32d_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[0U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [0U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [0U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [0U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_hbeb9bc18_0_0, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_hbeb9bc18_0_0)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[1U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                     [1U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [1U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [1U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_hbeb9bc18_0_1, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_hbeb9bc18_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[0U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                     [0U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [0U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [0U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [0U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [0U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h991f6e3f_0_0, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [0U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__0__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h991f6e3f_0_0)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[1U] 
        = (((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                     [1U] >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                                   & ((((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 0U
                                                         : 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(
                                                                  (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                   [1U] 
                                                                   >> 0x17U)) 
                                                          - (IData)(0x82U)))) 
                                                       | (((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf) 
                                                           | ((3U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             (0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                                [1U] 
                                                                                >> 0x17U))), 7U)) 
                                                              & (IData)(
                                                                        (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                         [1U] 
                                                                         >> 0x1dU))))
                                                           ? 0xffU
                                                           : 0U)) 
                                                      << 0x17U)) 
                                                  | (0x7fffffU 
                                                     & ((0x82U 
                                                         > 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                     [1U] 
                                                                     >> 0x17U))))
                                                         ? 
                                                        (VL_SHIFTR_III(32,32,32, __VdfgRegularize_h991f6e3f_0_1, 1U) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             - (IData)(
                                                                       (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec
                                                                        [1U] 
                                                                        >> 0x17U)))))
                                                         : 
                                                        ((IData)(tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACK_OUT__BRA__1__KET____DOT__u_bof__DOT__u__DOT__isInf)
                                                          ? 0U
                                                          : __VdfgRegularize_h991f6e3f_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[0U][0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[0U][1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[1U][0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[1U][0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[1U][1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[1U][1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[2U][0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[2U][0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[2U][1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[2U][1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_from_down_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [0U][0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_from_down_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [0U][1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [1U][0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [1U][1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [1U][0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global
        [1U][1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_from_down_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_from_down_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l
        [0U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l
        [1U][1U];
}

VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_triggers__stl(Vtb_pc3_xor___024root* vlSelf);
VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_stl(Vtb_pc3_xor___024root* vlSelf);

VL_ATTR_COLD bool Vtb_pc3_xor___024root___eval_phase__stl(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_phase__stl\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_pc3_xor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_pc3_xor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__act(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___dump_triggers__act\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_pc3_xor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_pc3_xor.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_pc3_xor.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__nba(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___dump_triggers__nba\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_pc3_xor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_pc3_xor.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_pc3_xor.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pc3_xor___024root___ctor_var_reset(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_pc3_xor__DOT__fd = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__x_samp[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__y_samp[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__B_gt[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__A_gt[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__b1_gt[__Vi0] = 0;
    }
    vlSelf->tb_pc3_xor__DOT__b2_gt = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_pc3_xor__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9214951381413217ull);
    vlSelf->tb_pc3_xor__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13813633616582619089ull);
    vlSelf->tb_pc3_xor__DOT__start_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11397485745845419731ull);
    vlSelf->tb_pc3_xor__DOT__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6981392626277015574ull);
    vlSelf->tb_pc3_xor__DOT__alpha_ieee = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3218861538695804987ull);
    vlSelf->tb_pc3_xor__DOT__gamma_ieee = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9021887738123958351ull);
    vlSelf->tb_pc3_xor__DOT__x_set_en_all = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15565009386437345588ull);
    VL_SCOPED_RAND_RESET_W(192, vlSelf->tb_pc3_xor__DOT__x_obs_flat_all, __VscopeHash, 9813004655358937865ull);
    vlSelf->tb_pc3_xor__DOT__start_q_tb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16398092181526241374ull);
    vlSelf->tb_pc3_xor__DOT__done_q_tb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16238621726586429839ull);
    vlSelf->tb_pc3_xor__DOT__done_edge_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16118183024274411343ull);
    vlSelf->tb_pc3_xor__DOT__unnamedblk4__DOT__msep = 0;
    vlSelf->tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ep = 0;
    vlSelf->tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tt = 0;
    vlSelf->tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk8__DOT__tt = 0;
    vlSelf->tb_pc3_xor__DOT__uut__DOT__busy_vec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5706745437418377664ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__x_state_global[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10832504825737782493ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->tb_pc3_xor__DOT__uut__DOT__back_nk_global[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13864713392142612237ull);
            }
        }
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__start_tick_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8686388869520553858ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__start_q_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14075067856298726842ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__done_latched = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3738827253812915376ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__done_q_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17298148042949300571ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__tb_start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15424337021941692921ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__start_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13998583648991915781ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__cooldown = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14191927507492182519ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_up_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16342778401107639285ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_from_down_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1169942593982415872ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10703410593648224144ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 193031096055035269ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_state_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5864390317172854517ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15221819117001827303ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_from_down_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12862863038043222210ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12837341954209482395ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_nk_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219724824169335135ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_state_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2599118864896877216ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_up_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15364809446637638614ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_from_down_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17881592211310290731ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8273812320138509530ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_nk_l[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13397931909491795258ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_state_l[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14386377857876467368ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9914731879867012890ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_vec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12899790748486667137ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14220464965860184392ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3281747237013317089ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405610381983656035ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_all_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15218917254231231060ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5760327778414488177ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15139139170612712345ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3396119307357837005ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15069857619418221185ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9848053479032087383ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4030841053382447167ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 18321296580980949720ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15520468545047147190ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12498912086333217786ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10904566602902766559ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6808148837154141747ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13387969682016538991ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13368560925970719010ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6798381144701479281ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10016579077374629768ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7956139477662748849ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13264558439897954457ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14349519283169419509ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1659536314272581028ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 936661972990207621ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hb3ab5945_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2698691870288968805ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307287020699574297ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062842998754883549ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17590093714443987376ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_all_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151647364121485081ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13675057613152190526ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12617909677410015603ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6595066961373424540ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8970634981262252595ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12936821229955802760ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7609001914399421822ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7324340722457295715ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14407648428513211286ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201846200659490873ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3073886956740967780ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7830685285465325178ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113548217663997876ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13765012241319529329ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9752568918310787713ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 585378227823136232ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13763771584883796703ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3862042907362857971ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17374875278047612115ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13828302986240080530ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17026371590625545732ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16862379998509309780ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 820741903360940813ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8221531211961843273ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10317690254102723872ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5276377975176522941ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12534165471900975245ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7533615806610813539ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10197579834690208722ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8603853026609727617ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8345233763232672684ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5579777015434373724ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4401644968786778249ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10482925143426438840ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10043911772353084555ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10725006760501367011ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5280111778657879284ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11966300501742760063ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6151630537219318257ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15371913678787601752ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_in_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6080704295743727787ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12361993736740075857ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15313798525259719508ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2774156364028523925ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6087820192007761417ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3341525324048770861ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4197804024966239677ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11054185390835038962ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11269809045049450703ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5568440223719948365ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_all_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2860136230669601509ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12204297097703653653ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16283096767088181784ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__theta_row_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8115126019859094560ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17840992247885271643ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9477639331155945242ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11061712988530044417ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2904652305030562641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__theta_row_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12530353076324427700ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3360015983184691240ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6552638068900909904ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11623092562689902314ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17022116058049024502ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 14689892655587929376ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11329446285635608656ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15410810411970148519ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 632816843874095216ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3641413271199414858ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12349819040493616023ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9280903614961008027ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 400260520589435522ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11361533503642874340ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15441127761634014476ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3292743340157444274ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12618058764302318076ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16850168865206200136ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11969380230706151788ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8439447025246727706ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14093725182964989468ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6388344774242453001ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6956852877631406847ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2159723611641275573ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7202540646592937281ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2140027666534385360ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 85185892332401712ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15865892256344534806ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6605939394630403927ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11393731069672814800ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2166056320288291250ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7907447534030754493ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_in_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11859567364105714679ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5217823915458588233ull);
    }
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5429111340476540978ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3152540390518618378ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8692523345825924082ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 18242207029885014947ull);
    vlSelf->tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7933080736644116690ull);
    vlSelf->__VdfgRegularize_h75c2a239_0_0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17116020104063247966ull);
    vlSelf->__VdfgRegularize_h75c2a239_0_1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7055753944898214593ull);
    vlSelf->__VdfgRegularize_h75c2a239_0_2 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4058871885993456832ull);
    vlSelf->__VdfgRegularize_h7f5419bd_0_0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5214210332745700641ull);
    vlSelf->__VdfgRegularize_h7f5419bd_0_1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 935987307788590723ull);
    vlSelf->__VdfgRegularize_h4c598ad6_0_0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18235858394563351137ull);
    vlSelf->__VdfgRegularize_haa948053_0_0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2998534413794840049ull);
    vlSelf->__VdfgRegularize_haa948053_0_1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12887508036171838322ull);
    vlSelf->__VdfgRegularize_h0055b36c_0_0 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12835241408670159565ull);
    vlSelf->__VdfgRegularize_h0055b36c_0_1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13263504415299100361ull);
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc = 0;
    vlSelf->__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 = 0;
    vlSelf->__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4745242311659828414ull);
    vlSelf->__Vfunc_tb_pc3_xor__DOT__f2b__11__r = 0;
    vlSelf->__Vfunc_real_to_f32__12__Vfuncout = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 719574256639385071ull);
    vlSelf->__Vfunc_tb_pc3_xor__DOT__f2b__13__r = 0;
    vlSelf->__Vfunc_real_to_f32__14__Vfuncout = 0;
    vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6421193900213735553ull);
    vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
    vlSelf->__Vfunc_f32_to_real__19__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523785670168121037ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12209742478542572106ull);
}
