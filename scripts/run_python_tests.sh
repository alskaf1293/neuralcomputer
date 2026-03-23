#!/usr/bin/env bash
# run_python_tests.sh — reproduce all python_runs/ CSVs using Python RTL models.
# Usage: ./scripts/run_python_tests.sh [--fast]
#   --fast  uses reduced eval ticks for quick sanity check

set -e
cd "$(dirname "$0")/.."

FAST=${1:-}
if [[ "$FAST" == "--fast" ]]; then
  EVAL="--eval-settle 500"
else
  EVAL=""
fi

echo "=== tb_final_function (2→4→3, ReLU) ==="
python3 python_rtl/tb_final_function.py

echo ""
echo "=== tb_pc3_tanh_reg (2→2→1, TANH) ==="
python3 python_rtl/tb_pc3_tanh_reg.py

echo ""
echo "=== tb_scale_function: 2→4→3 ==="
python3 python_rtl/tb_scale_function.py --configs 2_4_3 $EVAL

echo ""
echo "=== tb_scale_function: 4→8→4 ==="
python3 python_rtl/tb_scale_function.py --configs 4_8_4 $EVAL

echo ""
echo "=== tb_scale_function: 8→16→8 (may diverge — matches RTL behaviour) ==="
python3 python_rtl/tb_scale_function.py --configs 8_16_8 $EVAL

echo ""
echo "All Python testbench reproductions done. CSVs saved to python_runs/"
