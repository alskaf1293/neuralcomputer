// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_hf_f2rec32.h"

void Vtb_pc3_xor_hf_f2rec32___ctor_var_reset(Vtb_pc3_xor_hf_f2rec32* vlSelf);

Vtb_pc3_xor_hf_f2rec32::Vtb_pc3_xor_hf_f2rec32(Vtb_pc3_xor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_pc3_xor_hf_f2rec32___ctor_var_reset(this);
}

void Vtb_pc3_xor_hf_f2rec32::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_pc3_xor_hf_f2rec32::~Vtb_pc3_xor_hf_f2rec32() {
}
