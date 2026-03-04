// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor___024root.h"

VL_ATTR_COLD void Vtb_pc3_xor___024root___eval_initial__TOP(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__0(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__1(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___eval_initial__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE(Vtb_pc3_xor_activation32__Kz6* vlSelf);

void Vtb_pc3_xor___024root___eval_initial(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pc3_xor___024root___eval_initial__TOP(vlSelf);
    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_pc3_xor_activation32__Kz6___eval_initial__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE));
    Vtb_pc3_xor_activation32__Kz6___eval_initial__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE));
    Vtb_pc3_xor_activation32__Kz6___eval_initial__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE));
    Vtb_pc3_xor_activation32__Kz6___eval_initial__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE));
}

void Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(double r, IData/*31:0*/ &real_to_f32__Vfuncrtn);
void Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(IData/*31:0*/ bits, double &f32_to_real__Vfuncrtn);

VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__0(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 0;
    double __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 0;
    std::string __Vtask_tb_pc3_xor__DOT__csv_open__3__path;
    std::string __Vtask_tb_pc3_xor__DOT__csv_open__3__header;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__6__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__6__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__6__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__6__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__7__Vfuncout;
    __Vfunc_real_to_f32__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__8__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__8__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__8__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__8__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__9__Vfuncout;
    __Vfunc_real_to_f32__9__Vfuncout = 0;
    double __Vtemp_3;
    double __Vtemp_6;
    double __Vtemp_9;
    double __Vtemp_12;
    double __Vtemp_15;
    double __Vtemp_18;
    double __Vtemp_21;
    double __Vtemp_24;
    double __Vtemp_27;
    double __Vtemp_30;
    double __Vtemp_33;
    double __Vtemp_36;
    double __Vtemp_39;
    double __Vtemp_42;
    double __Vtemp_45;
    double __Vtemp_48;
    double __Vtemp_51;
    double __Vtemp_54;
    double __Vtemp_57;
    double __Vtemp_60;
    double __Vtemp_63;
    double __Vtemp_66;
    double __Vtemp_69;
    double __Vtemp_72;
    double __Vtemp_75;
    double __Vtemp_78;
    double __Vtemp_81;
    double __Vtemp_84;
    double __Vtemp_87;
    double __Vtemp_90;
    double __Vtemp_93;
    double __Vtemp_96;
    double __Vtemp_99;
    double __Vtemp_102;
    double __Vtemp_105;
    double __Vtemp_108;
    double __Vtemp_111;
    double __Vtemp_114;
    double __Vtemp_117;
    double __Vtemp_120;
    double __Vtemp_123;
    double __Vtemp_126;
    double __Vtemp_129;
    double __Vtemp_132;
    double __Vtemp_135;
    double __Vtemp_138;
    double __Vtemp_141;
    double __Vtemp_144;
    double __Vtemp_147;
    double __Vtemp_150;
    double __Vtemp_153;
    double __Vtemp_156;
    double __Vtemp_159;
    double __Vtemp_162;
    double __Vtemp_165;
    double __Vtemp_168;
    double __Vtemp_171;
    double __Vtemp_174;
    double __Vtemp_177;
    double __Vtemp_180;
    // Body
    vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__B_gt[0U][0U] = 1.0;
    vlSelfRef.tb_pc3_xor__DOT__B_gt[0U][1U] = -5.99999999999999978e-01;
    vlSelfRef.tb_pc3_xor__DOT__B_gt[1U][0U] = 5.00000000000000000e-01;
    vlSelfRef.tb_pc3_xor__DOT__B_gt[1U][1U] = 9.00000000000000022e-01;
    vlSelfRef.tb_pc3_xor__DOT__A_gt[0U] = 1.19999999999999996e+00;
    vlSelfRef.tb_pc3_xor__DOT__A_gt[1U] = -8.00000000000000044e-01;
    vlSelfRef.tb_pc3_xor__DOT__b1_gt[0U] = 0.0;
    vlSelfRef.tb_pc3_xor__DOT__b1_gt[1U] = 1.0;
    vlSelfRef.tb_pc3_xor__DOT__b2_gt = 0.0;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0U][0U] = -1.0;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0U][1U] = 1.0;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[1U][0U] = -9.68253968253968256e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[1U][1U] = 9.68253968253968256e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-9.68253968253968256e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (9.68253968253968256e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-9.68253968253968256e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (9.68253968253968256e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[1U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[2U][0U] = -9.36507936507936511e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[2U][1U] = 9.36507936507936511e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-9.36507936507936511e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (9.36507936507936511e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-9.36507936507936511e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (9.36507936507936511e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[2U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[3U][0U] = -9.04761904761904767e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[3U][1U] = 9.04761904761904767e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-9.04761904761904767e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (9.04761904761904767e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-9.04761904761904767e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (9.04761904761904767e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[3U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[4U][0U] = -8.73015873015873023e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[4U][1U] = 8.73015873015873023e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-8.73015873015873023e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (8.73015873015873023e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-8.73015873015873023e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (8.73015873015873023e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[4U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[5U][0U] = -8.41269841269841279e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[5U][1U] = 8.41269841269841279e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-8.41269841269841279e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (8.41269841269841279e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-8.41269841269841279e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (8.41269841269841279e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[5U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[6U][0U] = -8.09523809523809534e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[6U][1U] = 8.09523809523809534e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-8.09523809523809534e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (8.09523809523809534e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-8.09523809523809534e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (8.09523809523809534e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[6U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[7U][0U] = -7.77777777777777790e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[7U][1U] = 7.77777777777777790e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-7.77777777777777790e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (7.77777777777777790e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-7.77777777777777790e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (7.77777777777777790e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[7U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[8U][0U] = -7.46031746031746046e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[8U][1U] = 7.46031746031746046e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-7.46031746031746046e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (7.46031746031746046e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-7.46031746031746046e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (7.46031746031746046e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[8U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[9U][0U] = -7.14285714285714302e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[9U][1U] = 7.14285714285714302e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-7.14285714285714302e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (7.14285714285714302e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-7.14285714285714302e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (7.14285714285714302e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[9U] = (0.0 + 
                                             ((vlSelfRef.tb_pc3_xor__DOT__A_gt
                                               [0U] 
                                               * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                              + (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                 [1U] 
                                                 * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xaU][0U] = -6.82539682539682557e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xaU][1U] = 6.82539682539682557e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-6.82539682539682557e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (6.82539682539682557e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-6.82539682539682557e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (6.82539682539682557e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xaU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xbU][0U] = -6.50793650793650813e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xbU][1U] = 6.50793650793650813e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-6.50793650793650813e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (6.50793650793650813e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-6.50793650793650813e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (6.50793650793650813e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xbU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xcU][0U] = -6.19047619047619069e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xcU][1U] = 6.19047619047619069e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-6.19047619047619069e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (6.19047619047619069e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-6.19047619047619069e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (6.19047619047619069e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xcU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xdU][0U] = -5.87301587301587324e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xdU][1U] = 5.87301587301587324e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-5.87301587301587324e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (5.87301587301587324e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-5.87301587301587324e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (5.87301587301587324e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xdU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xeU][0U] = -5.55555555555555580e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xeU][1U] = 5.55555555555555580e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-5.55555555555555580e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (5.55555555555555580e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-5.55555555555555580e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (5.55555555555555580e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xeU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xfU][0U] = -5.23809523809523836e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0xfU][1U] = 5.23809523809523836e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-5.23809523809523836e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (5.23809523809523836e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-5.23809523809523836e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (5.23809523809523836e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0xfU] = (0.0 
                                               + ((
                                                   vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [0U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                  + 
                                                  (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                   [1U] 
                                                   * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x10U][0U] = -4.92063492063492092e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x10U][1U] = 4.92063492063492092e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-4.92063492063492092e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (4.92063492063492092e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-4.92063492063492092e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (4.92063492063492092e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x10U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x11U][0U] = -4.60317460317460347e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x11U][1U] = 4.60317460317460347e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-4.60317460317460347e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (4.60317460317460347e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-4.60317460317460347e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (4.60317460317460347e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x11U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x12U][0U] = -4.28571428571428603e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x12U][1U] = 4.28571428571428603e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-4.28571428571428603e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (4.28571428571428603e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-4.28571428571428603e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (4.28571428571428603e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x12U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x13U][0U] = -3.96825396825396859e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x13U][1U] = 3.96825396825396859e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-3.96825396825396859e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (3.96825396825396859e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-3.96825396825396859e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (3.96825396825396859e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x13U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x14U][0U] = -3.65079365079365115e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x14U][1U] = 3.65079365079365115e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-3.65079365079365115e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (3.65079365079365115e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-3.65079365079365115e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (3.65079365079365115e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x14U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x15U][0U] = -3.33333333333333370e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x15U][1U] = 3.33333333333333370e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-3.33333333333333370e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (3.33333333333333370e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-3.33333333333333370e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (3.33333333333333370e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x15U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x16U][0U] = -3.01587301587301626e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x16U][1U] = 3.01587301587301626e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-3.01587301587301626e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (3.01587301587301626e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-3.01587301587301626e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (3.01587301587301626e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x16U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x17U][0U] = -2.69841269841269882e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x17U][1U] = 2.69841269841269882e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-2.69841269841269882e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (2.69841269841269882e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-2.69841269841269882e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (2.69841269841269882e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x17U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x18U][0U] = -2.38095238095238138e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x18U][1U] = 2.38095238095238138e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-2.38095238095238138e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (2.38095238095238138e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-2.38095238095238138e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (2.38095238095238138e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x18U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x19U][0U] = -2.06349206349206393e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x19U][1U] = 2.06349206349206393e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-2.06349206349206393e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (2.06349206349206393e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-2.06349206349206393e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (2.06349206349206393e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x19U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1aU][0U] = -1.74603174603174649e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1aU][1U] = 1.74603174603174649e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-1.74603174603174649e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (1.74603174603174649e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-1.74603174603174649e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (1.74603174603174649e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1aU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1bU][0U] = -1.42857142857142905e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1bU][1U] = 1.42857142857142905e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-1.42857142857142905e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (1.42857142857142905e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-1.42857142857142905e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (1.42857142857142905e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1bU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1cU][0U] = -1.11111111111111160e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1cU][1U] = 1.11111111111111160e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-1.11111111111111160e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (1.11111111111111160e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-1.11111111111111160e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (1.11111111111111160e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1cU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1dU][0U] = -7.93650793650794162e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1dU][1U] = 7.93650793650794162e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-7.93650793650794162e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (7.93650793650794162e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-7.93650793650794162e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (7.93650793650794162e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1dU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1eU][0U] = -4.76190476190476719e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1eU][1U] = 4.76190476190476719e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-4.76190476190476719e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (4.76190476190476719e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-4.76190476190476719e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (4.76190476190476719e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1eU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1fU][0U] = -1.58730158730159276e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1fU][1U] = 1.58730158730159276e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((-1.58730158730159276e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (1.58730158730159276e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((-1.58730158730159276e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (1.58730158730159276e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x1fU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x20U][0U] = 1.58730158730158166e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x20U][1U] = -1.58730158730158166e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((1.58730158730158166e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-1.58730158730158166e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((1.58730158730158166e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-1.58730158730158166e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x20U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x21U][0U] = 4.76190476190476719e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x21U][1U] = -4.76190476190476719e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((4.76190476190476719e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-4.76190476190476719e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((4.76190476190476719e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-4.76190476190476719e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x21U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x22U][0U] = 7.93650793650793052e-02;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x22U][1U] = -7.93650793650793052e-02;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((7.93650793650793052e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-7.93650793650793052e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((7.93650793650793052e-02 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-7.93650793650793052e-02 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x22U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x23U][0U] = 1.11111111111111160e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x23U][1U] = -1.11111111111111160e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((1.11111111111111160e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-1.11111111111111160e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((1.11111111111111160e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-1.11111111111111160e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x23U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x24U][0U] = 1.42857142857142794e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x24U][1U] = -1.42857142857142794e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((1.42857142857142794e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-1.42857142857142794e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((1.42857142857142794e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-1.42857142857142794e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x24U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x25U][0U] = 1.74603174603174649e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x25U][1U] = -1.74603174603174649e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((1.74603174603174649e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-1.74603174603174649e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((1.74603174603174649e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-1.74603174603174649e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x25U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x26U][0U] = 2.06349206349206282e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x26U][1U] = -2.06349206349206282e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((2.06349206349206282e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-2.06349206349206282e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((2.06349206349206282e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-2.06349206349206282e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x26U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x27U][0U] = 2.38095238095238138e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x27U][1U] = -2.38095238095238138e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((2.38095238095238138e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-2.38095238095238138e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((2.38095238095238138e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-2.38095238095238138e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x27U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x28U][0U] = 2.69841269841269771e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x28U][1U] = -2.69841269841269771e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((2.69841269841269771e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-2.69841269841269771e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((2.69841269841269771e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-2.69841269841269771e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x28U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x29U][0U] = 3.01587301587301626e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x29U][1U] = -3.01587301587301626e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((3.01587301587301626e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-3.01587301587301626e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((3.01587301587301626e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-3.01587301587301626e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x29U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2aU][0U] = 3.33333333333333259e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2aU][1U] = -3.33333333333333259e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((3.33333333333333259e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-3.33333333333333259e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((3.33333333333333259e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-3.33333333333333259e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2aU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2bU][0U] = 3.65079365079365115e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2bU][1U] = -3.65079365079365115e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((3.65079365079365115e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-3.65079365079365115e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((3.65079365079365115e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-3.65079365079365115e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2bU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2cU][0U] = 3.96825396825396748e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2cU][1U] = -3.96825396825396748e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((3.96825396825396748e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-3.96825396825396748e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((3.96825396825396748e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-3.96825396825396748e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2cU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2dU][0U] = 4.28571428571428603e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2dU][1U] = -4.28571428571428603e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((4.28571428571428603e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-4.28571428571428603e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((4.28571428571428603e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-4.28571428571428603e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2dU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2eU][0U] = 4.60317460317460236e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2eU][1U] = -4.60317460317460236e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((4.60317460317460236e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-4.60317460317460236e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((4.60317460317460236e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-4.60317460317460236e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2eU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2fU][0U] = 4.92063492063492092e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2fU][1U] = -4.92063492063492092e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((4.92063492063492092e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-4.92063492063492092e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((4.92063492063492092e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-4.92063492063492092e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x2fU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x30U][0U] = 5.23809523809523725e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x30U][1U] = -5.23809523809523725e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((5.23809523809523725e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-5.23809523809523725e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((5.23809523809523725e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-5.23809523809523725e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x30U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x31U][0U] = 5.55555555555555580e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x31U][1U] = -5.55555555555555580e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((5.55555555555555580e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-5.55555555555555580e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((5.55555555555555580e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-5.55555555555555580e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x31U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x32U][0U] = 5.87301587301587213e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x32U][1U] = -5.87301587301587213e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((5.87301587301587213e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-5.87301587301587213e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((5.87301587301587213e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-5.87301587301587213e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x32U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x33U][0U] = 6.19047619047619069e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x33U][1U] = -6.19047619047619069e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((6.19047619047619069e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-6.19047619047619069e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((6.19047619047619069e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-6.19047619047619069e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x33U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x34U][0U] = 6.50793650793650702e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x34U][1U] = -6.50793650793650702e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((6.50793650793650702e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-6.50793650793650702e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((6.50793650793650702e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-6.50793650793650702e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x34U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x35U][0U] = 6.82539682539682557e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x35U][1U] = -6.82539682539682557e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((6.82539682539682557e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-6.82539682539682557e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((6.82539682539682557e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-6.82539682539682557e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x35U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x36U][0U] = 7.14285714285714191e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x36U][1U] = -7.14285714285714191e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((7.14285714285714191e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-7.14285714285714191e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((7.14285714285714191e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-7.14285714285714191e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x36U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x37U][0U] = 7.46031746031746046e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x37U][1U] = -7.46031746031746046e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((7.46031746031746046e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-7.46031746031746046e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((7.46031746031746046e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-7.46031746031746046e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x37U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x38U][0U] = 7.77777777777777679e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x38U][1U] = -7.77777777777777679e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((7.77777777777777679e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-7.77777777777777679e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((7.77777777777777679e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-7.77777777777777679e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x38U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x39U][0U] = 8.09523809523809534e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x39U][1U] = -8.09523809523809534e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((8.09523809523809534e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-8.09523809523809534e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((8.09523809523809534e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-8.09523809523809534e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x39U] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3aU][0U] = 8.41269841269841168e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3aU][1U] = -8.41269841269841168e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((8.41269841269841168e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-8.41269841269841168e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((8.41269841269841168e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-8.41269841269841168e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3aU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3bU][0U] = 8.73015873015873023e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3bU][1U] = -8.73015873015873023e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((8.73015873015873023e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-8.73015873015873023e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((8.73015873015873023e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-8.73015873015873023e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3bU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3cU][0U] = 9.04761904761904656e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3cU][1U] = -9.04761904761904656e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((9.04761904761904656e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-9.04761904761904656e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((9.04761904761904656e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-9.04761904761904656e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3cU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3dU][0U] = 9.36507936507936511e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3dU][1U] = -9.36507936507936511e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((9.36507936507936511e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-9.36507936507936511e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((9.36507936507936511e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-9.36507936507936511e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3dU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3eU][0U] = 9.68253968253968145e-01;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3eU][1U] = -9.68253968253968145e-01;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((9.68253968253968145e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-9.68253968253968145e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((9.68253968253968145e-01 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-9.68253968253968145e-01 
                             * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3eU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3fU][0U] = 1.0;
    vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3fU][1U] = -1.0;
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0 = 
        tanh((((1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [0U][0U]) + (-1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [0U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [0U]));
    __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1 = 
        tanh((((1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                [1U][0U]) + (-1.0 * vlSelfRef.tb_pc3_xor__DOT__B_gt
                             [1U][1U])) + vlSelfRef.tb_pc3_xor__DOT__b1_gt
              [1U]));
    vlSelfRef.tb_pc3_xor__DOT__y_samp[0x3fU] = (0.0 
                                                + (
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [0U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h0) 
                                                   + 
                                                   (vlSelfRef.tb_pc3_xor__DOT__A_gt
                                                    [1U] 
                                                    * __Vtask_tb_pc3_xor__DOT__build_dataset__2__h1)));
    co_await vlSelfRef.__VtrigSched_h3654ce17__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.rst_n)", 
                                                         "tb/tb_final_xor.sv", 
                                                         313);
    co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.clk)", 
                                                         "tb/tb_final_xor.sv", 
                                                         314);
    co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.clk)", 
                                                         "tb/tb_final_xor.sv", 
                                                         314);
    co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.clk)", 
                                                         "tb/tb_final_xor.sv", 
                                                         314);
    co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.clk)", 
                                                         "tb/tb_final_xor.sv", 
                                                         314);
    co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pc3_xor.clk)", 
                                                         "tb/tb_final_xor.sv", 
                                                         314);
    __Vtask_tb_pc3_xor__DOT__csv_open__3__header = 
        std::string{"epoch,mse"};
    __Vtask_tb_pc3_xor__DOT__csv_open__3__path = std::string{"runs/pc3_xor.csv"};
    vlSelfRef.tb_pc3_xor__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(__Vtask_tb_pc3_xor__DOT__csv_open__3__path)
                                                , std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.tb_pc3_xor__DOT__fd)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_logger.sv:7: Assertion failed in %Ntb_pc3_xor.csv_open: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_pc3_xor__DOT__csv_open__3__path));
        VL_STOP_MT("tb/tb_logger.sv", 7, "", false);
    }
    VL_FWRITEF_NX(vlSelfRef.tb_pc3_xor__DOT__fd,"%@\n",0,
                  -1,&(__Vtask_tb_pc3_xor__DOT__csv_open__3__header));
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0;
    vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc = 0;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc = 0.0;
    __Vfunc_tb_pc3_xor__DOT__f2b__6__r = 0.0;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__6__r, __Vfunc_real_to_f32__7__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__6__Vfuncout = __Vfunc_real_to_f32__7__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__alpha_ieee = __Vfunc_tb_pc3_xor__DOT__f2b__6__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__8__r = 1.00000000000000006e-01;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__8__r, __Vfunc_real_to_f32__9__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__8__Vfuncout = __Vfunc_real_to_f32__9__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__gamma_ieee = __Vfunc_tb_pc3_xor__DOT__f2b__8__Vfuncout;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_3 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                 + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_3;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 1U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[1U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_6 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                 + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 1U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_6;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 2U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[2U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[2U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_9 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                 + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 2U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_9;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 3U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[3U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[3U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_12 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 3U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_12;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 4U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[4U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[4U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_15 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 4U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_15;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 5U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[5U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[5U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_18 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 5U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_18;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 6U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[6U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[6U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_21 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 6U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_21;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 7U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[7U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[7U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_24 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 7U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_24;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 8U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[8U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[8U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_27 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 8U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_27;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 9U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[9U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[9U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_30 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 9U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_30;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xaU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xaU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xaU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_33 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xaU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_33;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xbU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xbU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xbU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_36 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xbU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_36;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xcU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xcU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xcU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_39 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xcU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_39;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xdU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xdU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xdU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_42 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xdU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_42;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xeU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xeU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xeU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_45 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xeU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_45;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0xfU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xfU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0xfU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_48 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0xfU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_48;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x10U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x10U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x10U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_51 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x10U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_51;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x11U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x11U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x11U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_54 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x11U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_54;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x12U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x12U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x12U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_57 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x12U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_57;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x13U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x13U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x13U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_60 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x13U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_60;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x14U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x14U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x14U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_63 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x14U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_63;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x15U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x15U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x15U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_66 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x15U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_66;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x16U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x16U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x16U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_69 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x16U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_69;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x17U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x17U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x17U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_72 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x17U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_72;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x18U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x18U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x18U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_75 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x18U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_75;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x19U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x19U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x19U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_78 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x19U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_78;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1aU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1aU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1aU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_81 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1aU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_81;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1bU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1bU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1bU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_84 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1bU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_84;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1cU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1cU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1cU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_87 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1cU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_87;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1dU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1dU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1dU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_90 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1dU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_90;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1eU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1eU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1eU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_93 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1eU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_93;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x1fU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1fU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x1fU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_96 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x1fU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_96;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x20U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x20U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x20U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_99 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                  + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x20U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_99;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x21U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x21U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x21U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_102 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x21U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_102;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x22U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x22U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x22U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_105 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x22U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_105;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x23U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x23U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x23U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_108 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x23U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_108;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x24U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x24U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x24U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_111 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x24U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_111;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x25U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x25U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x25U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_114 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x25U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_114;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x26U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x26U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x26U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_117 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x26U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_117;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x27U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x27U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x27U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_120 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x27U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_120;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x28U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x28U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x28U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_123 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x28U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_123;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x29U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x29U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x29U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_126 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x29U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_126;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2aU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2aU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2aU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_129 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2aU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_129;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2bU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2bU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2bU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_132 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2bU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_132;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2cU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2cU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2cU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_135 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2cU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_135;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2dU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2dU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2dU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_138 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2dU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_138;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2eU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2eU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2eU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_141 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2eU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_141;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x2fU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2fU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x2fU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_144 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x2fU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_144;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x30U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x30U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x30U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_147 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x30U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_147;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x31U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x31U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x31U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_150 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x31U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_150;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x32U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x32U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x32U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_153 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x32U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_153;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x33U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x33U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x33U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_156 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x33U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_156;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x34U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x34U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x34U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_159 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x34U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_159;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x35U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x35U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x35U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_162 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x35U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_162;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x36U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x36U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x36U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_165 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x36U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_165;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x37U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x37U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x37U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_168 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x37U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_168;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x38U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x38U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x38U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_171 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x38U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_171;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x39U;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x39U][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x39U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_174 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x39U;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_174;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x3aU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3aU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3aU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_177 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x3aU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_177;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x3bU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3bU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3bU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt)) {
        vlSelf->__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0;
        vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard = 0U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             220);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 1U;
        co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pc3_xor.clk)", 
                                                             "tb/tb_final_xor.sv", 
                                                             221);
        vlSelfRef.tb_pc3_xor__DOT__start_tick = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_edge_flag)))) {
            co_await vlSelfRef.__VtrigSched_h6fb080d8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pc3_xor.clk)", 
                                                                 "tb/tb_final_xor.sv", 
                                                                 224);
            vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard 
                = ((IData)(1U) + vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, vlSelfRef.__Vtask_tb_pc3_xor__DOT__do_tick__15__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt 
            = ((IData)(1U) + vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt);
    }
    __Vtemp_180 = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
                   + ([&]() {
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx = 0x3bU;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t = 0;
                vlSelf->__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                    [0U][0U];
                vlSelf->__Vfunc_tb_pc3_xor__DOT__b2f__18__u = 0;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__b;
                Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__u, vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout 
                    = vlSelfRef.__Vfunc_f32_to_real__19__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__b2f__18__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                    = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__pred_bottom__17__Vfuncout;
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t 
                    = vlSelfRef.tb_pc3_xor__DOT__y_samp
                    [(0x3fU & vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__sidx)];
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__p 
                       - vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__t);
                vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout 
                    = (vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d 
                       * vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__d);
            }(), vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_sample__16__Vfuncout));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__acc 
        = __Vtemp_180;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__s = 0x3cU;
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3cU][1U];
    vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1 
        = vlSelfRef.tb_pc3_xor__DOT__x_samp[0x3cU][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__r, vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__12__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__11__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r = vlSelfRef.__Vtask_tb_pc3_xor__DOT__clamp_eval__10__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__r, vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout);
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout 
        = vlSelfRef.__Vfunc_real_to_f32__14__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = vlSelfRef.__Vfunc_tb_pc3_xor__DOT__f2b__13__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3bU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[2U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x37U 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[3U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3eU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[0U] = 0U;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x3dU 
                                               & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[1U] = 0U;
    vlSelfRef.__Vfunc_tb_pc3_xor__DOT__mse_dataset__4__unnamedblk2__DOT__unnamedblk3__DOT__tt = 0U;
}
