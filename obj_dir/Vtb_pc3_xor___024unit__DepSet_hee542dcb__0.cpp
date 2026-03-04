// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pc3_xor.h for the primary calling header

#include "Vtb_pc3_xor__pch.h"
#include "Vtb_pc3_xor__Syms.h"
#include "Vtb_pc3_xor___024unit.h"

extern "C" unsigned int real_to_f32(double r);

VL_INLINE_OPT void Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit(double r, IData/*31:0*/ &real_to_f32__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_pc3_xor___024unit____Vdpiimwrap_real_to_f32_TOP____024unit\n"); );
    // Body
    double r__Vcvt;
    r__Vcvt = r;
    unsigned int real_to_f32__Vfuncrtn__Vcvt;
    real_to_f32__Vfuncrtn__Vcvt = real_to_f32(r__Vcvt);
    real_to_f32__Vfuncrtn = real_to_f32__Vfuncrtn__Vcvt;
}

extern "C" double f32_to_real(unsigned int bits);

VL_INLINE_OPT void Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit(IData/*31:0*/ bits, double &f32_to_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_pc3_xor___024unit____Vdpiimwrap_f32_to_real_TOP____024unit\n"); );
    // Body
    unsigned int bits__Vcvt;
    bits__Vcvt = bits;
    double f32_to_real__Vfuncrtn__Vcvt;
    f32_to_real__Vfuncrtn__Vcvt = f32_to_real(bits__Vcvt);
    f32_to_real__Vfuncrtn = f32_to_real__Vfuncrtn__Vcvt;
}
