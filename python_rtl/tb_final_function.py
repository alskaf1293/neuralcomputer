#!/usr/bin/env python3
"""
tb_final_function.py — Python reproduction of tb/tb_final_function.sv.

Network: top=2 → hidden=4 (ReLU) → bottom=3
K_LUT (bottom→top) = [3, 4, 2]   ACT_LUT = [linear, relu, linear]

Teacher: y = A_gt · ReLU(B_gt · x)   (no bias)

Training schedule per sample:
  INFER_TICKS=200 (alpha=0, gamma=0.10) — inference settle
  LEARN_TICKS=20  (alpha=0.05, gamma=0.10) — weight update

Eval per sample: EVAL_SETTLE=2000 ticks (alpha=0), read bottom state.

Output: runs/pc3_hidden_relu_train.csv   columns: epoch,mse
"""
import numpy as np
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pc_network import PCNet3Layer

# ── network shape ──────────────────────────────────────────────────────────────
K0, K1, K2 = 3, 4, 2

# ── training hyper-parameters ─────────────────────────────────────────────────
ALPHA_R               = 0.05
GAMMA_R               = 0.10
INFER_TICKS_PER_SAMPLE = 200
LEARN_TICKS_PER_SAMPLE = 20
EVAL_SETTLE_TICKS      = 2000
EPOCHS                 = 25

# ── dataset grid ──────────────────────────────────────────────────────────────
NX0, NX1 = 6, 6
X0_LOW, X0_HIGH = -1.2,  1.2
X1_LOW, X1_HIGH = -1.1,  1.1

# ── teacher weights (identical to tb_final_function.sv) ───────────────────────
B_gt = np.array([
    [ 1.00, -0.20],
    [-0.15,  0.95],
    [ 0.70,  0.25],
    [ 0.20,  0.80],
], dtype=np.float64)   # shape (K1, K2) = (4, 2)

A_gt = np.array([
    [ 0.90, -0.45,  0.30,  0.00],
    [-0.70,  0.85,  0.00,  0.25],
    [ 0.50,  0.60, -0.20,  0.35],
], dtype=np.float64)   # shape (K0, K1) = (3, 4)


def build_dataset():
    """6×6 Cartesian grid; y = A_gt · ReLU(B_gt · x)."""
    x_samples = np.zeros((NX0 * NX1, K2))
    y_targets  = np.zeros((NX0 * NX1, K0))
    s = 0
    for ix0 in range(NX0):
        x0 = X0_LOW + (X0_HIGH - X0_LOW) * ix0 / (NX0 - 1)
        for ix1 in range(NX1):
            x1 = X1_LOW + (X1_HIGH - X1_LOW) * ix1 / (NX1 - 1)
            x = np.array([x0, x1])
            h = np.maximum(0.0, B_gt @ x)
            x_samples[s] = x
            y_targets[s]  = A_gt @ h
            s += 1
    return x_samples, y_targets


def mse_dataset(net: PCNet3Layer, x_samples, y_targets) -> float:
    """Evaluate MSE over the full dataset (alpha=0, gamma=GAMMA_R)."""
    net.set_rates(alpha=0.0, gamma=GAMMA_R)
    num_samples = len(x_samples)
    acc = 0.0
    for s in range(num_samples):
        # clamp top only; hidden + bottom free
        for _ in range(EVAL_SETTLE_TICKS):
            net.tick(x_samples[s], y_bottom=None, clamp_top=True, clamp_bottom=False)
        pred = net.x0
        diff = pred - y_targets[s]
        acc += float(np.dot(diff, diff)) / K0
    return acc / num_samples


def main():
    x_samples, y_targets = build_dataset()
    num_samples = len(x_samples)

    net = PCNet3Layer(
        k_lut      = [K0, K1, K2],
        act_lut    = ['linear', 'relu', 'linear'],
        wclip      = 20.0,
        gamma      = GAMMA_R,
        alpha      = ALPHA_R,
        seed       = 0,            # matches gen_theta_init_pkg.py default seed
        rtl_init   = True,         # float32-cast weights to match theta_init_pkg.sv
        gen_k_lut  = [8, 16, 8],   # full block size used by gen_theta_init_pkg.py
    )

    os.makedirs('runs', exist_ok=True)
    csv_path = 'runs/pc3_hidden_relu_train.csv'

    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['epoch', 'mse'])

        mse0 = mse_dataset(net, x_samples, y_targets)
        writer.writerow([0, f'{mse0:.6f}'])
        print(f'[TB] Initial MSE = {mse0:.6f}')
        print(f'[TB] Train dims 2->4->3 hidden ReLU')

        for ep in range(EPOCHS):
            for s in range(num_samples):
                # inference settle (alpha=0)
                net.set_rates(alpha=0.0, gamma=GAMMA_R)
                for _ in range(INFER_TICKS_PER_SAMPLE):
                    net.tick(x_samples[s], y_targets[s],
                             clamp_top=True, clamp_bottom=True)

                # learning ticks (alpha>0)
                net.set_rates(alpha=ALPHA_R, gamma=GAMMA_R)
                for _ in range(LEARN_TICKS_PER_SAMPLE):
                    net.tick(x_samples[s], y_targets[s],
                             clamp_top=True, clamp_bottom=True)

            msep = mse_dataset(net, x_samples, y_targets)
            writer.writerow([ep + 1, f'{msep:.6f}'])
            print(f'[TB] Epoch {ep}  MSE = {msep:.6f}')

    print(f'\nSaved: {csv_path}')


if __name__ == '__main__':
    main()
