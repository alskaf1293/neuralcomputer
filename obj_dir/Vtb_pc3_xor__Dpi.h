// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_PC3_XOR__DPI_H_
#define VERILATED_VTB_PC3_XOR__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at tb/tb_final_xor.sv:30:37
    extern double f32_to_real(unsigned int bits);
    // DPI import at tb/tb_final_xor.sv:29:38
    extern unsigned int real_to_f32(double r);

#ifdef __cplusplus
}
#endif

#endif  // guard
