// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor_addRecFN__E8_S18.h"

VL_ATTR_COLD void Vtb_pc3_xor_addRecFN__E8_S18___ctor_var_reset(Vtb_pc3_xor_addRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_addRecFN__E8_S18___ctor_var_reset\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->control = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14074454917777209462ull);
    vlSelf->subOp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12861148485491252542ull);
    vlSelf->a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16900879642891266615ull);
    vlSelf->roundingMode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13564324170338824140ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7519490245117619040ull);
    vlSelf->exceptionFlags = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8640290070951437667ull);
    vlSelf->__PVT__out_isNaN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4866446299067475883ull);
    vlSelf->__PVT__out_isInf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16142353434827764683ull);
    vlSelf->__PVT__out_isZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9655190739995085201ull);
    vlSelf->__PVT__out_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861844571875434173ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__isNaNA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17259669757317545358ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__isInfA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16842900167737690241ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__isNaNB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4681216237345164171ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__isInfB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15166093466272833599ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__signB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857671969023140047ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__isSigNaNB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8091788944553015159ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__eqSigns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18015555409339313297ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__sDiffExps = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 296378535245861670ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__closeSubMags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13653023911400931476ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__close_sSigSum = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 9953290692441085464ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__close_sigOut = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 17552950790082343559ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__addZeros = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9075067528889669700ull);
    vlSelf->addRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber8 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11150591198966933795ull);
    vlSelf->addRecFNToRaw__DOT____VdfgRegularize_h08a2ffc1_0_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6535535753388208521ull);
    vlSelf->__PVT__addRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5515031059294942985ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7581014294557111230ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15480038502639697093ull);
    vlSelf->__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17427968280904396121ull);
    vlSelf->roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6 = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 9436900853672807325ull);
    vlSelf->__VdfgRegularize_h34705228_0_18 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9041255146126808329ull);
    vlSelf->__VdfgRegularize_h34705228_0_19 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16454619922091350227ull);
    vlSelf->__VdfgRegularize_h038a369a_0_41 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15984138534679536185ull);
    vlSelf->__VdfgRegularize_h038a369a_0_42 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11346791542547643282ull);
    vlSelf->__VdfgRegularize_h038a369a_0_47 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17085538970940669139ull);
    vlSelf->__VdfgRegularize_h038a369a_0_48 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15439826263645876163ull);
    vlSelf->__VdfgRegularize_h038a369a_0_53 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9356818581038431188ull);
    vlSelf->__VdfgRegularize_h038a369a_0_54 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3182625765544264883ull);
    vlSelf->__VdfgRegularize_h038a369a_0_59 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4388937121495194525ull);
    vlSelf->__VdfgRegularize_h038a369a_0_60 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15586557305763740338ull);
    vlSelf->__VdfgRegularize_h038a369a_0_65 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17724630030742128256ull);
    vlSelf->__VdfgRegularize_h038a369a_0_66 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11550437215247962477ull);
    vlSelf->__VdfgRegularize_h038a369a_0_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7925241890378044389ull);
    vlSelf->__VdfgRegularize_h038a369a_0_70 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 13847658663525925269ull);
    vlSelf->__VdfgRegularize_h038a369a_0_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16734382028673150538ull);
    vlSelf->__VdfgRegularize_h038a369a_0_72 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3592857834755373896ull);
    vlSelf->__VdfgRegularize_h038a369a_0_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822592528146200982ull);
    vlSelf->__VdfgRegularize_h038a369a_0_74 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7879782199288424321ull);
    vlSelf->__VdfgRegularize_h038a369a_0_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16677467398090766974ull);
    vlSelf->__VdfgRegularize_h038a369a_0_76 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12711288880109448375ull);
    vlSelf->__VdfgRegularize_h038a369a_0_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9560464253738910085ull);
    vlSelf->__VdfgRegularize_h038a369a_0_78 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10489590141116216569ull);
    vlSelf->__VdfgRegularize_h038a369a_0_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 840531266208831510ull);
    vlSelf->__VdfgRegularize_h038a369a_0_80 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 12085605122211526863ull);
    vlSelf->__VdfgRegularize_h038a369a_0_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14596315803469926461ull);
    vlSelf->__VdfgRegularize_h038a369a_0_82 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16811870694466601757ull);
    vlSelf->__VdfgRegularize_h038a369a_0_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15974301474174586272ull);
    vlSelf->__VdfgRegularize_h038a369a_0_84 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16276997857920340737ull);
    vlSelf->__VdfgRegularize_h038a369a_0_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2253822972720164362ull);
    vlSelf->__VdfgRegularize_h038a369a_0_86 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5245787446433240051ull);
    vlSelf->__VdfgRegularize_h038a369a_0_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7085329653541084000ull);
    vlSelf->__VdfgRegularize_h038a369a_0_88 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14972598532612708188ull);
}
