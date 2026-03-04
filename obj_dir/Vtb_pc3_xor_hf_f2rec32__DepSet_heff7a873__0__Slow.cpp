// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_hf_f2rec32.h"

VL_ATTR_COLD void Vtb_pc3_xor_hf_f2rec32___ctor_var_reset(Vtb_pc3_xor_hf_f2rec32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_hf_f2rec32___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->in_ieee = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17841334749283553334ull);
    vlSelf->out_rec = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13194246566308088029ull);
    vlSelf->__PVT__u__DOT__adjustedExp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12457043728193083894ull);
    vlSelf->__PVT__u__DOT__countLeadingZeros__DOT__Bit__BRA__23__KET____DOT__countSoFar = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8269456261605296303ull);
    vlSelf->__VdfgRegularize_h038a369a_0_67 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10146940629371200795ull);
    vlSelf->__VdfgRegularize_h038a369a_0_68 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5959113525407383769ull);
    vlSelf->__VdfgRegularize_h038a369a_0_118 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14842933062420889778ull);
    vlSelf->__VdfgRegularize_h038a369a_0_119 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1604334168943306655ull);
}
