#!/usr/bin/env python3
"""
tb_pc3_tanh_reg.py — Python reproduction of tb/tb_pc3_tanh_reg.sv.

Network: top=2 → hidden=2 (TANH) → bottom=1
K_LUT (bottom→top) = [1, 2, 2]   ACT_LUT = [linear, tanh, linear]

Teacher: y = A_gt · tanh(B_gt · x + b1_gt) + b2_gt

Training schedule per sample:
  INFER_TICKS=200 (alpha=0, gamma=0.10) — inference settle
  LEARN_TICKS=80  (alpha=0.02, gamma=0.10) — weight update

Eval per sample: EVAL_SETTLE=250 ticks (alpha=0), read bottom neuron 0.

Output: python_runs/pc3_tanh_reg.csv   columns: epoch,mse
"""
import numpy as np
import csv
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pc_network import PCNet3Layer

# ── network shape ──────────────────────────────────────────────────────────────
K0, K1, K2 = 1, 2, 2

# ── training hyper-parameters ─────────────────────────────────────────────────
ALPHA_R               = 0.02
GAMMA_R               = 0.10
INFER_TICKS_PER_SAMPLE = 200
LEARN_TICKS_PER_SAMPLE = 80
EVAL_SETTLE_TICKS      = 250
EPOCHS                 = 25
NUM_SAMPLES            = 64

# ── teacher (identical to tb_pc3_tanh_reg.sv) ─────────────────────────────────
B_gt  = np.array([[ 1.0, -0.6],
                   [ 0.5,  0.9]], dtype=np.float64)   # (K1, K2)
A_gt  = np.array([ 1.2, -0.8],   dtype=np.float64)   # (K1,) → scalar output
b1_gt = np.array([ 0.0,  1.0],   dtype=np.float64)   # hidden bias
b2_gt = 0.0                                            # output bias


def build_dataset():
    """64 samples along a diagonal line in R²; y = A·tanh(B·x + b1) + b2."""
    x_samp = np.zeros((NUM_SAMPLES, K2))
    y_samp = np.zeros(NUM_SAMPLES)
    for s in range(NUM_SAMPLES):
        t  = s / (NUM_SAMPLES - 1)
        x1 = -1.0 + 2.0 * t
        x2 =  1.0 - 2.0 * t
        x_samp[s] = [x1, x2]
        h = np.tanh(B_gt @ np.array([x1, x2]) + b1_gt)
        y_samp[s] = float(np.dot(A_gt, h)) + b2_gt
    return x_samp, y_samp


def mse_dataset(net: PCNet3Layer, x_samp, y_samp) -> float:
    """Evaluate MSE; top clamped, hidden + bottom free."""
    net.set_rates(alpha=0.0, gamma=GAMMA_R)
    acc = 0.0
    for s in range(NUM_SAMPLES):
        # K0=1 so y_bottom not clamped, bottom neuron 0 freely settles
        x2 = x_samp[s]
        for _ in range(EVAL_SETTLE_TICKS):
            net.tick(x2, y_bottom=None, clamp_top=True, clamp_bottom=False)
        pred = float(net.x0[0])
        diff = pred - y_samp[s]
        acc += diff * diff           # K0=1, so /K0 = /1
    return acc / NUM_SAMPLES


def main():
    x_samp, y_samp = build_dataset()

    net = PCNet3Layer(
        k_lut     = [K0, K1, K2],
        act_lut   = ['linear', 'tanh', 'linear'],
        wclip     = 20.0,
        gamma     = GAMMA_R,
        alpha     = ALPHA_R,
        seed      = 0,
        rtl_init  = True,
        gen_k_lut = [8, 16, 8],
    )

    os.makedirs('python_runs', exist_ok=True)
    csv_path = 'python_runs/pc3_tanh_reg.csv'

    print(f'[TB] Teacher: y = A_gt * tanh(B_gt * x + b1_gt) + b2_gt')
    print(f'[TB] A_gt = {A_gt},  b2_gt = {b2_gt}')
    print(f'[TB] b1_gt = {b1_gt}')
    print(f'[TB] B_gt row0 = {B_gt[0]},  row1 = {B_gt[1]}')

    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['epoch', 'mse'])

        mse0 = mse_dataset(net, x_samp, y_samp)
        writer.writerow([0, f'{mse0:.6f}'])
        print(f'[TB] Initial MSE = {mse0:.6f}')
        print(f'[TB] Begin training (2->2->1, top LINEAR + hidden TANH)')

        for ep in range(EPOCHS):
            for s in range(NUM_SAMPLES):
                y_target = np.array([y_samp[s]])

                # inference settle (alpha=0)
                net.set_rates(alpha=0.0, gamma=GAMMA_R)
                for _ in range(INFER_TICKS_PER_SAMPLE):
                    net.tick(x_samp[s], y_target, clamp_top=True, clamp_bottom=True)

                # learning ticks (alpha>0)
                net.set_rates(alpha=ALPHA_R, gamma=GAMMA_R)
                for _ in range(LEARN_TICKS_PER_SAMPLE):
                    net.tick(x_samp[s], y_target, clamp_top=True, clamp_bottom=True)

            msep = mse_dataset(net, x_samp, y_samp)
            writer.writerow([ep + 1, f'{msep:.6f}'])
            print(f'[TB] Epoch {ep}  MSE = {msep:.6f}')

    # show a few final predictions (matches SV testbench printout)
    net.set_rates(alpha=0.0, gamma=GAMMA_R)
    for s in range(10):
        for _ in range(EVAL_SETTLE_TICKS):
            net.tick(x_samp[s], y_bottom=None, clamp_top=True, clamp_bottom=False)
        print(f'[TB] s={s}  x={x_samp[s]}  target={y_samp[s]:.4f}  pred={net.x0[0]:.4f}')

    print(f'\nSaved: {csv_path}')


if __name__ == '__main__':
    main()
