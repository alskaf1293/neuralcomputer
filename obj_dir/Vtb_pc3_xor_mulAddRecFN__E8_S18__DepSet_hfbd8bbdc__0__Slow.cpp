// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_mulAddRecFN__E8_S18.h"

VL_ATTR_COLD void Vtb_pc3_xor_mulAddRecFN__E8_S18___ctor_var_reset(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->control = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14074454917777209462ull);
    vlSelf->op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3630531923276091163ull);
    vlSelf->a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16900879642891266615ull);
    vlSelf->c = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15598372446745583797ull);
    vlSelf->roundingMode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13564324170338824140ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7519490245117619040ull);
    vlSelf->exceptionFlags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8640290070951437667ull);
    vlSelf->__PVT__out_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9655190739995085201ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddA = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10165953071769028598ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddB = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9737011050664297060ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3931034046403673344ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17454414316932687662ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790779712545091055ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1327644233198810203ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11015363226610760164ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9772815168854946360ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7709940222607265071ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12201029408769551832ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16250561086580180701ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 59288172377287301ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2311134893957179599ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16158800442565849709ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 425481532534646778ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6398737929056731760ull);
    vlSelf->mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____Vcellinp__propagateNaN____pinNumber5 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13982277846302623240ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1138873685430252307ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13410646925050391359ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1891295982469760235ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16782326038898819283ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11116276850833794816ull);
    vlSelf->__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13861812197057206976ull);
    vlSelf->mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 502762615899032255ull);
    vlSelf->mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3933488876399299971ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7581014294557111230ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15480038502639697093ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17427968280904396121ull);
    vlSelf->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 3347947765917707993ull);
    vlSelf->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17679664660126158341ull);
    vlSelf->__VdfgRegularize_h72b89b20_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13398886624672160655ull);
    vlSelf->__VdfgRegularize_h72b89b20_0_33 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13892857844883764975ull);
    vlSelf->__VdfgRegularize_h038a369a_0_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732938070460742775ull);
    vlSelf->__VdfgRegularize_h038a369a_0_95 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5895368850168858740ull);
    vlSelf->__VdfgRegularize_h038a369a_0_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17601992742799490390ull);
    vlSelf->__VdfgRegularize_h038a369a_0_97 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10621634422423855958ull);
    vlSelf->__VdfgRegularize_h038a369a_0_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5568753381675326058ull);
    vlSelf->__VdfgRegularize_h038a369a_0_103 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4520074883906227987ull);
    vlSelf->__VdfgRegularize_h038a369a_0_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16480701194414034861ull);
    vlSelf->__VdfgRegularize_h038a369a_0_105 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7156731463954171372ull);
}
