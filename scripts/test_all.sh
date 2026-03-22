#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# ----------------------------------------------------------------------
# Reference tests
# ----------------------------------------------------------------------
"$ROOT/scripts/run_test.sh" tb/tb_final_function.sv tb_final_function
"$ROOT/scripts/run_test.sh" tb/tb_pc3_tanh_reg.sv tb_pc3_tanh_reg

# ----------------------------------------------------------------------
# Scaling tests using the same tb_scale_function.sv
# ----------------------------------------------------------------------

# 2 -> 4 -> 3
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=3 -GK1=4 -GK2=2 -GMAX_K=8 \
  -- \
  +CSV=runs/scale_2_4_3.csv \
  +N_SAMPLES=256 +SEED=0 \
  +ALPHA=0.01 +GAMMA=0.04 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \

# 4 -> 8 -> 4
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=4 -GK1=8 -GK2=4 -GMAX_K=8 \
  -- \
  +CSV=runs/scale_4_8_4.csv \
  +N_SAMPLES=256 +SEED=0 \
  +ALPHA=0.01 +GAMMA=0.04 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \

# 8 -> 16 -> 8
"$ROOT/scripts/run_test.sh" tb/tb_scale_function.sv tb_scale_function \
  -GK0=8 -GK1=16 -GK2=8 -GMAX_K=16 \
  -- \
  +CSV=runs/scale_8_16_8.csv \
  +N_SAMPLES=256 +SEED=0 \
  +ALPHA=0.01 +GAMMA=0.04 \
  +INFER_TICKS=200 +LEARN_TICKS=20 +EVAL_TICKS=300 +EPOCHS=25 \

echo
echo "All reference and scaling tests passed."