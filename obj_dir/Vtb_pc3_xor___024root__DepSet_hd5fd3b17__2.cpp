// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor___024root.h"

void Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(double r, IData/*31:0*/ &real_to_f32__Vfuncrtn);
void Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(IData/*31:0*/ bits, double &f32_to_real__Vfuncrtn);

VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__3(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__3\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt;
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__58__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__58__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__58__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__58__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__59__Vfuncout;
    __Vfunc_real_to_f32__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__60__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__60__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__60__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__60__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__61__Vfuncout;
    __Vfunc_real_to_f32__61__Vfuncout = 0;
    double __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = 0;
    double __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__63__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__64__Vfuncout;
    __Vfunc_real_to_f32__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__f2b__65__r;
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = 0;
    IData/*31:0*/ __Vfunc_real_to_f32__66__Vfuncout;
    __Vfunc_real_to_f32__66__Vfuncout = 0;
    IData/*31:0*/ __Vtask_tb_pc3_xor__DOT__do_tick__67__guard;
    __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
    double __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout = 0;
    double __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
    __Vfunc_tb_pc3_xor__DOT__b2f__69__b = 0;
    IData/*31:0*/ __Vfunc_tb_pc3_xor__DOT__b2f__69__u;
    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
    double __Vfunc_f32_to_real__70__Vfuncout;
    __Vfunc_f32_to_real__70__Vfuncout = 0;
    // Body
    __Vfunc_tb_pc3_xor__DOT__f2b__58__r = 0.0;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__58__r, __Vfunc_real_to_f32__59__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__58__Vfuncout = __Vfunc_real_to_f32__59__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__alpha_ieee = __Vfunc_tb_pc3_xor__DOT__f2b__58__Vfuncout;
    __Vfunc_tb_pc3_xor__DOT__f2b__60__r = 1.00000000000000006e-01;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__60__r, __Vfunc_real_to_f32__61__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__60__Vfuncout = __Vfunc_real_to_f32__61__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__gamma_ieee = __Vfunc_tb_pc3_xor__DOT__f2b__60__Vfuncout;
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [0U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=0  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [0U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [0U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [0U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [1U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=1  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [1U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [1U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [1U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [2U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [2U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=2  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [2U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [2U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [2U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [3U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [3U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=3  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [3U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [3U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [3U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [4U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [4U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=4  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [4U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [4U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [4U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [5U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [5U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=5  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [5U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [5U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [5U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [6U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [6U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=6  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [6U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [6U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [6U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [7U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [7U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=7  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [7U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [7U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [7U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [8U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [8U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=8  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [8U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [8U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [8U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [9U][1U];
    __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1 = vlSelfRef.tb_pc3_xor__DOT__x_samp
        [9U][0U];
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x10U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__63__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x1;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__63__r, __Vfunc_real_to_f32__64__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout = __Vfunc_real_to_f32__64__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[4U] = __Vfunc_tb_pc3_xor__DOT__f2b__63__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_set_en_all = (0x20U 
                                               | (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all));
    __Vfunc_tb_pc3_xor__DOT__f2b__65__r = __Vtask_tb_pc3_xor__DOT__clamp_eval__62__x2;
    Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__f2b__65__r, __Vfunc_real_to_f32__66__Vfuncout);
    __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout = __Vfunc_real_to_f32__66__Vfuncout;
    vlSelfRef.tb_pc3_xor__DOT__x_obs_flat_all[5U] = __Vfunc_tb_pc3_xor__DOT__f2b__65__Vfuncout;
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
    tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt = 0U;
    while (VL_GTS_III(32, 0xfaU, tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt)) {
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0;
        __Vtask_tb_pc3_xor__DOT__do_tick__67__guard = 0U;
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
            __Vtask_tb_pc3_xor__DOT__do_tick__67__guard 
                = ((IData)(1U) + __Vtask_tb_pc3_xor__DOT__do_tick__67__guard);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x2000U, __Vtask_tb_pc3_xor__DOT__do_tick__67__guard)))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_final_xor.sv:226: Assertion failed in %Ntb_pc3_xor.do_tick\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("tb/tb_final_xor.sv", 226, "", false);
            }
        }
        tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt 
            = ((IData)(1U) + tb_pc3_xor__DOT__unnamedblk4__DOT__unnamedblk9__DOT__unnamedblk10__DOT__tt);
    }
    VL_WRITEF_NX("[TB] s=9  x1=%0.4f x2=%0.4f  target=%0.4f  pred=%0.4f\n",0,
                 64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [9U][0U],64,vlSelfRef.tb_pc3_xor__DOT__x_samp
                 [9U][1U],64,vlSelfRef.tb_pc3_xor__DOT__y_samp
                 [9U],64,([&]() {
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__b 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
                        [0U][0U];
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u = 0;
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__u 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__b;
                    Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(__Vfunc_tb_pc3_xor__DOT__b2f__69__u, __Vfunc_f32_to_real__70__Vfuncout);
                    __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout 
                        = __Vfunc_f32_to_real__70__Vfuncout;
                    __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout 
                        = __Vfunc_tb_pc3_xor__DOT__b2f__69__Vfuncout;
                }(), __Vfunc_tb_pc3_xor__DOT__pred_bottom__68__Vfuncout));
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_pc3_xor__DOT__fd)))) {
        VL_FCLOSE_I(vlSelfRef.tb_pc3_xor__DOT__fd); vlSelfRef.tb_pc3_xor__DOT__fd = 0U;
    }
    VL_FINISH_MT("tb/tb_final_xor.sv", 356, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__act(Vtb_pc3_xor___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pc3_xor___024root___eval_triggers__act(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_triggers__act\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_pc3_xor__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__rst_n__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__clk__0 
        = vlSelfRef.tb_pc3_xor__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pc3_xor__DOT__rst_n__0 
        = vlSelfRef.tb_pc3_xor__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pc3_xor___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__1(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__1(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor___024root___act_comb__TOP__0(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__2(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__1(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__2(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1(Vtb_pc3_xor_activation32__Kz6* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor___024root___act_comb__TOP__1(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);

void Vtb_pc3_xor___024root___eval_act(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_act\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A));
        Vtb_pc3_xor___024root___act_comb__TOP__0(vlSelf);
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__2((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__2((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor___024root___act_comb__TOP__1(vlSelf);
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W));
    }
}

VL_INLINE_OPT void Vtb_pc3_xor___024root___act_comb__TOP__0(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___act_comb__TOP__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee = 0;
    IData/*31:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee = 0;
    IData/*31:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h75c2a239_0_0 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a)));
    vlSelfRef.__VdfgRegularize_h75c2a239_0_1 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a)));
    vlSelfRef.__VdfgRegularize_h75c2a239_0_2 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee 
        = (((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                     >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                              & ((((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                              >> 0x17U)) 
                                                     - (IData)(0x82U)))) 
                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA) 
                                                      | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isNaNA))
                                                      ? 0xffU
                                                      : 0U)) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & ((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 
                                                   (VL_SHIFTR_III(32,32,32, vlSelfRef.__VdfgRegularize_h75c2a239_0_0, 1U) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(
                                                                  (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                   >> 0x17U)))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA)
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h75c2a239_0_0)))));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee 
        = (((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                     >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                              & ((((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                              >> 0x17U)) 
                                                     - (IData)(0x82U)))) 
                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA) 
                                                      | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isNaNA))
                                                      ? 0xffU
                                                      : 0U)) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & ((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 
                                                   (VL_SHIFTR_III(32,32,32, vlSelfRef.__VdfgRegularize_h75c2a239_0_1, 1U) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(
                                                                  (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                   >> 0x17U)))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA)
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h75c2a239_0_1)))));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee 
        = (((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                     >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                              & ((((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                              >> 0x17U)) 
                                                     - (IData)(0x82U)))) 
                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA) 
                                                      | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isNaNA))
                                                      ? 0xffU
                                                      : 0U)) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & ((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 
                                                   (VL_SHIFTR_III(32,32,32, vlSelfRef.__VdfgRegularize_h75c2a239_0_2, 1U) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(
                                                                  (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                   >> 0x17U)))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA)
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h75c2a239_0_2)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_state_l[0U] 
        = tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_state_l[0U] 
        = tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_state_l[1U] 
        = tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_state_l
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global[2U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_state_l
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global[2U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_state_l
        [1U];
}

VL_INLINE_OPT void Vtb_pc3_xor___024root___act_comb__TOP__1(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___act_comb__TOP__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee = 0;
    IData/*31:0*/ tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee;
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h7f5419bd_0_0 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a)));
    vlSelfRef.__VdfgRegularize_h7f5419bd_0_1 = (((0U 
                                                  != 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                            >> 0x17U))), 6U)) 
                                                 << 0x17U) 
                                                | (0x7fffffU 
                                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a)));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee 
        = (((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                     >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                              & ((((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                              >> 0x17U)) 
                                                     - (IData)(0x82U)))) 
                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA) 
                                                      | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isNaNA))
                                                      ? 0xffU
                                                      : 0U)) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & ((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 
                                                   (VL_SHIFTR_III(32,32,32, vlSelfRef.__VdfgRegularize_h7f5419bd_0_0, 1U) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(
                                                                  (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                   >> 0x17U)))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA)
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h7f5419bd_0_0)))));
    tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee 
        = (((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                     >> 0x20U)) << 0x1fU) | ((0x7f800000U 
                                              & ((((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    ((IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                              >> 0x17U)) 
                                                     - (IData)(0x82U)))) 
                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA) 
                                                      | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isNaNA))
                                                      ? 0xffU
                                                      : 0U)) 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & ((0x82U 
                                                    > 
                                                    (0x1ffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                >> 0x17U))))
                                                    ? 
                                                   (VL_SHIFTR_III(32,32,32, vlSelfRef.__VdfgRegularize_h7f5419bd_0_1, 1U) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        - (IData)(
                                                                  (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.a 
                                                                   >> 0x17U)))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__addRecFNToRaw__DOT__isInfA)
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h7f5419bd_0_1)))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_state_l[0U] 
        = tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__x_i_ieee;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_state_l[1U] 
        = tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__x_i_ieee;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_state_l
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_state_l
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_up_l[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
        [1U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_up_l[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
        [1U][1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l[0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
        [2U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l[1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__x_state_global
        [2U][1U];
}

void Vtb_pc3_xor___024root___nba_sequent__TOP__0(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0(Vtb_pc3_xor_hf_f2rec32* vlSelf);
void Vtb_pc3_xor___024root___nba_sequent__TOP__1(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__1(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf);
void Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__0(Vtb_pc3_xor_activation32__Kz6* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__2(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);
void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf);

void Vtb_pc3_xor___024root___eval_nba(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_nba\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pc3_xor___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ));
        Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b));
        Vtb_pc3_xor_hf_f2rec32___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b));
        Vtb_pc3_xor___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE));
        Vtb_pc3_xor_activation32__Kz6___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_addRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED));
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G));
        Vtb_pc3_xor_hf_f2rec32___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
    }
    if ((0xbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__2((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_X));
        Vtb_pc3_xor___024root___act_comb__TOP__0(vlSelf);
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__2((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_activation32__Kz6___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACK_GATE));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__NEG_Y));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor___024root___act_comb__TOP__1(vlSelf);
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_addRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR__1((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W));
        Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0((&vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W));
    }
}

VL_INLINE_OPT void Vtb_pc3_xor___024root___nba_sequent__TOP__0(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___nba_sequent__TOP__0\n"); );
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
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched = 0;
    CData/*0:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req = 0;
    CData/*0:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched = 0;
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched = 0;
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0;
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched = 0;
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0;
    CData/*2:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0;
    CData/*1:0*/ __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0;
    QData/*32:0*/ __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2;
    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2 = 0;
    // Body
    __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 0U;
    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 0U;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched;
    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           && ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_edge))) 
               && ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched) 
                   | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_vec))));
    if (vlSelfRef.tb_pc3_xor__DOT__rst_n) {
        if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__tb_start_q)) 
             & (IData)(vlSelfRef.tb_pc3_xor__DOT__start_tick))) {
            __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req = 1U;
        }
        if ((((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req) 
              & (~ (0U != (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__busy_vec)))) 
             & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__cooldown)))) {
            __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req = 0U;
        }
        __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched 
            = (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_q_int)) 
                & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))
                ? 0U : ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched) 
                        | ((((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_all_q)) 
                             & (3U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched))) 
                            << 2U) | ((((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_all_q)) 
                                        & (3U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched))) 
                                       << 1U) | ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_all_q)) 
                                                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched))))));
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched 
            = ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_edge)
                ? 0U : ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched) 
                        | (((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o) 
                            << 1U) | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o))));
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched 
            = ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_edge)
                ? 0U : ((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched) 
                        | (((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o) 
                            << 1U) | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o))));
        if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__start_q_tb)) 
             & (IData)(vlSelfRef.tb_pc3_xor__DOT__start_tick))) {
            vlSelfRef.tb_pc3_xor__DOT__done_edge_flag = 0U;
        }
        if (((IData)(vlSelfRef.tb_pc3_xor__DOT__done_o) 
             & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__done_q_tb)))) {
            vlSelfRef.tb_pc3_xor__DOT__done_edge_flag = 1U;
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_vec = 0U;
        if ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st)))) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                        = ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all))
                            ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS.out_rec
                            : (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__VdfgRegularize_h72b89b20_0_0)) 
                                                 | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                        & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                           ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                                       | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                          >> 0x32U)))) 
                                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                                ^ 
                                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                                 >> 2U))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((~ 
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x40U
                                                                    : 0U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__out_isZero) 
                                                                      | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                                & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                               | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x180U
                                                                    : 0U) 
                                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                        << 0x16U) 
                                                                       & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                                | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                    ? 
                                                                   (0x3fffffU 
                                                                    & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                    : 0U)))))));
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec = 0U;
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_vec = 1U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 
                    = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                              ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.a 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                              >> 0x20U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                               >> 0x20U)))
                                                    : 1U)))
                                              : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                 | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                     & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                    | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                       & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                          & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                         | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                   ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                  >> 0x32U)))) 
                                                     & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                        ^ 
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                         >> 2U))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__out_isZero) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))));
                if ((2U >= (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0;
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 6U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            } else {
                if ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_sign)) 
                            << 0x20U) | (QData)((IData)(
                                                        (((((~ 
                                                             (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x40U
                                                                : 0U) 
                                                              | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_isZero) 
                                                                  | VL_GTS_III(32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x180U
                                                                : 0U) 
                                                              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U) 
                                                             | (0xffc00000U 
                                                                & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                    << 0x16U) 
                                                                   & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                            | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                ? 
                                                               (0x3fffffU 
                                                                & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                : 0U))))));
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j));
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 5U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum 
                    = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isNaN)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                >> 0x20U)))
                                                     : 1U))
                                                : (
                                                   (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__eqSigns) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfA)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U))) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                  >> 0x20U))) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isInf) 
                                                           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__addZeros))) 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                             & ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                     >> 0x19U))) 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                            >> 0x20U)) 
                                                                   ^ 
                                                                   VL_GTS_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,27, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                                            | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                              >> 0x20U)))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)
                                                          ? 0x3fU
                                                          : 0x1ffU) 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x1bfU
                                                             : 0x1ffU) 
                                                           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((0x400000U 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                                   << 0x16U) 
                                                                  & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                               | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                            : 0U))))));
                if (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r)));
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 4U;
                }
            } else {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc 
                = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                      & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                          ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                            >> 0x20U)))
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.c 
                                                              >> 0x20U)))
                                                   : 1U)))
                                          : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                              & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                             | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                 & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                   & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                            & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                               ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                              & ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                              >> 0x32U)))) 
                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                    ^ 
                                                    (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                     >> 2U))))))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   ((~ 
                                                     (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x40U
                                                        : 0U) 
                                                      | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__out_isZero) 
                                                          | VL_GTS_III(32, 0x6bU, 
                                                                       VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                    & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x180U
                                                        : 0U) 
                                                      | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      << 0x16U) 
                                                     | (0xffc00000U 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                            << 0x16U) 
                                                           & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                        : 0U))))));
            if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 2U;
            } else {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
            }
        } else {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec = 0U;
            if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q)) 
                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec = 1U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_up_l
                    [0U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 1U;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 1U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__x_up_l
                    [1U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 1U;
            }
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 0U;
        if ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st)))) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                        = ((0x20U & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all))
                            ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS.out_rec
                            : (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__VdfgRegularize_h72b89b20_0_0)) 
                                                 | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                        & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                           ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                                       | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                          >> 0x32U)))) 
                                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                                ^ 
                                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                                 >> 2U))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((~ 
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x40U
                                                                    : 0U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__out_isZero) 
                                                                      | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                                & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                               | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x180U
                                                                    : 0U) 
                                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                        << 0x16U) 
                                                                       & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                                | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                    ? 
                                                                   (0x3fffffU 
                                                                    & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                    : 0U)))))));
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 1U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 
                    = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                              ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.a 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                              >> 0x20U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                               >> 0x20U)))
                                                    : 1U)))
                                              : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                 | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                     & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                    | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                       & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                          & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                         | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                   ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                  >> 0x32U)))) 
                                                     & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                        ^ 
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                         >> 2U))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__out_isZero) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))));
                if ((2U >= (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0;
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 6U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
                }
            } else {
                if ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_sign)) 
                            << 0x20U) | (QData)((IData)(
                                                        (((((~ 
                                                             (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x40U
                                                                : 0U) 
                                                              | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_isZero) 
                                                                  | VL_GTS_III(32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x180U
                                                                : 0U) 
                                                              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U) 
                                                             | (0xffc00000U 
                                                                & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                    << 0x16U) 
                                                                   & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                            | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                ? 
                                                               (0x3fffffU 
                                                                & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                : 0U))))));
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j));
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 5U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum 
                    = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isNaN)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                     ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)
                                                     : 1U))
                                                : (
                                                   (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__eqSigns) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfA)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U))) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                       & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isInf) 
                                                           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__addZeros))) 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                             & ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                     >> 0x19U))) 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                            >> 0x20U)) 
                                                                   ^ 
                                                                   VL_GTS_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,27, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                                            | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)
                                                                   : (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                              >> 0x20U)))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)
                                                          ? 0x3fU
                                                          : 0x1ffU) 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x1bfU
                                                             : 0x1ffU) 
                                                           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((0x400000U 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                                   << 0x16U) 
                                                                  & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                               | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                            : 0U))))));
                if (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 4U;
                } else {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r)));
                }
            } else {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc 
                = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                      & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                          ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                            >> 0x20U)))
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.c 
                                                              >> 0x20U)))
                                                   : 1U)))
                                          : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                              & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                             | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                 & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                   & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                            & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                               ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                              & ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                              >> 0x32U)))) 
                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                    ^ 
                                                    (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                     >> 2U))))))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   ((~ 
                                                     (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x40U
                                                        : 0U) 
                                                      | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__out_isZero) 
                                                          | VL_GTS_III(32, 0x6bU, 
                                                                       VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                    & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x180U
                                                        : 0U) 
                                                      | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      << 0x16U) 
                                                     | (0xffc00000U 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                            << 0x16U) 
                                                           & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                        : 0U))))));
            if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 2U;
            } else {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
            }
        } else {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
            if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q)) 
                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 1U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_up_l
                    [0U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 1U;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 1U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_up_l
                    [1U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 1U;
            }
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 0U;
        if ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st)))) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                        = ((0x10U & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all))
                            ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS.out_rec
                            : (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__VdfgRegularize_h72b89b20_0_0)) 
                                                 | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                        & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                           ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                                       | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                          >> 0x32U)))) 
                                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                                ^ 
                                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                                 >> 2U))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((~ 
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x40U
                                                                    : 0U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__out_isZero) 
                                                                      | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                                & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                               | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x180U
                                                                    : 0U) 
                                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                        << 0x16U) 
                                                                       & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                                | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                    ? 
                                                                   (0x3fffffU 
                                                                    & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                    : 0U)))))));
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 1U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 
                    = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                              ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.a 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                              >> 0x20U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                               >> 0x20U)))
                                                    : 1U)))
                                              : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                 | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                     & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                    | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                       & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                          & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                         | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                   ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                  >> 0x32U)))) 
                                                     & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                        ^ 
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                         >> 2U))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__out_isZero) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))));
                if ((2U >= (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0;
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 6U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            } else {
                if ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_sign)) 
                            << 0x20U) | (QData)((IData)(
                                                        (((((~ 
                                                             (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x40U
                                                                : 0U) 
                                                              | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_isZero) 
                                                                  | VL_GTS_III(32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x180U
                                                                : 0U) 
                                                              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U) 
                                                             | (0xffc00000U 
                                                                & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                    << 0x16U) 
                                                                   & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                            | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                ? 
                                                               (0x3fffffU 
                                                                & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                : 0U))))));
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j));
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 5U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum 
                    = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isNaN)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                     ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)
                                                     : 1U))
                                                : (
                                                   (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__eqSigns) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfA)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U))) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                       & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isInf) 
                                                           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__addZeros))) 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                             & ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                     >> 0x19U))) 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                            >> 0x20U)) 
                                                                   ^ 
                                                                   VL_GTS_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,27, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                                            | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__signB)
                                                                   : (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                              >> 0x20U)))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)
                                                          ? 0x3fU
                                                          : 0x1ffU) 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x1bfU
                                                             : 0x1ffU) 
                                                           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((0x400000U 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                                   << 0x16U) 
                                                                  & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                               | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                            : 0U))))));
                if (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 4U;
                } else {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r)));
                }
            } else {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc 
                = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                      & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                          ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                            >> 0x20U)))
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.c 
                                                              >> 0x20U)))
                                                   : 1U)))
                                          : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                              & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                             | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                 & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                   & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                            & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                               ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                              & ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                              >> 0x32U)))) 
                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                    ^ 
                                                    (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                     >> 2U))))))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   ((~ 
                                                     (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x40U
                                                        : 0U) 
                                                      | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__out_isZero) 
                                                          | VL_GTS_III(32, 0x6bU, 
                                                                       VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                    & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x180U
                                                        : 0U) 
                                                      | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      << 0x16U) 
                                                     | (0xffc00000U 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                            << 0x16U) 
                                                           & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                        : 0U))))));
            if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 2U;
            } else {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
            }
        } else {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
            if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q)) 
                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 1U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_up_l
                    [0U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 1U;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 1U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__x_up_l
                    [1U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 1U;
            }
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 0U;
        if ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st)))) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                        = ((8U & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all))
                            ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__U_XOBS.out_rec
                            : (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__VdfgRegularize_h72b89b20_0_0)) 
                                                 | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                        & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                           ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                                       | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                          >> 0x32U)))) 
                                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                                ^ 
                                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                                 >> 2U))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((~ 
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x40U
                                                                    : 0U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__out_isZero) 
                                                                      | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                                & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                               | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x180U
                                                                    : 0U) 
                                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                        << 0x16U) 
                                                                       & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                                | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                    ? 
                                                                   (0x3fffffU 
                                                                    & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                    : 0U)))))));
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 1U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 
                    = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                              ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.a 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                              >> 0x20U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                               >> 0x20U)))
                                                    : 1U)))
                                              : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                 | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                     & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                    | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                       & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                          & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                         | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                   ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                  >> 0x32U)))) 
                                                     & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                        ^ 
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                         >> 2U))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__out_isZero) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))));
                if ((2U >= (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0;
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 6U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
                }
            } else {
                if ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_sign)) 
                            << 0x20U) | (QData)((IData)(
                                                        (((((~ 
                                                             (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x40U
                                                                : 0U) 
                                                              | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_isZero) 
                                                                  | VL_GTS_III(32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x180U
                                                                : 0U) 
                                                              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U) 
                                                             | (0xffc00000U 
                                                                & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                    << 0x16U) 
                                                                   & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                            | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                ? 
                                                               (0x3fffffU 
                                                                & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                : 0U))))));
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j));
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 5U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum 
                    = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isNaN)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                >> 0x20U)))
                                                     : 1U))
                                                : (
                                                   (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__eqSigns) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfA)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U))) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                  >> 0x20U))) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isInf) 
                                                           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__addZeros))) 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                             & ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                     >> 0x19U))) 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                            >> 0x20U)) 
                                                                   ^ 
                                                                   VL_GTS_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,27, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                                            | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                              >> 0x20U)))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)
                                                          ? 0x3fU
                                                          : 0x1ffU) 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x1bfU
                                                             : 0x1ffU) 
                                                           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((0x400000U 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                                   << 0x16U) 
                                                                  & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                               | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                            : 0U))))));
                if (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r)));
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 4U;
                }
            } else {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st))) {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc 
                = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                      & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                          ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                            >> 0x20U)))
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.c 
                                                              >> 0x20U)))
                                                   : 1U)))
                                          : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                              & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                             | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                 & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                   & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                            & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                               ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                              & ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                              >> 0x32U)))) 
                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                    ^ 
                                                    (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                     >> 2U))))))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   ((~ 
                                                     (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x40U
                                                        : 0U) 
                                                      | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__out_isZero) 
                                                          | VL_GTS_III(32, 0x6bU, 
                                                                       VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                    & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x180U
                                                        : 0U) 
                                                      | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      << 0x16U) 
                                                     | (0xffc00000U 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                            << 0x16U) 
                                                           & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                        : 0U))))));
            if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))) {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 2U;
            } else {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)));
            }
        } else {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
            if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q)) 
                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 1U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l
                    [0U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0 = 1U;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 1U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l
                    [1U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1 = 1U;
            }
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 0U;
        if ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st)))) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                        = ((4U & (IData)(vlSelfRef.tb_pc3_xor__DOT__x_set_en_all))
                            ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_XOBS.out_rec
                            : (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__VdfgRegularize_h72b89b20_0_0)) 
                                                 | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                        & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                           ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                                       | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                          >> 0x32U)))) 
                                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                                ^ 
                                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                                 >> 2U))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((((~ 
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x40U
                                                                    : 0U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__out_isZero) 
                                                                      | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                                & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                               | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                    ? 0x180U
                                                                    : 0U) 
                                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                      ? 0x1c0U
                                                                      : 0U))) 
                                                              << 0x17U) 
                                                             | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                  << 0x16U) 
                                                                 | (0xffc00000U 
                                                                    & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                        << 0x16U) 
                                                                       & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                                | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                    | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                    ? 
                                                                   (0x3fffffU 
                                                                    & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                    : 0U)))))));
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 1U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0 
                    = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                              ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.a 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                              >> 0x20U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                               >> 0x20U)))
                                                    : 1U)))
                                              : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                  & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                 | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                     & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                    | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                       & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                          & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                         | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                                & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                   ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                               | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                                  >> 0x32U)))) 
                                                     & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                        ^ 
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                         >> 2U))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__out_isZero) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))));
                if ((2U >= (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_h07670b01__0;
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 
                        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 6U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            } else {
                if ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_sign)) 
                            << 0x20U) | (QData)((IData)(
                                                        (((((~ 
                                                             (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x40U
                                                                : 0U) 
                                                              | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__out_isZero) 
                                                                  | VL_GTS_III(32, 0x6bU, 
                                                                               VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                            & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                ? 0x180U
                                                                : 0U) 
                                                              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                  ? 0x1c0U
                                                                  : 0U))) 
                                                          << 0x17U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                              << 0x16U) 
                                                             | (0xffc00000U 
                                                                & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                    << 0x16U) 
                                                                   & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                            | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                                ? 
                                                               (0x3fffffU 
                                                                & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BACKJ.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                                : 0U))))));
                    __VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 
                        = (1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j));
                    __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0 = 1U;
                }
                if ((1U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 5U;
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum 
                    = (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isNaN)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNA)
                                                    ? 
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                >> 0x20U)))
                                                     : 1U))
                                                : (
                                                   (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__eqSigns) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfA)) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                               >> 0x20U))) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                  >> 0x20U))) 
                                                      | ((~ 
                                                          ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isInf) 
                                                           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__addZeros))) 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                             & ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                     >> 0x19U))) 
                                                                & ((IData)(
                                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                            >> 0x20U)) 
                                                                   ^ 
                                                                   VL_GTS_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,27, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__close_sSigSum))))) 
                                                            | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                               & (VL_GTS_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,10, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__addRecFNToRaw__DOT__sDiffExps)))
                                                                   ? (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.b 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.a 
                                                                              >> 0x20U)))))))))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)
                                                          ? 0x3fU
                                                          : 0x1ffU) 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                             ? 0x1bfU
                                                             : 0x1ffU) 
                                                           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((0x400000U 
                                                         & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                             << 0x16U) 
                                                            | (0xffc00000U 
                                                               & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                                   << 0x16U) 
                                                                  & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                        | ((1U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__out_isZero)) 
                                                               | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__ADD_BACKSUM.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                            : 0U))))));
                if (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r) {
                    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r)));
                } else {
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                    __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 4U;
                }
            } else {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i 
                    = (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      << 0x17U) 
                                                     | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))));
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st))) {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc 
                = (((QData)((IData)((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                      & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                                          ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                            >> 0x20U)))
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                             >> 0x20U)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.c 
                                                              >> 0x20U)))
                                                   : 1U)))
                                          : (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                              & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                             | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                 & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                                                | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                   & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant) 
                                            & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                               ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))) 
                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                              & ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                              >> 0x32U)))) 
                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd) 
                                                    ^ 
                                                    (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
                                                     >> 2U))))))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   ((~ 
                                                     (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x40U
                                                        : 0U) 
                                                      | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__out_isZero) 
                                                          | VL_GTS_III(32, 0x6bU, 
                                                                       VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                    & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                   | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                        ? 0x180U
                                                        : 0U) 
                                                      | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                          ? 0x1c0U
                                                          : 0U))) 
                                                  << 0x17U) 
                                                 | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                      << 0x16U) 
                                                     | (0xffc00000U 
                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                            << 0x16U) 
                                                           & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                        ? 
                                                       (0x3fffffU 
                                                        & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                        : 0U))))));
            if ((2U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))) {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 2U;
            } else {
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)));
            }
        } else {
            vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
            if (((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q)) 
                 & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int))) {
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 1U;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
                vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l
                    [0U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0 = 1U;
                __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 1U;
                __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 
                    = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__x_up_l
                    [1U];
                __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1 = 1U;
            }
        }
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_q_net 
            = (7U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched));
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_q 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_q 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_q 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req 
            = __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched 
            = __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__tb_start_q 
            = vlSelfRef.tb_pc3_xor__DOT__start_tick;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__cooldown 
            = vlSelfRef.tb_pc3_xor__DOT__done_o;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_all_q 
            = (3U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched));
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_all_q 
            = (3U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched));
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_all_q 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_q_int 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int;
        vlSelfRef.tb_pc3_xor__DOT__start_q_tb = vlSelfRef.tb_pc3_xor__DOT__start_tick;
    } else {
        __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched = 0U;
        vlSelfRef.tb_pc3_xor__DOT__done_edge_flag = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [0U];
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_vec = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 1U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = 0x7b03126fULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [1U];
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 1U;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec
            [0U];
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 1U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i = 0x7b03126fULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec
            [1U];
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 1U;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [0U];
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 1U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = 0x7b03126fULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [1U];
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 1U;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__r = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec
            [0U];
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__done_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1 = 1U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i = 0x7b03126fULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta_preset_rec
            [1U];
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3 = 1U;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__r = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [0U];
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st = 0U;
        __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__done_o = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__mu_acc = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__eps_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_sum = 0x15000000ULL;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1 = 1U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i = 0x7b03126fULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta_preset_rec
            [1U];
        __VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3 = 1U;
        __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2 
            = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____Vlvbound_hfe65c95d__0;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_q_net = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req 
            = __Vdly__tb_pc3_xor__DOT__uut__DOT__start_req;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched 
            = __Vdly__tb_pc3_xor__DOT__uut__DOT__done_latched;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__tb_start_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__cooldown = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_all_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_all_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_all_q = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_q_int = 0U;
        vlSelfRef.tb_pc3_xor__DOT__start_q_tb = 0U;
    }
    vlSelfRef.tb_pc3_xor__DOT__done_q_tb = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
                                            && (IData)(vlSelfRef.tb_pc3_xor__DOT__done_o));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__done_latched;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__done_latched;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__done_latched;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] = 0U;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[0U] = 0x15000000ULL;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[2U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[1U] = 0x15000000ULL;
    }
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[0U] = 0U;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[0U] = 0x15000000ULL;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[2U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[1U] = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[1U] = 0x15000000ULL;
    }
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] = 0U;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[0U] = 0x15000000ULL;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[2U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] = 0U;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[1U] = 0x15000000ULL;
    }
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__st;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j;
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[0U] = 0x15000000ULL;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v1;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[0U] = 0U;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee__v3) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta__v2;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta[2U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_vec_rec[1U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee[1U] = 0U;
    }
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__st;
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j 
        = __Vdly__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j;
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[__VdlyDim0__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[0U] = 0x15000000ULL;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v0;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v1;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v1) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[0U] = 0U;
    }
    if (__VdlySet__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee__v3) {
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[1U] 
            = __VdlyVal__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta__v2;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__theta[2U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_vec_rec[1U] = 0x15000000ULL;
        vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee[1U] = 0U;
    }
    vlSelfRef.tb_pc3_xor__DOT__done_o = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_q_net)) 
                                         & (7U == (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__done_latched)));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hb3ab5945_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)
            : 0U);
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
            : 0U);
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__start_q 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j)
            : 0U);
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__busy_vec = 
        ((((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o) 
           | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o)) 
          << 2U) | ((((IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__0__KET____DOT__u_core__busy_o) 
                      | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT____Vcellout__G_NEURON__BRA__1__KET____DOT__u_core__busy_o)) 
                     << 1U) | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__busy_vec)));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__start_q 
        = ((IData)(vlSelfRef.tb_pc3_xor__DOT__rst_n) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT____VdfgRegularize_h1f4b9e66_0_0 
        = ((2U > (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
            ? (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j)
            : 0U);
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int 
        = ((~ ((0U != (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__busy_vec)) 
               | (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__cooldown))) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_req));
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[1U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_edge 
        = ((~ (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__start_q)) 
           & (IData)(vlSelfRef.tb_pc3_xor__DOT__uut__DOT__start_tick_int));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__back_kn_l[0U][1U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_vec_ieee_i
        [1U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l[0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l[1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_kn_l
        [0U][1U];
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
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[0U][0U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l
        [0U][0U];
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__back_nk_global[0U][1U][0U] 
        = vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__back_nk_l
        [1U][0U];
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

VL_INLINE_OPT void Vtb_pc3_xor___024root___nba_sequent__TOP__1(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___nba_sequent__TOP__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__0__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_XREC__BRA__1__KET____DOT__u_xr.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__x_col_ieee
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_in_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__back_in_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__back_in_ieee_i
                                                  [1U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_in_rec[0U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [0U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [0U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [0U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [0U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                       [0U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                                 [0U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__0__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [0U])))))));
    vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__back_in_rec[1U] 
        = (((QData)((IData)((vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                             [1U] >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(((((3U == (3U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                              >> 7U)))
                                 ? (6U | (0U != (0x7fffffU 
                                                 & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                 [1U])))
                                 : (((0U == (0xffU 
                                             & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                [1U] 
                                                >> 0x17U))) 
                                     & (0U == (0x7fffffU 
                                               & vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                               [1U])))
                                     ? 0U : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                             >> 6U))) 
                               << 0x1dU) | ((0x1f800000U 
                                             & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__adjustedExp) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                       [1U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  VL_SHIFTL_III(23,23,32, 
                                                                (vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                                 [1U] 
                                                                 << (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__G_BACKIN__BRA__1__KET____DOT__u_b.__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar)), 1U)
                                                   : 
                                                  vlSelfRef.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__back_in_ieee_i
                                                  [1U])))))));
}
