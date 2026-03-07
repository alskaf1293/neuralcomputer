# Mortal Computer RTL Simulation

This repository contains the SystemVerilog implementation and verification tests for the Mortal Computer architecture.

The repository includes:

- RTL modules
- HardFloat dependencies
- Verilator simulation scripts
- Reference testbenches

The goal is fully reproducible functional simulation using Verilator.

---

# Quick Start (Reproduce Results)

Clone the repository and run the reference tests.

```bash
git clone https://github.com/alskaf1293/neuralcomputer
cd neuralcomputer
./scripts/test_all.sh
```

If everything is working correctly, you should see:

```
All reference tests passed.
```

The tests verify the full functional behavior of the system.

---

# Requirements

The simulation environment requires:

- Verilator (5.x recommended)
- g++
- bash

## Tested Environment

Reference simulations were verified using:

- Verilator 5.038 (2025-07-08)
- Apple clang 16.0.0 (g++ compatible)
- macOS 15.3.1 (arm64)

Only the following external tools are required:

- Verilator
- a C++ compiler (g++ / clang++)
- bash

---

# Installation

## Ubuntu / Debian

```bash
sudo apt update
sudo apt install -y verilator g++ make bash
```
## macOS

Install using Homebrew:

```bash
brew install verilator
```

---

# Running the Tests

The repository provides a single command to run all verification tests.

```bash
./scripts/test_all.sh
```

This script runs the following reference simulations:

```bash
tb/tb_final_function.sv  
tb/tb_final_xor.sv
```

Each testbench is compiled with Verilator and executed automatically.

If all tests pass, the script prints:

```bash
All reference tests passed.
```

---

# Repository Structure

.
├── rtl/                 RTL modules  
│  
├── tb/                  SystemVerilog testbenches  
│   ├── tb_final_function.sv  
│   ├── tb_final_xor.sv  
│   └── dpi_casts.cc  
│  
├── HardFloat/           Berkeley HardFloat library  
│  
├── scripts/             Simulation scripts  
│   ├── check_env.sh  
│   ├── run_test.sh  
│   └── test_all.sh  
│  
├── vlt                  Verilator wrapper script  
│  
└── README.md  

---

# Simulation Flow

The simulation pipeline works as follows:

1. test_all.sh launches the reference tests
2. run_test.sh compiles the selected testbench
3. Verilator generates a C++ simulation model
4. The model is compiled and executed
5. The testbench verifies functional correctness

All required sources and dependencies are included in the repository.

---

# HardFloat

Floating point operations use the Berkeley HardFloat library.

HardFloat source code is included directly in the repository under:

```bash
HardFloat/source/
```

No additional installation is required.

---

# Troubleshooting

## Permission Denied When Running Scripts

If you see:

```bash
permission denied
```

run:

```bash
chmod +x scripts/*.sh
```

---

## Verilator Not Found

Verify that Verilator is installed:

```bash
verilator --version
```

If not installed, follow the installation instructions above.

---

# Reproducibility Notes

This repository is designed so that:

- all dependencies are included
- simulation is deterministic
- results can be reproduced using a single command

The only required external tools are:

Verilator  
g++  
bash  

---

# License

See LICENSE file.
