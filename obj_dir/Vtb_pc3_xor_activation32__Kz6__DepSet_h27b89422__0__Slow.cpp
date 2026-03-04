// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_activation32__Kz6.h"

VL_ATTR_COLD void Vtb_pc3_xor_activation32__Kz6___ctor_var_reset(Vtb_pc3_xor_activation32__Kz6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_pc3_xor_activation32__Kz6___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->in_rec = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6200147250690128704ull);
    vlSelf->f_rec = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12713393264116088177ull);
    vlSelf->fp_rec = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9430787652838035443ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__m_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10027910723993102222ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__b_rec[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13986461091300166494ull);
    }
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12143497776151869418ull);
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__x_abs = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15392056398077598334ull);
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__seg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18115913650290054812ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__ge_bp[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15847645483201725174ull);
    }
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2993951694999607647ull);
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 48472618048958782ull);
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10123045036308649700ull);
    vlSelf->__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15310820261136536796ull);
}
