// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor_mulRecFN__E8_S18.h"

extern const VlWide<17>/*543:0*/ Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__invalidExc;
    __PVT__invalidExc = 0;
    CData/*0:0*/ __PVT__out_isInf;
    __PVT__out_isInf = 0;
    SData/*9:0*/ __PVT__out_sExp;
    __PVT__out_sExp = 0;
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isInfB;
    __PVT__mulRecFNToRaw__DOT__isInfB = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc;
    __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = 0;
    QData/*47:0*/ __PVT__mulRecFNToRaw__DOT__sigProd;
    __PVT__mulRecFNToRaw__DOT__sigProd = 0;
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
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7 
        = (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__VdfgRegularize_h038a369a_0_85) 
            << 0x16U) | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__VdfgRegularize_h038a369a_0_86);
    vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp 
        = ((((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_isZero)
              ? 0x3fU : 0x1ffU) & (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                     ? 0x1bfU : 0x1ffU) 
                                   & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
           | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                ? 0x180U : 0U) | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                   ? 0x1c0U : 0U)));
    vlSelfRef.__PVT__out_isZero = ((0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A.__VdfgRegularize_h038a369a_0_118, 0x1dU)) 
                                   | (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 6U)));
    __PVT__out_sExp = (0x3ffU & ((VL_EXTENDS_II(10,10, 
                                                (vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A.__VdfgRegularize_h038a369a_0_118 
                                                 >> 0x17U)) 
                                  + VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp))) 
                                 - (IData)(0x100U)));
    __PVT__mulRecFNToRaw__DOT__sigProd = (0xffffffffffffULL 
                                          & ((QData)((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__VdfgRegularize_h73e0a55c_0_1)) 
                                             * (QData)((IData)(
                                                               (((0U 
                                                                  != 
                                                                  VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 6U)) 
                                                                 << 0x17U) 
                                                                | vlSelfRef.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber7)))));
    vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNB = (
                                                   (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                                      >> 6U));
    __PVT__mulRecFNToRaw__DOT__isInfB = ((~ ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp) 
                                             >> 6U)) 
                                         & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 7U)));
    __PVT__out_isInf = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isInfA) 
                        | (IData)(__PVT__mulRecFNToRaw__DOT__isInfB));
    __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp), 6U))) 
           | ((IData)(__PVT__mulRecFNToRaw__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__U_A.__VdfgRegularize_h038a369a_0_118, 0x1dU))));
    __PVT__invalidExc = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isSigNaNA) 
                         | (((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__VdfgRegularize_h038a369a_0_85)) 
                             & (0x1c0U == (0x1c0U & (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_b__DOT__exp)))) 
                            | (IData)(__PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc)));
    vlSelfRef.__PVT__out_isNaN = ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isNaNA) 
                                  | ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNB) 
                                     | (IData)(__PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc)));
    __PVT__out_sig = ((IData)(vlSelfRef.__PVT__out_isNaN)
                       ? (0x3000000U | (0xfffffcU & 
                                        (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                           ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4
                                           : ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNB)
                                               ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__VdfgRegularize_h038a369a_0_86
                                               : 0U)) 
                                         << 2U))) : 
                      ((0x7fffffeU & ((IData)((__PVT__mulRecFNToRaw__DOT__sigProd 
                                               >> 0x16U)) 
                                      << 1U)) | (0U 
                                                 != 
                                                 (0x3fffffU 
                                                  & (IData)(__PVT__mulRecFNToRaw__DOT__sigProd)))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(vlSelfRef.__PVT__out_isNaN));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_1[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_3[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_7[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_9[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_11[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_15[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_17[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_19[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_21[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_23[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_25[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_27[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_29[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_31[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_33[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_35[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_37[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_39[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_41[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_43[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_45[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_47[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_49[4U]) >> 2U)))))));
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
    vlSelfRef.__VdfgRegularize_h038a369a_0_64 = (((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                  | (IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11))
                                                  ? 
                                                 (0x3fffffU 
                                                  & roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7)
                                                  : 0U);
    vlSelfRef.__VdfgRegularize_h038a369a_0_63 = ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                 | ((IData)(roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11) 
                                                    & (roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_7 
                                                       >> 0x16U)));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_pc3_xor_mulRecFN__E8_S18___act_comb__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BLR__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*26:0*/ __PVT__out_sig;
    __PVT__out_sig = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isInfA;
    __PVT__mulRecFNToRaw__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isSigNaNA;
    __PVT__mulRecFNToRaw__DOT__isSigNaNA = 0;
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
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    vlSelfRef.__PVT__mulRecFNToRaw__DOT__signA = (1U 
                                                  & ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__out_isNaN)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__0__KET____DOT__G_LAYER_INST_L0__DOT__L__DOT__G_NEURON__BRA__0__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                                       ? 
                                                      VL_SHIFTR_III(32,32,32, vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee, 0x1fU)
                                                       : 
                                                      ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__mulRecFNToRaw__DOT__isNaNB)
                                                        ? (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign)
                                                        : 1U))
                                                      : 
                                                     ((vlSymsp->TOP.tb_pc3_xor__DOT__alpha_ieee 
                                                       >> 0x1fU) 
                                                      ^ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_ERR.__PVT__out_sign))));
    vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp 
        = (0x1ffU & (((~ (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                            ? 0x40U : 0U) | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__out_isZero) 
                                              | VL_GTS_III(32, 0x6bU, 
                                                           VL_EXTENDS_II(32,11, (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))))
                                              ? 0x1c0U
                                              : 0U))) 
                      & (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                          ? 0x180U : 0U) | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                             ? 0x1c0U
                                             : 0U))));
    vlSelfRef.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4 
        = (((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__VdfgRegularize_h038a369a_0_63) 
            << 0x16U) | vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__VdfgRegularize_h038a369a_0_64);
    __PVT__mulRecFNToRaw__DOT__isInfA = ((~ ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                             >> 6U)) 
                                         & (3U == VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 7U)));
    __PVT__mulRecFNToRaw__DOT__isSigNaNA = ((~ (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__VdfgRegularize_h038a369a_0_63)) 
                                            & (0x1c0U 
                                               == (0x1c0U 
                                                   & (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp))));
    vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNA = (
                                                   (3U 
                                                    == 
                                                    VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp) 
                                                      >> 6U));
    __PVT__out_sig = ((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNA)
                       ? (0x3000000U | (((IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNA)
                                          ? vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_AE.__VdfgRegularize_h038a369a_0_64
                                          : 0U) << 2U))
                       : ((0x7fffffeU & ((IData)((0x3ffffffULL 
                                                  & (VL_SHIFTL_QQI(48,48,32, (QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                                << 0x17U) 
                                                                                | vlSelfRef.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))), 0x17U) 
                                                     >> 0x16U))) 
                                         << 1U)) | 
                          (0U != (0x3fffffU & (IData)(
                                                      (0xffffffffffffULL 
                                                       & VL_SHIFTL_QQI(48,48,32, (QData)((IData)(
                                                                                (((0U 
                                                                                != 
                                                                                VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
                                                                                << 0x17U) 
                                                                                | vlSelfRef.mulRecFNToRaw__DOT____Vcellinp__propagateNaN____pinNumber4))), 0x17U)))))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__mulRecFNToRaw__DOT__isSigNaNA) 
           | (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__isNaNA));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, 
                                               (0x3ffU 
                                                & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_1[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_3[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_7[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_9[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_11[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_15[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_17[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_19[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_21[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_23[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_25[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_27[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_29[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_31[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_33[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_35[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_37[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_39[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_41[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_43[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_45[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_47[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_49[4U]) >> 2U)))))));
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
                                           VL_EXTENDS_II(10,10, 
                                                         (0x3ffU 
                                                          & VL_EXTENDS_II(10,10, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp)))))) 
                     + (0x3ffffffU & VL_SHIFTR_III(26,26,32, __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__roundedSig, 0x18U))));
    vlSelfRef.roundRawOut__DOT__roundAnyRawFNToRecFN__DOT____VdfgRegularize_h9ea1157b_0_11 
        = ((0U != VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)) 
           & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))));
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__mulRecFNToRaw__DOT__isInfA) 
           | (((~ (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
               & ((~ (IData)(__PVT__mulRecFNToRaw__DOT__isInfA)) 
                  & (0U != VL_SHIFTR_III(32,32,32, (IData)(vlSelfRef.__PVT__mulRecFNToRaw__DOT__recFNToRawFN_a__DOT__exp), 6U)))) 
              & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                   VL_EXTENDS_II(32,11, (IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp)), 7U))));
}

VL_INLINE_OPT void Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0(Vtb_pc3_xor_mulRecFN__E8_S18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_pc3_xor_mulRecFN__E8_S18___nba_sequent__TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__MUL_BACKJ__0\n"); );
    Vtb_pc3_xor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*32:0*/ a;
    a = 0;
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
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isNaNA;
    __PVT__mulRecFNToRaw__DOT__isNaNA = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__isInfA;
    __PVT__mulRecFNToRaw__DOT__isInfA = 0;
    CData/*0:0*/ __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc;
    __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc = 0;
    QData/*47:0*/ __PVT__mulRecFNToRaw__DOT__sigProd;
    __PVT__mulRecFNToRaw__DOT__sigProd = 0;
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
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_9;
    VlWide<17>/*543:0*/ __Vtemp_11;
    VlWide<17>/*543:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_19;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_27;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_31;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<17>/*543:0*/ __Vtemp_35;
    VlWide<17>/*543:0*/ __Vtemp_37;
    VlWide<17>/*543:0*/ __Vtemp_39;
    VlWide<17>/*543:0*/ __Vtemp_41;
    VlWide<17>/*543:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_45;
    VlWide<17>/*543:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_49;
    // Body
    a = ((2U >= (3U & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0))
          ? vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__theta
         [(3U & vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT____VdfgRegularize_hc7cd2ff7_0_0)]
          : 0ULL);
    vlSelfRef.__PVT__out_isZero = ((0U == VL_SHIFTR_III(32,32,32, 
                                                        (0x1ffU 
                                                         & (IData)(
                                                                   (a 
                                                                    >> 0x17U))), 6U)) 
                                   | (0U == VL_SHIFTR_III(32,32,32, 
                                                          (0x1ffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                                      >> 0x17U))), 6U)));
    __PVT__out_sExp = (0x3ffU & ((VL_EXTENDS_II(10,10, 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (a 
                                                            >> 0x17U)))) 
                                  + VL_EXTENDS_II(10,10, 
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                              >> 0x17U))))) 
                                 - (IData)(0x100U)));
    __PVT__mulRecFNToRaw__DOT__sigProd = (0xffffffffffffULL 
                                          & ((QData)((IData)(
                                                             (((0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              (0x1ffU 
                                                                               & (IData)(
                                                                                (a 
                                                                                >> 0x17U))), 6U)) 
                                                               << 0x17U) 
                                                              | (0x7fffffU 
                                                                 & (IData)(a))))) 
                                             * (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h0055b36c_0_1))));
    __PVT__mulRecFNToRaw__DOT__isNaNA = ((3U == VL_SHIFTR_III(32,32,32, 
                                                              (0x1ffU 
                                                               & (IData)(
                                                                         (a 
                                                                          >> 0x17U))), 7U)) 
                                         & (IData)(
                                                   (a 
                                                    >> 0x1dU)));
    __PVT__mulRecFNToRaw__DOT__isInfA = ((~ (IData)(
                                                    (a 
                                                     >> 0x1dU))) 
                                         & (3U == VL_SHIFTR_III(32,32,32, 
                                                                (0x1ffU 
                                                                 & (IData)(
                                                                           (a 
                                                                            >> 0x17U))), 7U)));
    __PVT__out_isInf = ((IData)(__PVT__mulRecFNToRaw__DOT__isInfA) 
                        | (IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__addRecFNToRaw__DOT__isInfB));
    __PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc 
        = (((IData)(__PVT__mulRecFNToRaw__DOT__isInfA) 
            & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                              & (IData)(
                                                        (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                         >> 0x17U))), 6U))) 
           | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__addRecFNToRaw__DOT__isInfB) 
              & (0U == VL_SHIFTR_III(32,32,32, (0x1ffU 
                                                & (IData)(
                                                          (a 
                                                           >> 0x17U))), 6U))));
    __PVT__invalidExc = ((IData)((0xe0000000ULL == 
                                  (0xe0400000ULL & a))) 
                         | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__addRecFNToRaw__DOT__isSigNaNB) 
                            | (IData)(__PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc)));
    __PVT__out_isNaN = ((IData)(__PVT__mulRecFNToRaw__DOT__isNaNA) 
                        | ((IData)(vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__PVT__addRecFNToRaw__DOT__isNaNB) 
                           | (IData)(__PVT__mulRecFNToRaw__DOT__notSigNaN_invalidExc)));
    if (__PVT__out_isNaN) {
        vlSelfRef.__PVT__out_sign = (1U & ((IData)(__PVT__mulRecFNToRaw__DOT__isNaNA)
                                            ? (1U & (IData)(
                                                            (a 
                                                             >> 0x20U)))
                                            : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_65));
        __PVT__out_sig = (0x3000000U | (0xfffffcU & 
                                        (((IData)(__PVT__mulRecFNToRaw__DOT__isNaNA)
                                           ? (IData)(a)
                                           : vlSymsp->TOP__tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__SUB_BME.__VdfgRegularize_h038a369a_0_66) 
                                         << 2U)));
    } else {
        vlSelfRef.__PVT__out_sign = (1U & ((IData)(
                                                   (a 
                                                    >> 0x20U)) 
                                           ^ (IData)(
                                                     (vlSymsp->TOP.tb_pc3_xor__DOT__uut__DOT__G_LAYER__BRA__2__KET____DOT__G_LAYER_INST_LX__DOT__L__DOT__G_NEURON__BRA__1__KET____DOT__u_core__DOT__eps_i 
                                                      >> 0x20U))));
        __PVT__out_sig = ((0x7fffffeU & ((IData)((__PVT__mulRecFNToRaw__DOT__sigProd 
                                                  >> 0x16U)) 
                                         << 1U)) | 
                          (0U != (0x3fffffU & (IData)(__PVT__mulRecFNToRaw__DOT__sigProd))));
    }
    vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(__PVT__invalidExc) | (IData)(__PVT__out_isNaN));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_1, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_3, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_5, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_7, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_9, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_11, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_13, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_15, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_17, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_19, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_21, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_23, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_25, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_27, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_29, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_31, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_33, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_35, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_37, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_39, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_41, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_43, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_45, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_47, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_49, Vtb_pc3_xor__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ (VL_EXTENDS_II(9,10, (IData)(__PVT__out_sExp)) 
                                 | ((IData)(vlSelfRef.__PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
                                     ? 0x100U : 0U)))));
    __PVT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((((((0x1000000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_1[3U]) << 0xeU)) 
               | (0x800000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_3[3U]) << 0xcU))) 
              | ((0x400000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_5[3U]) << 0xaU)) 
                 | (0x200000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_7[3U]) 
                                 << 8U)))) | ((0x100000U 
                                               & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                   & __Vtemp_9[3U]) 
                                                  << 6U)) 
                                              | ((0x80000U 
                                                  & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                      & __Vtemp_11[3U]) 
                                                     << 4U)) 
                                                 | (0x40000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_13[3U]) 
                                                       << 2U))))) 
            | (((0x20000U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_15[3U])) | (
                                                   (0x10000U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_17[3U]) 
                                                       >> 2U)) 
                                                   | (0x8000U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_19[3U]) 
                                                         >> 4U)))) 
               | ((0x4000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_21[3U]) >> 6U)) 
                  | ((0x2000U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                  & __Vtemp_23[3U]) 
                                 >> 8U)) | (0x1000U 
                                            & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_25[3U]) 
                                               >> 0xaU)))))) 
           | ((((0x800U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                            & __Vtemp_27[3U]) >> 0xcU)) 
                | ((0x400U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_29[3U]) >> 0xeU)) 
                   | (0x200U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                 & __Vtemp_31[3U]) 
                                >> 0x10U)))) | ((0x100U 
                                                 & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_33[3U]) 
                                                    >> 0x12U)) 
                                                | ((0x80U 
                                                    & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_35[3U]) 
                                                       >> 0x14U)) 
                                                   | (0x40U 
                                                      & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & __Vtemp_37[3U]) 
                                                         >> 0x16U))))) 
              | (((0x20U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_39[3U]) >> 0x18U)) 
                  | ((0x10U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                                & __Vtemp_41[3U]) >> 0x1aU)) 
                     | (8U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_43[3U]) >> 0x1cU)))) 
                 | ((4U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                            & __Vtemp_45[4U]) << 2U)) 
                    | ((2U & (Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                              & __Vtemp_47[4U])) | 
                       (1U & ((Vtb_pc3_xor__ConstPool__CONST_h00a543f7_0[4U] 
                               & __Vtemp_49[4U]) >> 2U)))))));
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
