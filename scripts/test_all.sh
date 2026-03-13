#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# ----------------------------------------------------------------------
# Reference tests
# ----------------------------------------------------------------------
"$ROOT/scripts/run_test.sh" tb/tb_final_function.sv tb_final_function
"$ROOT/scripts/run_test.sh" tb/tb_final_xor.sv tb_final_xor

# ----------------------------------------------------------------------
# Scaling tests using the same tb_scale_function.sv
# ----------------------------------------------------------------------

# 2 -> 4 -> 3
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=3 -GK1=4 -GK2=2 -GMAX_K=8 \
  -- \
  +CSV=runs/scale_2_4_3.csv \
  +NX0=6 +NX1=6 \
  +ALPHA=0.05 +GAMMA=0.10 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \
  +CONV_MSE=1e-2

# 4 -> 8 -> 4
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=4 -GK1=8 -GK2=4 -GMAX_K=8 \
  -- \
  +CSV=runs/scale_4_8_4.csv \
  +NX0=4 +NX1=4 +NX2=4 +NX3=4 \
  +ALPHA=0.05 +GAMMA=0.10 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \
  +CONV_MSE=1e-2

# 8 -> 16 -> 8
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=8 -GK1=16 -GK2=8 -GMAX_K=16 \
  -- \
  +CSV=runs/scale_8_16_8.csv \
  +NX0=2 +NX1=2 +NX2=2 +NX3=2 +NX4=2 +NX5=2 +NX6=2 +NX7=2 \
  +ALPHA=0.02 +GAMMA=0.05 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \
  +CONV_MSE=1e-2

echo
echo "All reference and scaling tests passed."