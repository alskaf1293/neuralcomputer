// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__0(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pc3_xor__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_final_xor.sv", 
                                             76);
        vlSelfRef.tb_pc3_xor__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_pc3_xor__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__1(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pc3_xor__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/tb_final_xor.sv", 
                                         80);
    vlSelfRef.tb_pc3_xor__DOT__rst_n = 1U;
}

VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__0(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__1(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__2(Vtb_pc3_xor___024root* vlSelf);
VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__3(Vtb_pc3_xor___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__0(vlSelf);
    co_await Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__1(vlSelf);
    co_await Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__2(vlSelf);
    co_await Vtb_pc3_xor___024root___eval_initial__TOP__Vtiming__2__3(vlSelf);
}

void Vtb_pc3_xor___024root___timing_commit(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___timing_commit\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3654ce17__0.commit(
                                                   "@(posedge tb_pc3_xor.rst_n)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6fb080d8__0.commit(
                                                   "@(posedge tb_pc3_xor.clk)");
    }
}

void Vtb_pc3_xor___024root___timing_resume(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___timing_resume\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3654ce17__0.resume(
                                                   "@(posedge tb_pc3_xor.rst_n)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6fb080d8__0.resume(
                                                   "@(posedge tb_pc3_xor.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pc3_xor___024root___eval_triggers__act(Vtb_pc3_xor___024root* vlSelf);
void Vtb_pc3_xor___024root___eval_act(Vtb_pc3_xor___024root* vlSelf);

bool Vtb_pc3_xor___024root___eval_phase__act(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_phase__act\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pc3_xor___024root___eval_triggers__act(vlSelf);
    Vtb_pc3_xor___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_pc3_xor___024root___timing_resume(vlSelf);
        Vtb_pc3_xor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_pc3_xor___024root___eval_nba(Vtb_pc3_xor___024root* vlSelf);

bool Vtb_pc3_xor___024root___eval_phase__nba(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_phase__nba\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_pc3_xor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__nba(Vtb_pc3_xor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pc3_xor___024root___dump_triggers__act(Vtb_pc3_xor___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_pc3_xor___024root___eval(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pc3_xor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_final_xor.sv", 32, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_pc3_xor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_final_xor.sv", 32, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_pc3_xor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_pc3_xor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_pc3_xor___024root___eval_debug_assertions(Vtb_pc3_xor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pc3_xor___024root___eval_debug_assertions\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
