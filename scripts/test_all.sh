#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

"$ROOT/scripts/run_test.sh" tb/tb_final_function.sv tb_final_function
"$ROOT/scripts/run_test.sh" tb/tb_final_xor.sv tb_final_xor

echo
echo "All reference tests passed."