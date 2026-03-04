# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_pc3_xor.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtb_pc3_xor \
  Vtb_pc3_xor___024root__DepSet_hd5fd3b17__0 \
  Vtb_pc3_xor___024root__DepSet_hd5fd3b17__1 \
  Vtb_pc3_xor___024root__DepSet_hd5fd3b17__2 \
  Vtb_pc3_xor___024root__DepSet_h0f22335c__0 \
  Vtb_pc3_xor___024unit__DepSet_hee542dcb__0 \
  Vtb_pc3_xor_activation32__Kz6__DepSet_h27b89422__0 \
  Vtb_pc3_xor_activation32__Kz6__DepSet_hc1eb3172__0 \
  Vtb_pc3_xor_activation32__Kz6__DepSet_hd4537d46__0 \
  Vtb_pc3_xor_mulRecFN__E8_S18__DepSet_h953bd7bb__0 \
  Vtb_pc3_xor_mulRecFN__E8_S18__DepSet_h953bd7bb__1 \
  Vtb_pc3_xor_hf_f2rec32__DepSet_heac0443c__0 \
  Vtb_pc3_xor_addRecFN__E8_S18__DepSet_hf51b7783__0 \
  Vtb_pc3_xor_addRecFN__E8_S18__DepSet_hf51b7783__1 \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_he6a3b397__0 \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_he6a3b397__1 \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_he6a3b397__2 \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_he6a3b397__3 \
  Vtb_pc3_xor__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtb_pc3_xor__ConstPool_0 \
  Vtb_pc3_xor___024root__Slow \
  Vtb_pc3_xor___024root__DepSet_hd5fd3b17__0__Slow \
  Vtb_pc3_xor___024root__DepSet_h0f22335c__0__Slow \
  Vtb_pc3_xor___024unit__Slow \
  Vtb_pc3_xor___024unit__DepSet_hf38b4200__0__Slow \
  Vtb_pc3_xor_activation32__Kz6__Slow \
  Vtb_pc3_xor_activation32__Kz6__DepSet_h27b89422__0__Slow \
  Vtb_pc3_xor_mulRecFN__E8_S18__Slow \
  Vtb_pc3_xor_mulRecFN__E8_S18__DepSet_h4e6117f0__0__Slow \
  Vtb_pc3_xor_hf_f2rec32__Slow \
  Vtb_pc3_xor_hf_f2rec32__DepSet_heac0443c__0__Slow \
  Vtb_pc3_xor_hf_f2rec32__DepSet_heff7a873__0__Slow \
  Vtb_pc3_xor_addRecFN__E8_S18__Slow \
  Vtb_pc3_xor_addRecFN__E8_S18__DepSet_hf51b7783__0__Slow \
  Vtb_pc3_xor_addRecFN__E8_S18__DepSet_hee4077c8__0__Slow \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__Slow \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_he6a3b397__0__Slow \
  Vtb_pc3_xor_mulAddRecFN__E8_S18__DepSet_hfbd8bbdc__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtb_pc3_xor__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtb_pc3_xor__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
