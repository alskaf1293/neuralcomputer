#!/usr/bin/env bash
set -euo pipefail

need_cmd() {
  if ! command -v "$1" >/dev/null 2>&1; then
    echo "ERROR: required command '$1' not found."
    return 1
  fi
}

missing=0

need_cmd bash || missing=1
need_cmd verilator || missing=1
need_cmd g++ || missing=1

if [[ "$missing" -ne 0 ]]; then
  echo
  echo "Install requirements:"
  echo "  Ubuntu/Debian: sudo apt update && sudo apt install -y verilator g++ make bash"
  echo "  macOS: brew install verilator"
  exit 1
fi

echo "Environment OK"
verilator --version
g++ --version | head -n 1