// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pc3_xor.h for the primary calling header

#ifndef VERILATED_VTB_PC3_XOR___024UNIT_H_
#define VERILATED_VTB_PC3_XOR___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pc3_xor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pc3_xor___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_pc3_xor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_pc3_xor___024unit(Vtb_pc3_xor__Syms* symsp, const char* v__name);
    ~Vtb_pc3_xor___024unit();
    VL_UNCOPYABLE(Vtb_pc3_xor___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
