// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_mulRecFN__E8_S18.h"

VL_ATTR_COLD void Vtb_pc3_xor_mulRecFN__E8_S18___ctor_var_reset(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_pc3_xor_mulRecFN__E8_S18___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->control = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14074454917777209462ull);
    vlSelf->a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16900879642891266615ull);
    vlSelf->roundingMode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13564324170338824140ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7519490245117619040ull);
    vlSelf->exceptionFlags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8640290070951437667ull);
    vlSelf->__PVT__out_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4866446299067475883ull);
    vlSelf->__PVT__out_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9655190739995085201ull);
    vlSelf->__PVT__out_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861844571875434173ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__isNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182638857982081320ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9536068728763962839ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__signA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3900801269831674143ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__isSigNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7247927915359185267ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__isNaNB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8902845929319535900ull);
    vlSelf->mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16023203453185929713ull);
    vlSelf->mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15299395321828829465ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3259729052956565728ull);
    vlSelf->__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9287808057021269488ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7581014294557111230ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15480038502639697093ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17427968280904396121ull);
    vlSelf->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3347947765917707993ull);
    vlSelf->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17679664660126158341ull);
    vlSelf->__VdfgRegularize_h73e0a55c_0_1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14499121161120126565ull);
    vlSelf->__VdfgRegularize_h038a369a_0_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17008050305147440010ull);
    vlSelf->__VdfgRegularize_h038a369a_0_37 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16609822292577395546ull);
    vlSelf->__VdfgRegularize_h038a369a_0_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6050347097939603633ull);
    vlSelf->__VdfgRegularize_h038a369a_0_39 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13822196187999453337ull);
    vlSelf->__VdfgRegularize_h038a369a_0_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8406449133308690864ull);
    vlSelf->__VdfgRegularize_h038a369a_0_44 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3663861032610873072ull);
    vlSelf->__VdfgRegularize_h038a369a_0_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 618277514806205454ull);
    vlSelf->__VdfgRegularize_h038a369a_0_46 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12295145485271954087ull);
    vlSelf->__VdfgRegularize_h038a369a_0_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 424387871371338088ull);
    vlSelf->__VdfgRegularize_h038a369a_0_50 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 101742711708101516ull);
    vlSelf->__VdfgRegularize_h038a369a_0_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13911139793285550880ull);
    vlSelf->__VdfgRegularize_h038a369a_0_52 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10970797384046856226ull);
    vlSelf->__VdfgRegularize_h038a369a_0_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14859493736009853899ull);
    vlSelf->__VdfgRegularize_h038a369a_0_56 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17075048627006512615ull);
    vlSelf->__VdfgRegularize_h038a369a_0_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7071322117507391404ull);
    vlSelf->__VdfgRegularize_h038a369a_0_58 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2988736122109405338ull);
    vlSelf->__VdfgRegularize_h038a369a_0_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11620378787782451338ull);
    vlSelf->__VdfgRegularize_h038a369a_0_62 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1426737596587198954ull);
    vlSelf->__VdfgRegularize_h038a369a_0_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3832207169279880204ull);
    vlSelf->__VdfgRegularize_h038a369a_0_64 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6258244277408141316ull);
}
