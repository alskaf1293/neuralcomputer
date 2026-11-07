#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

usage() {
  cat <<'EOF'
Usage:
  ./scripts/run_test.sh env
  ./scripts/run_test.sh rtl TESTBENCH TOP [VERILATOR_ARGS...] -- [SIM_ARGS...]
  ./scripts/run_test.sh all
  ./scripts/run_test.sh python [--fast]

Examples:
  ./scripts/run_test.sh rtl tb/tb_final_function.sv tb_final_function
  ./scripts/run_test.sh all
  ./scripts/run_test.sh python --fast
EOF
}

check_env() {
  local missing=0

  for tool in bash verilator g++ make; do
    if ! command -v "$tool" >/dev/null 2>&1; then
      echo "ERROR: required command '$tool' not found." >&2
      missing=1
    fi
  done

  if [[ "$missing" -ne 0 ]]; then
    echo "Enter the project environment with: nix develop path:." >&2
    return 1
  fi

  echo "Environment OK"
  verilator --version
  g++ --version | head -n 1
}

run_rtl() {
  local tb="${1:?Missing testbench path}"
  local top="${2:?Missing top module}"
  shift 2

  local -a verilator_extra=()
  local -a sim_extra=()
  local seen_separator=0

  for arg in "$@"; do
    if [[ "$arg" == "--" && "$seen_separator" -eq 0 ]]; then
      seen_separator=1
    elif [[ "$seen_separator" -eq 0 ]]; then
      verilator_extra+=("$arg")
    else
      sim_extra+=("$arg")
    fi
  done

  local -a common_flags=(
    -sv --binary --timing
    -Wno-fatal
    -Wno-TIMESCALEMOD -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND
    -Wno-DECLFILENAME -Wno-GENUNNAMED -Wno-VARHIDDEN
    -Wno-UNUSEDSIGNAL -Wno-UNOPTFLAT -Wno-UNSIGNED
    -Wno-UNDRIVEN -Wno-LATCH
    -I"$ROOT/HardFloat/source"
    -I"$ROOT/HardFloat/source/8086-SSE"
  )

  local -a common_sources=(
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
    "$ROOT/rtl/nc_neuralcomputer.sv"
  )

  check_env

  verilator "${common_flags[@]}" \
    "${verilator_extra[@]}" \
    "${common_sources[@]}" \
    "$ROOT/$tb" \
    --top-module "$top" \
    --exe "$ROOT/tb/dpi_casts.cc"

  "$ROOT/obj_dir/V${top}" "${sim_extra[@]}"
}

run_all() {
  run_rtl tb/tb_final_function.sv tb_final_function
  run_rtl tb/tb_pc3_tanh_reg.sv tb_pc3_tanh_reg

  local config k0 k1 k2 max_k
  for config in "3 4 2 8" "4 8 4 8" "8 16 8 16"; do
    read -r k0 k1 k2 max_k <<< "$config"

    run_rtl tb/tb_scale_function.sv tb_scale_function \
      "-GK0=$k0" "-GK1=$k1" "-GK2=$k2" "-GMAX_K=$max_k" \
      -- \
      "+CSV=runs/scale_${k2}_${k1}_${k0}.csv" \
      +N_SAMPLES=256 +SEED=0 \
      +ALPHA=0.01 +GAMMA=0.04 \
      +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25
  done

  echo "All reference and scaling tests passed."
}

run_python() {
  local -a eval_args=()

  if [[ "${1:-}" == "--fast" ]]; then
    eval_args=(--eval-settle 500)
  elif [[ $# -gt 0 ]]; then
    echo "Unknown python option: $1" >&2
    return 1
  fi

  if [[ ! -d "$ROOT/python_rtl" ]]; then
    echo "ERROR: python_rtl/ is missing; these tests need it restored." >&2
    return 1
  fi

  python3 python_rtl/tb_final_function.py
  python3 python_rtl/tb_pc3_tanh_reg.py
  python3 python_rtl/tb_scale_function.py --configs 2_4_3 "${eval_args[@]}"
  python3 python_rtl/tb_scale_function.py --configs 4_8_4 "${eval_args[@]}"
  python3 python_rtl/tb_scale_function.py --configs 8_16_8 "${eval_args[@]}"
}

mode="${1:-}"
if [[ $# -gt 0 ]]; then
  shift
fi

case "$mode" in
  env)    check_env ;;
  rtl)    run_rtl "$@" ;;
  all)    run_all ;;
  python) run_python "$@" ;;
  *)      usage; exit 1 ;;
esac