// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor___024root.h"

// Parameter definitions for Vtb_pc3_xor___024root
constexpr VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 1> Vtb_pc3_xor___024root::tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON;
constexpr VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 2> Vtb_pc3_xor___024root::tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON;
constexpr VlUnpacked<VlUnpacked<IData/*31:0*/, 256>, 256> Vtb_pc3_xor___024root::tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__THETA_PRESET_IEEE_PER_NEURON;


void Vtb_pc3_xor___024root___ctor_var_reset(Vtb_pc3_xor___024root* vlSelf);

Vtb_pc3_xor___024root::Vtb_pc3_xor___024root(Vtb_pc3_xor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_pc3_xor___024root___ctor_var_reset(this);
}

void Vtb_pc3_xor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_pc3_xor___024root::~Vtb_pc3_xor___024root() {
}
