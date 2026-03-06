#!/usr/bin/env bash
set -euo pipefail

TB="${1:?usage: ./scripts/run_test.sh tb/<test>.sv <top_module>}"
TOP="${2:?usage: ./scripts/run_test.sh tb/<test>.sv <top_module>}"

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
"$ROOT/scripts/check_env.sh"
cd "$ROOT"

COMMON_FLAGS=(
  -sv --binary --timing
  -Wno-fatal
  -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-DECLFILENAME
  -Wno-GENUNNAMED -Wno-VARHIDDEN -Wno-PROCASSINIT -Wno-UNUSEDSIGNAL
  -Wno-UNOPTFLAT -Wno-UNSIGNED -Wno-UNDRIVEN -Wno-LATCH
  -I"$ROOT/HardFloat/source" -I"$ROOT/HardFloat/source/8086-SSE"
)

COMMON_SRCS=(
  "$ROOT/HardFloat/source/HardFloat_primitives.v"
  "$ROOT/HardFloat/source/HardFloat_consts.vi"
  "$ROOT/HardFloat/source/HardFloat_localFuncs.vi"
  "$ROOT/HardFloat/source/HardFloat_rawFN.v"
  "$ROOT/HardFloat/source/addRecFN.v"
  "$ROOT/HardFloat/source/compareRecFN.v"
  "$ROOT/HardFloat/source/divSqrtRecFN_small.v"
  "$ROOT/HardFloat/source/fNToRecFN.v"
  "$ROOT/HardFloat/source/iNToRecFN.v"
  "$ROOT/HardFloat/source/isSigNaNRecFN.v"
  "$ROOT/HardFloat/source/mulAddRecFN.v"
  "$ROOT/HardFloat/source/mulRecFN.v"
  "$ROOT/HardFloat/source/recFNToFN.v"
  "$ROOT/HardFloat/source/recFNToIN.v"
  "$ROOT/HardFloat/source/recFNToRecFN.v"
  "$ROOT/HardFloat/source/8086-SSE/HardFloat_specialize.v"

  "$ROOT/rtl/hf_mac32.sv"
  "$ROOT/rtl/activation_relu32.sv"
  "$ROOT/rtl/nc_neuralcomputer.sv"
)

DPI="$ROOT/tb/dpi_casts.cc"

verilator "${COMMON_FLAGS[@]}" \
  "${COMMON_SRCS[@]}" \
  "$ROOT/$TB" \
  --top-module "$TOP" \
  --exe "$DPI"

"$ROOT/obj_dir/V${TOP}"