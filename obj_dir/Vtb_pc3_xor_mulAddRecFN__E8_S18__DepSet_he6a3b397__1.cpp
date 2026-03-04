// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_mulAddRecFN__E8_S18.h"

extern const VlWide<17>/*543:0*/ Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = ((vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
            >> 0x1fU) ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_sign));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp 
        = ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_isZero)
              ? 0x3fU : 0x1ffU) & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                     ? 0x1bfU : 0x1ffU) 
                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U) | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                   ? 0x1c0U : 0U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
              >> 0x20U));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119, 0x1dU)) 
           | (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp) 
              >> 6U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((~ ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp) 
               >> 6U)) & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119 
                                                       >> 0x17U)) 
                                        + VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119, 0x1dU))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                        >> 0x17U))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                 | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                             >> 0x17U))), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA) 
           | (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_75)) 
               & (0x1c0U == (0x1c0U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp)))) 
              | ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i))) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                                                >> 0x17U))))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                        : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                                  : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    if (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                    ? VL_SHIFTR_III(32,32,32, vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee, 0x1fU)
                    : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                        ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_sign)
                        : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                            ? (1U & (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                             >> 0x20U)))
                            : 1U))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & (0x400000U | (0x3fffffU 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____Vcellinp__propagateNaN____pinNumber5
                                              : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_76
                                                  : 
                                                 ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i)
                                                   : 0U))))));
    } else {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                   | (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                      | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                         & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U)));
    }
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddA)) 
                                                      * (QData)((IData)(
                                                                        (((0U 
                                                                           != 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_75) 
                                                                             << 0x16U) 
                                                                            | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_76))))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((~ (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                       >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                                      >> 0x17U))), 7U)));
    vlSelfRef.__VdfgRegularize_h72b89b20_0_33 = (((0U 
                                                   != 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (0x1ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                                             >> 0x17U))), 6U)) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__u_i 
                      >> 0x1dU)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_W__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    vlSelfRef.a = ((2U == (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__j))
                    ? (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                                    ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)
                                                    : 1U)
                                                : (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((0U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))))
                    : vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__m_i);
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 6U)) 
           | (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                        >> 0x17U))), 6U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelfRef.a >> 0x1dU)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((~ (IData)((vlSelfRef.a >> 0x1dU))) & (3U 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.a 
                                                                            >> 0x17U))), 7U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (IData)(((vlSelfRef.a ^ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b) 
                   >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.a 
                                                                  >> 0x17U)))) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                                    >> 0x17U)))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                                & (IData)(
                                                          (vlSelfRef.a 
                                                           >> 0x17U))), 6U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
              >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                        >> 0x17U))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                 | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                             >> 0x17U))), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                      & vlSelfRef.a))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB) 
              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                                                >> 0x17U))))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA)
                        : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA)
                                  : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x3ffffffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                          ? (0x400000U | (0x3fffffU 
                                          & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (IData)(vlSelfRef.a)
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.b)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.a)
                                                   : 0U)))))
                          : ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (((0U 
                                                                         != 
                                                                         VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x17U))), 6U)) 
                                                                        << 0x17U) 
                                                                       | (0x7fffffU 
                                                                          & (IData)(vlSelfRef.a))))) 
                                                      * (QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddB))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b = ((1U & (((3U == VL_SHIFTR_III(32,32,32, 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                            >> 0x17U))), 7U)) 
                           & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                      >> 0x1dU))) | 
                          ((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                    >> 0x20U)) | ((
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags))) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                              >> 0x20U))) 
                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                    >> 0x20U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags)))))))
                    ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs
                    : 0x80c00000ULL);
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB 
        = (((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                            & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x17U))), 6U)) 
            << 0x17U) | (0x7fffffU & (IData)(vlSelfRef.b)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE__G_TANH__DOT__U_TANH__DOT__FMA__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0 = 0;
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0 = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    IData/*25:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 = 0;
    CData/*0:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 = 0;
    IData/*23:0*/ __VdfgRegularize_h72b89b20_0_33;
    __VdfgRegularize_h72b89b20_0_33 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x20U)));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x1dU)));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x1dU)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp 
        = (0x1ffU & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                             >> 0x17U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp 
        = (0x1ffU & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                             >> 0x17U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA) 
           ^ (vlSelfRef.b >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((~ (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 7U)));
    __VdfgRegularize_h72b89b20_0_33 = (((0U != VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 7U)) 
           & (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
           | (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSelfRef.b 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
           & (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((~ (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp)) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.b 
                                                                    >> 0x17U)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelfRef.b 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA) 
              & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                 | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = (((~ (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                        [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                        >> 0x16U))) & (7U == (7U & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                                                            >> 0x1dU))))) 
           | ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                         & vlSelfRef.b))) 
              | (((~ (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                              [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                              >> 0x16U))) & (7U == 
                                             (7U & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                                                            >> 0x1dU))))) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(
                                                                                vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                                                [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg]), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ __VdfgRegularize_h72b89b20_0_33)
                        : __VdfgRegularize_h72b89b20_0_33) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ __VdfgRegularize_h72b89b20_0_33)
                                  : __VdfgRegularize_h72b89b20_0_33) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    if (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                    ? (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA)
                    : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)
                        ? (1U & (IData)((vlSelfRef.b 
                                         >> 0x20U)))
                        : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                            ? (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC)
                            : 1U))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & (0x400000U | (0x3fffffU 
                                          & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (IData)(
                                                        vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                        [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)
                                                  ? (IData)(vlSelfRef.b)
                                                  : 
                                                 ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(
                                                             vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])
                                                   : 0U))))));
    } else {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                   | (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                      | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                         & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U)));
    }
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (((0U 
                                                                         != 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                        << 0x17U) 
                                                                       | (0x7fffffU 
                                                                          & (IData)(
                                                                                vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                                                [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_STATE.__PVT__G_TANH__DOT__U_TANH__DOT__seg]))))) 
                                                      * (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
    vlSelfRef.__VdfgRegularize_h038a369a_0_102 = ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  | ((IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                     & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
                                                        >> 0x16U)));
    vlSelfRef.__VdfgRegularize_h038a369a_0_103 = (((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | (IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                   ? 
                                                  (0x3fffffU 
                                                   & roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                   : 0U);
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b = ((1U & (((3U == VL_SHIFTR_III(32,32,32, 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                            >> 0x17U))), 7U)) 
                           & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                      >> 0x1dU))) | 
                          ((IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                    >> 0x20U)) | ((
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags) 
                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags))) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                              >> 0x20U))) 
                                                  | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_ltMags) 
                                                     | ((~ (IData)(
                                                                   (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs 
                                                                    >> 0x20U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__CMP_CLIP__DOT__common_eqMags)))))))
                    ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__x_abs
                    : 0x80c00000ULL);
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB 
        = (((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                            & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x17U))), 6U)) 
            << 0x17U) | (0x7fffffU & (IData)(vlSelfRef.b)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__FMA__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0 = 0;
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0 = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    IData/*25:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 = 0;
    CData/*0:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 = 0;
    IData/*23:0*/ __VdfgRegularize_h72b89b20_0_33;
    __VdfgRegularize_h72b89b20_0_33 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x20U)));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x1dU)));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0 
        = (1U & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                         [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                         >> 0x1dU)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp 
        = (0x1ffU & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                             >> 0x17U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp 
        = (0x1ffU & (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                             >> 0x17U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA) 
           ^ (vlSelfRef.b >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((~ (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 7U)));
    __VdfgRegularize_h72b89b20_0_33 = (((0U != VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)) 
                                        << 0x17U) | 
                                       (0x7fffffU & (IData)(
                                                            vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 7U)) 
           & (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT____VdfgRegularize_h351e80ac_0_0));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
           | (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSelfRef.b 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
           & (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((~ (IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT____VdfgRegularize_h351e80ac_0_0)) 
           & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp)) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.b 
                                                                    >> 0x17U)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelfRef.b 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA) 
              & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isInfA));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                 | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = (((~ (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                        [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                        >> 0x16U))) & (7U == (7U & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                                                            >> 0x1dU))))) 
           | ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                         & vlSelfRef.b))) 
              | (((~ (IData)((vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                              [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                              >> 0x16U))) & (7U == 
                                             (7U & (IData)(
                                                           (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                            [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg] 
                                                            >> 0x1dU))))) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_c__DOT__exp))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, __VdfgRegularize_h72b89b20_0_33, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(
                                                                                vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                                                [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg]), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ __VdfgRegularize_h72b89b20_0_33)
                        : __VdfgRegularize_h72b89b20_0_33) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ __VdfgRegularize_h72b89b20_0_33)
                                  : __VdfgRegularize_h72b89b20_0_33) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    if (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                    ? (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signA)
                    : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)
                        ? (1U & (IData)((vlSelfRef.b 
                                         >> 0x20U)))
                        : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                            ? (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signC)
                            : 1U))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & (0x400000U | (0x3fffffU 
                                          & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (IData)(
                                                        vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                        [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__G_GE__BRA__0__KET____DOT__C__DOT__isNaNA)
                                                  ? (IData)(vlSelfRef.b)
                                                  : 
                                                 ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(
                                                             vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__b_rec
                                                             [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg])
                                                   : 0U))))));
    } else {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                   | (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                      | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                         & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U)));
    }
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (((0U 
                                                                         != 
                                                                         VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                        << 0x17U) 
                                                                       | (0x7fffffU 
                                                                          & (IData)(
                                                                                vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__m_rec
                                                                                [vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__seg]))))) 
                                                      * (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
    vlSelfRef.__VdfgRegularize_h038a369a_0_104 = ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  | ((IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                     & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
                                                        >> 0x16U)));
    vlSelfRef.__VdfgRegularize_h038a369a_0_105 = (((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                   | (IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                   ? 
                                                  (0x3fffffU 
                                                   & roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                   : 0U);
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.c = ((0U == (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
                    ? 0x15000000ULL : vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__mu_acc);
    vlSelfRef.a = ((2U >= (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
                    ? vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta
                   [vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j]
                    : 0ULL);
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((~ (IData)((vlSelfRef.c >> 0x1dU))) & (3U 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.c 
                                                                            >> 0x17U))), 7U)));
    vlSelfRef.__VdfgRegularize_h72b89b20_0_33 = (((0U 
                                                   != 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (0x1ffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.c 
                                                                             >> 0x17U))), 6U)) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (IData)(vlSelfRef.c)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.c 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelfRef.c >> 0x1dU)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA 
        = (IData)((0xe0000000ULL == (0xe0400000ULL 
                                     & vlSelfRef.a)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddA 
        = (((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                            & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x17U))), 6U)) 
            << 0x17U) | (0x7fffffU & (IData)(vlSelfRef.a)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((~ (IData)((vlSelfRef.a >> 0x1dU))) & (3U 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.a 
                                                                            >> 0x17U))), 7U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelfRef.a >> 0x1dU)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED__1\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    vlSelfRef.b = ((2U == (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
                    ? 0x80000000ULL : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X.__PVT__addRecFNToRaw__DOT__isNaNB)
                                        ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_X.b
                                        : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE.__PVT__G_TANH__DOT__U_TANH__DOT__lt_zero)
                                            ? (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__isNaNB)
                                                                     ? 
                                                                    ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__isNaNB)) 
                                                                     | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__signB))
                                                                     : 
                                                                    (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__signB)) 
                                                                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__isInfB)) 
                                                                     | ((~ 
                                                                         ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__isInfB) 
                                                                          | (0U 
                                                                             == 
                                                                             VL_SHIFTR_III(32,32,32, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 6U)))) 
                                                                        & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__closeSubMags) 
                                                                            & ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__close_sigOut 
                                                                                >> 0x19U))) 
                                                                               & VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,27, 
                                                                                (0x7ffffffU 
                                                                                & (- 
                                                                                VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__VdfgRegularize_h34705228_0_18, 1U))))))) 
                                                                           | ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__closeSubMags)) 
                                                                              & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__signB)) 
                                                                                & VL_GTS_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,10, 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x2aU) 
                                                                                - (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp)))))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__out_isZero)
                                                                       ? 0x3fU
                                                                       : 0x1ffU) 
                                                                     & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                          ? 0x1bfU
                                                                          : 0x1ffU) 
                                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                                    | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                         ? 0x180U
                                                                         : 0U) 
                                                                       | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                           ? 0x1c0U
                                                                           : 0U))) 
                                                                   << 0x17U) 
                                                                  | ((0x400000U 
                                                                      & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                          << 0x16U) 
                                                                         | (0xffc00000U 
                                                                            & (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__out_isZero)) 
                                                                                << 0x16U) 
                                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)))) 
                                                                     | ((1U 
                                                                         & ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__out_isZero)) 
                                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)))
                                                                         ? 
                                                                        (0x3fffffU 
                                                                         & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h1cf6b949_0_6)
                                                                         : 0U))))))
                                            : (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__signB)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.__PVT__addRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                                   << 0x17U) 
                                                                  | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__ACT_PRE__G_TANH__DOT__U_TANH__DOT__NEG_Y.addRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber8)))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB 
        = (IData)((0xe0000000ULL == (0xe0400000ULL 
                                     & vlSelfRef.b)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB 
        = (((0U != VL_SHIFTR_III(32,32,32, (0x1ffU 
                                            & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x17U))), 6U)) 
            << 0x17U) | (0x7fffffU & (IData)(vlSelfRef.b)));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 6U)) 
           | (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSelfRef.b 
                                                        >> 0x17U))), 6U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (IData)(((vlSelfRef.a ^ vlSelfRef.b) >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.a 
                                                                  >> 0x17U)))) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.b 
                                                                    >> 0x17U)))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.b 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelfRef.b >> 0x1dU)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((~ (IData)((vlSelfRef.b >> 0x1dU))) & (3U 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.b 
                                                                            >> 0x17U))), 7U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSelfRef.c 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (vlSelfRef.c >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlSelfRef.c 
                                                        >> 0x17U))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSelfRef.b 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                                & (IData)(
                                                          (vlSelfRef.a 
                                                           >> 0x17U))), 6U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.c 
                                                             >> 0x17U))), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                 | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSelfRef.c 
                                                                                >> 0x17U))))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.c), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                        : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                                  : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB) 
              | ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                            & vlSelfRef.c))) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x3ffffffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                          ? (0x400000U | (0x3fffffU 
                                          & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (IData)(vlSelfRef.a)
                                              : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? (IData)(vlSelfRef.b)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(vlSelfRef.c)
                                                   : 0U)))))
                          : ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddA)) 
                                                      * (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddB))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    SData/*8:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = ((vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee 
            >> 0x1fU) ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_sign));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp 
        = ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_isZero)
              ? 0x3fU : 0x1ffU) & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                     ? 0x1bfU : 0x1ffU) 
                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U) | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                   ? 0x1c0U : 0U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
              >> 0x20U));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119, 0x1dU)) 
           | (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB 
        = ((3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp) 
              >> 6U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB 
        = ((~ ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp) 
               >> 6U)) & (3U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119 
                                                       >> 0x17U)) 
                                        + VL_EXTENDS_II(11,10, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_G.__VdfgRegularize_h038a369a_0_119, 0x1dU))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                        >> 0x17U))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                 | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                             >> 0x17U))), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA) 
           | (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_79)) 
               & (0x1c0U == (0x1c0U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp)))) 
              | ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                            & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i))) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                                                >> 0x17U))))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSelfRef.__VdfgRegularize_h72b89b20_0_33, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                        : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlSelfRef.__VdfgRegularize_h72b89b20_0_33)
                                  : vlSelfRef.__VdfgRegularize_h72b89b20_0_33) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    if (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                    ? VL_SHIFTR_III(32,32,32, vlSymsp->TOP.tb_pc3_xor__DOT__gamma_ieee, 0x1fU)
                    : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                        ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__out_sign)
                        : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                            ? (1U & (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                             >> 0x20U)))
                            : 1U))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & (0x400000U | (0x3fffffU 
                                          & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____Vcellinp__propagateNaN____pinNumber5
                                              : ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_80
                                                  : 
                                                 ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i)
                                                   : 0U))))));
    } else {
        vlSelfRef.__VdfgRegularize_h72b89b20_0_0 = 
            (1U & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                   | (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                       & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)) 
                      | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                         & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))))));
        __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
            = (0x3ffffffU & ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U)));
    }
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__FMA_STATE.__PVT__mulAddRecFNToRaw__DOT__mulAddA)) 
                                                      * (QData)((IData)(
                                                                        (((0U 
                                                                           != 
                                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_79) 
                                                                             << 0x16U) 
                                                                            | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_80))))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_STATE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC 
        = ((~ (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                       >> 0x1dU))) & (3U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                                      >> 0x17U))), 7U)));
    vlSelfRef.__VdfgRegularize_h72b89b20_0_33 = (((0U 
                                                   != 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (0x1ffU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                                             >> 0x17U))), 6U)) 
                                                  << 0x17U) 
                                                 | (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNC 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__u_i 
                      >> 0x1dU)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0(Vtb_pc3_xor_mulAddRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_pc3_xor_mulAddRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_W__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isNaN;
    __PVT__out_isNaN = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    SData/*9:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_sExp;
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC = 0;
    QData/*48:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddResult;
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    SData/*10:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd = 0;
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc = 0;
    CData/*0:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 = 0;
    IData/*31:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1;
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 = 0;
    VlWide<3>/*77:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2;
    VL_ZERO_W(78, mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2);
    CData/*0:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VlWide<3>/*74:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum;
    VL_ZERO_W(75, __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum);
    QData/*49:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum = 0;
    QData/*50:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum = 0;
    QData/*49:0*/ mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0;
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 = 0;
    IData/*25:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn = 0;
    IData/*26:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn = 0;
    CData/*4:0*/ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar;
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar = 0;
    IData/*24:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit = 0;
    IData/*25:0*/ __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig;
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig = 0;
    IData/*24:0*/ roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1;
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 = 0;
    CData/*1:0*/ __VdfgRegularize_h72b89b20_0_34;
    __VdfgRegularize_h72b89b20_0_34 = 0;
    CData/*3:0*/ __VdfgRegularize_h72b89b20_0_35;
    __VdfgRegularize_h72b89b20_0_35 = 0;
    CData/*5:0*/ __VdfgRegularize_h72b89b20_0_36;
    __VdfgRegularize_h72b89b20_0_36 = 0;
    CData/*7:0*/ __VdfgRegularize_h72b89b20_0_37;
    __VdfgRegularize_h72b89b20_0_37 = 0;
    SData/*9:0*/ __VdfgRegularize_h72b89b20_0_38;
    __VdfgRegularize_h72b89b20_0_38 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<17>/*543:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<17>/*543:0*/ __Vtemp_34;
    VlWide<17>/*543:0*/ __Vtemp_36;
    VlWide<17>/*543:0*/ __Vtemp_38;
    VlWide<17>/*543:0*/ __Vtemp_40;
    VlWide<17>/*543:0*/ __Vtemp_42;
    VlWide<17>/*543:0*/ __Vtemp_44;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<17>/*543:0*/ __Vtemp_48;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<17>/*543:0*/ __Vtemp_52;
    // Body
    vlSelfRef.a = ((2U == (IData)(vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__j))
                    ? (((QData)((IData)((1U & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                                ? ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                                    ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA)
                                                    : 1U)
                                                : (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__signA))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((((~ 
                                                         (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x40U
                                                            : 0U) 
                                                          | (((0U 
                                                               == 
                                                               VL_SHIFTR_III(32,32,32, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                              | VL_GTS_III(32, 0x6bU, 
                                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                        & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                                                       | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                            ? 0x180U
                                                            : 0U) 
                                                          | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                                              ? 0x1c0U
                                                              : 0U))) 
                                                      << 0x17U) 
                                                     | ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                          << 0x16U) 
                                                         | (0xffc00000U 
                                                            & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                                << 0x16U) 
                                                               & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7))) 
                                                        | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                            | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                            ? 
                                                           (0x3fffffU 
                                                            & vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                            : 0U))))))
                    : vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__m_i);
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0 
        = ((0U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 6U)) 
           | (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                        >> 0x17U))), 6U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA 
        = ((3U == VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSelfRef.a 
                                                             >> 0x17U))), 7U)) 
           & (IData)((vlSelfRef.a >> 0x1dU)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA 
        = ((~ (IData)((vlSelfRef.a >> 0x1dU))) & (3U 
                                                  == 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.a 
                                                                            >> 0x17U))), 7U)));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd 
        = (IData)(((vlSelfRef.a ^ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b) 
                   >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd 
        = (0x7ffU & ((IData)(0x71bU) + (VL_EXTENDS_II(11,10, 
                                                      (0x1ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.a 
                                                                  >> 0x17U)))) 
                                        + VL_EXTENDS_II(11,10, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                                    >> 0x17U)))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                        >> 0x17U))), 6U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd 
        = (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                                & (IData)(
                                                          (vlSelfRef.a 
                                                           >> 0x17U))), 6U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
              >> 0x20U));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist 
        = (0x7ffU & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd) 
                     - VL_EXTENDS_II(11,10, (0x1ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                        >> 0x17U))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB) 
           | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC 
        = ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd)) 
           & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
           ^ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__invalidProd) 
           | ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
              & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                 & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign 
        = ((IData)(mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_0) 
           | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                 | (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
           | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != VL_SHIFTR_III(32,32,32, (0x1ffU & (IData)(
                                                            (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                             >> 0x17U))), 6U)) 
           & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
              | (0x18U >= (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
        = ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0x4aU > (0x3ffU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0x7fU & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0x4aU));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd 
        = ((IData)((0xe0000000ULL == (0xe0400000ULL 
                                      & vlSelfRef.a))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNB) 
              | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isSigNaNA) 
                 | ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notSigNaN_invalidExc) 
                    | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                       & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __PVT__mulAddRecFNToRaw__DOT__intermed_sExp = (0x3ffU 
                                                   & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                                       ? 
                                                      VL_EXTENDS_II(32,10, 
                                                                    (0x1ffU 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a 
                                                                                >> 0x17U))))
                                                       : 
                                                      (VL_EXTENDS_II(32,11, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                       - (IData)(0x18U))));
    vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
              | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                 & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((((((0U != (7U & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                    >> 0x18U))) << 6U) 
                     | ((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                        >> 0x14U))) 
                        << 5U)) | (((0U != (0xfU & 
                                            (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                             >> 0x10U))) 
                                    << 4U) | ((0U != 
                                               (0xfU 
                                                & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                                   >> 0xcU))) 
                                              << 3U))) 
                   | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                       >> 8U))) << 2U) 
                      | (((0U != (0xfU & (VL_SHIFTL_III(27,27,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA, 2U) 
                                          >> 4U))) 
                          << 1U) | (0U != (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a), 2U)))))) 
                  & (((0x20U & ((IData)((0x7ffffULL 
                                         & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                           (0x1fU 
                                                            & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                               >> 2U))) 
                                            >> 0xeU))) 
                                << 5U)) | ((0x10U & 
                                            ((IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                        (0x1fU 
                                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                            >> 2U))) 
                                                         >> 0xfU))) 
                                             << 4U)) 
                                           | (8U & 
                                              ((IData)(
                                                       (0x1ffffULL 
                                                        & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                          (0x1fU 
                                                                           & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U))) 
                                                           >> 0x10U))) 
                                               << 3U)))) 
                     | ((4U & ((IData)((0xffffULL & 
                                        (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                        (0x1fU 
                                                         & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                            >> 2U))) 
                                         >> 0x11U))) 
                               << 2U)) | ((2U & ((IData)(
                                                         (0x7fffULL 
                                                          & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                            (0x1fU 
                                                                             & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                             >> 0x12U))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          (0x3fffULL 
                                                           & (VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                                                             (0x1fU 
                                                                              & (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))) 
                                                              >> 0x13U)))))))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                        ? (~ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA)
                        : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (0x3fffU & (((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                  ? (~ vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA)
                                  : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddA) 
                                >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, (0x7fU 
                                                   & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1));
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U] 
        = __Vtemp_3[0U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
        = __Vtemp_3[1U];
    mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    __PVT__invalidExc = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                         & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__signProd));
    __PVT__out_isNaN = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags));
    __PVT__out_isInf = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                        & (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC 
        = ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
           | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
              & ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                  ? ((~ (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)) 
                     & (7U == (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])))
                  : ((0U != (7U & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                     | (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))));
    __PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
        = (0x3ffffffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNOut)
                          ? (0x400000U | (0x3fffffU 
                                          & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNA)
                                              ? (IData)(vlSelfRef.a)
                                              : ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNB)
                                                  ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.b)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__propagateNaN__DOT__notNaNAOrB_propagateC)
                                                   ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.a)
                                                   : 0U)))))
                          : ((mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[2U] 
                              << 0xdU) | (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U] 
                                          >> 0x13U))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddResult = (0x1ffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      (((0U 
                                                                         != 
                                                                         VL_SHIFTR_III(32,32,32, 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.a 
                                                                                >> 0x17U))), 6U)) 
                                                                        << 0x17U) 
                                                                       | (0x7fffffU 
                                                                          & (IData)(vlSelfRef.a))))) 
                                                      * (QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__1__KET____DOT__G_LAYER_INST_L1__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__FMA_PRED.__PVT__mulAddRecFNToRaw__DOT__mulAddB))) 
                                                     + 
                                                     (0xffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[1U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_2[0U])) 
                                                            >> 3U)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
        = (0x3ffffffU & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                         + (1U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          >> 0x30U)))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((0x1fffffffffffeULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                          << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
            << 0x11U) | (IData)((((0x1fffffffffffeULL 
                                   & (__PVT__mulAddRecFNToRaw__DOT__mulAddResult 
                                      << 1U)) | (QData)((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC))) 
                                 >> 0x20U)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4 
           >> 0xfU);
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                              >> 0x19U))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (0x7fffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U])) 
                                                       << 0x26U) 
                                                      | (((QData)((IData)(
                                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                                          << 6U) 
                                                         | ((QData)((IData)(
                                                                            __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U])) 
                                                            >> 0x1aU)))))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x7ffffffffffffULL & ((4U & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_4)
                                  ? (~ (((QData)((IData)(
                                                         __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))))
                                  : ((((QData)((IData)(
                                                       __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]))) 
                                     + (QData)((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)))));
    mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
        = (0x3ffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum 
                                 << (0x1fU & mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn 
        = (((((((0U != (3U & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                << 0x19U) | ((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                   >> 2U)))) 
                             << 0x18U)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))) 
                                            << 0x17U) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                              << 0x16U))) 
             | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 8U)))) << 0x15U) 
                | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                          >> 0xaU)))) 
                    << 0x14U) | ((0U != (3U & (IData)(
                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                       >> 0xcU)))) 
                                 << 0x13U)))) | (((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xeU)))) 
                                                   << 0x12U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x10U)))) 
                                                      << 0x11U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x12U)))) 
                                                        << 0x10U))) 
                                                 | (((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x14U)))) 
                                                     << 0xfU) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x16U)))) 
                                                        << 0xeU) 
                                                       | ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x18U)))) 
                                                          << 0xdU))))) 
           | ((((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                        >> 0x1aU)))) 
                  << 0xcU) | ((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x1cU)))) 
                              << 0xbU)) | (((0U != 
                                             (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x1eU)))) 
                                            << 0xaU) 
                                           | ((0U != 
                                               (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x20U)))) 
                                              << 9U))) 
               | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                         >> 0x22U)))) 
                   << 8U) | (((0U != (3U & (IData)(
                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0x24U)))) 
                              << 7U) | ((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x26U)))) 
                                        << 6U)))) | 
              ((((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x28U)))) 
                 << 5U) | (((0U != (3U & (IData)((__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                  >> 0x2aU)))) 
                            << 4U) | ((0U != (3U & (IData)(
                                                           (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x2cU)))) 
                                      << 3U))) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2eU)))) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x30U)))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x32U))))))));
    __VdfgRegularize_h72b89b20_0_34 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 2U)))) 
                                        << 1U) | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn 
        = ((0x4000000U | __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn) 
           & ((IData)(1U) + (0x3ffffffU & (~ __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__reverseIn))));
    __VdfgRegularize_h72b89b20_0_35 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))) 
                                        << 3U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 4U)))) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_34)));
    __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar 
        = (((((((((((((((((((((((((((2U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                     ? 1U : 0U) | (
                                                   (4U 
                                                    & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                    ? 2U
                                                    : 0U)) 
                                  | ((8U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 3U : 0U)) | 
                                 ((0x10U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 4U : 0U)) | ((0x20U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 5U
                                                   : 0U)) 
                               | ((0x40U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                   ? 6U : 0U)) | ((0x80U 
                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                   ? 7U
                                                   : 0U)) 
                             | ((0x100U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                 ? 8U : 0U)) | ((0x200U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 9U
                                                 : 0U)) 
                           | ((0x400U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                               ? 0xaU : 0U)) | ((0x800U 
                                                 & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                                 ? 0xbU
                                                 : 0U)) 
                         | ((0x1000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                             ? 0xcU : 0U)) | ((0x2000U 
                                               & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                               ? 0xdU
                                               : 0U)) 
                       | ((0x4000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                           ? 0xeU : 0U)) | ((0x8000U 
                                             & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                             ? 0xfU
                                             : 0U)) 
                     | ((0x10000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                         ? 0x10U : 0U)) | ((0x20000U 
                                            & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                            ? 0x11U
                                            : 0U)) 
                   | ((0x40000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                       ? 0x12U : 0U)) | ((0x80000U 
                                          & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                          ? 0x13U : 0U)) 
                 | ((0x100000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                     ? 0x14U : 0U)) | ((0x200000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                        ? 0x15U : 0U)) 
               | ((0x400000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                   ? 0x16U : 0U)) | ((0x800000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                      ? 0x17U : 0U)) 
             | ((0x1000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                 ? 0x18U : 0U)) | ((0x2000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
                                    ? 0x19U : 0U)) 
           | ((0x4000000U & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__oneLeastReverseIn)
               ? 0x1aU : 0U));
    __VdfgRegularize_h72b89b20_0_36 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xaU)))) 
                                        << 5U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))) 
                                                   << 4U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_35)));
    __PVT__out_sExp = (0x3ffU & ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                                  ? ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags))
                                  : ((IData)(__PVT__mulAddRecFNToRaw__DOT__intermed_sExp) 
                                     - (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U)))));
    vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
        = (0xfffffffffffffULL & (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                 << (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar), 1U))));
    __VdfgRegularize_h72b89b20_0_37 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0xeU)))) 
                                        << 7U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0xcU)))) 
                                                   << 6U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_36)));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_4, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_6, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_8, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_10, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_12, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_14, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_16, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_18, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_20, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_22, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_24, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_26, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_28, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_30, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_32, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_34, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_36, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_38, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_40, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_42, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_44, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_46, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_48, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_50, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_52, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_4[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_6[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_8[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_10[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_12[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_14[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_16[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_18[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_20[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_22[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_24[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_26[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_28[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_30[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_32[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_34[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_36[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_38[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_40[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_42[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_44[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_46[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_48[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_50[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_52[4U]) >> 2U)))))));
    vlSelfRef.__PVT__out_isZero = (((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                    & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC)) 
                                   | ((~ (IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)) 
                                      & (0ULL == (0xc000000000000ULL 
                                                  & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2))));
    __VdfgRegularize_h72b89b20_0_38 = (((0U != (3U 
                                                & (IData)(
                                                          (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))) 
                                        << 9U) | ((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x10U)))) 
                                                   << 8U) 
                                                  | (IData)(__VdfgRegularize_h72b89b20_0_37)));
    __PVT__out_sig = ((IData)(__PVT__out_isNaN) ? (0x2000000U 
                                                   | (0x1fffffcU 
                                                      & (__PVT__mulAddRecFNToRaw__DOT__intermed_highAlignedSigC 
                                                         << 2U)))
                       : ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CIsDominant)
                           ? ((0x7fffffeU & ((IData)(
                                                     (mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0 
                                                      >> 0x18U)) 
                                             << 1U)) 
                              | (1U & ((0ULL != (0xe00000ULL 
                                                 & mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_0)) 
                                       | ((0U != ((
                                                   ((((0U 
                                                       != 
                                                       (7U 
                                                        & (VL_SHIFTL_III(27,27,32, 
                                                                         (0xffffffU 
                                                                          & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                           >> 0x18U))) 
                                                      << 6U) 
                                                     | ((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x14U))) 
                                                        << 5U)) 
                                                    | (((0U 
                                                         != 
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(27,27,32, 
                                                                           (0xffffffU 
                                                                            & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                             >> 0x10U))) 
                                                        << 4U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 0xcU))) 
                                                          << 3U))) 
                                                   | (((0U 
                                                        != 
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(27,27,32, 
                                                                          (0xffffffU 
                                                                           & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                            >> 8U))) 
                                                       << 2U) 
                                                      | (((0U 
                                                           != 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(27,27,32, 
                                                                             (0xffffffU 
                                                                              & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum)), 3U) 
                                                               >> 4U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            != 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum), 3U)))))) 
                                                  & (((0x20U 
                                                       & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                         (7U 
                                                                          & (~ 
                                                                             (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                              >> 2U)))) 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                            (7U 
                                                                             & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                             << 2U)) 
                                                         | (8U 
                                                            & VL_SHIFTRS_III(32,9,3, 0x100U, 
                                                                             (7U 
                                                                              & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U))))))) 
                                                     | ((4U 
                                                         & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                           (7U 
                                                                            & (~ 
                                                                               (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                            >> 2U)) 
                                                        | ((2U 
                                                            & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                              (7U 
                                                                               & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                               >> 4U)) 
                                                           | (1U 
                                                              & (VL_SHIFTRS_III(9,9,3, 0x100U, 
                                                                                (7U 
                                                                                & (~ 
                                                                                (mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT____VdfgRegularize_ha2699261_0_1 
                                                                                >> 2U)))) 
                                                                 >> 6U))))))) 
                                          | ((IData)(vlSelfRef.__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__doSubMags)
                                              ? (~ 
                                                 (0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))
                                              : (0U 
                                                 != 
                                                 (0x1ffffffU 
                                                  & (IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddResult))))))))
                           : ((0x7fffffeU & ((IData)(
                                                     (vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2 
                                                      >> 0x1aU)) 
                                             << 1U)) 
                              | (IData)(((0ULL != (0x3800000ULL 
                                                   & vlSelfRef.mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT____VdfgRegularize_h12156a9d_0_2)) 
                                         | (0U != (
                                                   (((((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x18U)))) 
                                                       << 6U) 
                                                      | ((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0xf00000ULL 
                                                                   & __PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum))) 
                                                         << 5U)) 
                                                     | (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(__VdfgRegularize_h72b89b20_0_38) 
                                                              >> 8U))) 
                                                         << 4U) 
                                                        | ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_37) 
                                                                >> 6U))) 
                                                           << 3U))) 
                                                    | (((0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(__VdfgRegularize_h72b89b20_0_36) 
                                                             >> 4U))) 
                                                        << 2U) 
                                                       | (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(__VdfgRegularize_h72b89b20_0_35) 
                                                                >> 2U))) 
                                                           << 1U) 
                                                          | (0U 
                                                             != (IData)(__VdfgRegularize_h72b89b20_0_34))))) 
                                                   & (((0x20U 
                                                        & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                          (0xfU 
                                                                           & (~ 
                                                                              ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                               >> 1U)))) 
                                                           << 4U)) 
                                                       | ((0x10U 
                                                           & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                             (0xfU 
                                                                              & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                              << 2U)) 
                                                          | (8U 
                                                             & VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                                                              (0xfU 
                                                                               & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U))))))) 
                                                      | ((4U 
                                                          & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                             >> 2U)) 
                                                         | ((2U 
                                                             & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                >> 4U)) 
                                                            | (1U 
                                                               & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((IData)(__PVT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__countLeadingZeros_notCDom__DOT__Bit__BRA__26__KET____DOT__countSoFar) 
                                                                                >> 1U)))) 
                                                                  >> 6U))))))))))));
    roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
        = (__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (__PVT__out_sig >> 0x1aU)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask 
        = ((~ VL_SHIFTR_III(27,27,32, (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                             << 2U)), 1U)) 
           & (3U | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                    << 2U)));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((__PVT__out_sig & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                            & (0U != 
                                               (7U 
                                                & (__PVT__out_sig 
                                                   & __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & ((IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit)
                          ? ((((~ ((0U != (0xffffffU 
                                           & ((__PVT__out_sig 
                                               & VL_SHIFTR_III(27,27,32, 
                                                               (3U 
                                                                | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                   << 2U)), 1U)) 
                                              >> 3U))) 
                                   | ((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                      & (0U != (__PVT__out_sig 
                                                & (1U 
                                                   | (6U 
                                                      & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                         << 1U)))))))) 
                               & (IData)(__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundPosBit))
                               ? (~ VL_SHIFTR_III(32,32,32, 
                                                  (3U 
                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                      << 2U)), 1U))
                               : 0xffffffffU) & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               (3U 
                                                                | (__PVT__out_sig 
                                                                   | (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                                      << 2U))), 2U)))
                          : VL_SHIFTR_III(32,32,32, 
                                          ((~ (3U | 
                                               (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_1 
                                                << 2U))) 
                                           & __PVT__out_sig), 2U)));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
        = (0x3ffffffU & ((0x4000000U & __PVT__out_sig)
                          ? VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 1U)
                          : __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp 
        = (0x7ffU & (VL_EXTENDS_II(11,10, (0x3ffU & 
                                           VL_EXTENDS_II(10,10, (IData)(__PVT__out_sExp)))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((~ (IData)(vlSelfRef.__PVT__out_isZero)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__out_isInf) | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                         & ((~ (IData)(__PVT__out_isInf)) 
                                            & (~ (IData)(vlSelfRef.__PVT__out_isZero)))) 
                                        & VL_LTES_III(32, 3U, 
                                                      VL_SHIFTRS_III(32,32,32, 
                                                                     VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}
