#!/usr/bin/env python3
"""
tb_scale_function.py — Python reproduction of tb/tb_scale_function.sv.

Generic 3-layer PC scaling testbench; runs three configurations:
  K2→K1→K0 = 2→4→3   → runs/scale_2_4_3.csv
  K2→K1→K0 = 4→8→4   → runs/scale_4_8_4.csv
  K2→K1→K0 = 8→16→8  → runs/scale_8_16_8.csv
  K2→K1→K0 = 16→32→16 → runs/scale_16_32_16.csv

All use ACT_LUT = [linear, relu, linear].

Teacher (default 'deep_tanh') — two-hidden-layer random MLP:
  h1 = tanh(W1 · x + b1)
  h2 = tanh(W2 · h1 + b2)
  y  = W3 · h2
  with Xavier-scaled random weights — a richer, non-structured function class.

Legacy tiled teacher ('tiled') still available for backward compatibility.

Training schedule (all configs):
  ALPHA=0.05, GAMMA=0.10
  INFER_TICKS=200, LEARN_TICKS=20, EVAL_SETTLE=2000, EPOCHS=25
"""
import numpy as np
import csv
import os
import sys
import argparse

sys.path.insert(0, os.path.dirname(__file__))
from pc_network import PCNet3Layer


# ── teacher construction (mirrors build_teacher in tb_scale_function.sv) ──────

def build_teacher(K0: int, K1: int, K2: int):
    """Tiled 4-row motif for B (hidden), 3-row motif for A (output)."""
    B = np.zeros((K1, K2), dtype=np.float64)
    A = np.zeros((K0, K1), dtype=np.float64)

    ROW_MOTIF_B = [
        ( 1.00, -0.20),
        (-0.15,  0.95),
        ( 0.70,  0.25),
        ( 0.20,  0.80),
    ]
    for i in range(K1):
        row_type = i % 4
        j0 = (i % K2) if K2 > 1 else 0
        j1 = ((i + 1) % K2) if K2 > 1 else 0
        a, b = ROW_MOTIF_B[row_type]
        B[i, j0] = a
        if K2 > 1:
            B[i, j1] = b

    ROW_MOTIF_A = [
        [0.90, -0.45,  0.30,  0.00],
        [-0.70,  0.85,  0.00,  0.25],
        [0.50,  0.60, -0.20,  0.35],
    ]
    for o in range(K0):
        row_type = o % 3
        base = 0 if K1 <= 4 else (2 * o % K1)
        for k, val in enumerate(ROW_MOTIF_A[row_type]):
            if base + k < K1:
                A[o, base + k] = val

    return A, B


# ── rich teacher: two-hidden-layer random MLP with tanh ───────────────────────

def build_deep_teacher(K0: int, K1: int, K2: int, seed: int = 7):
    """
    Two-hidden-layer random teacher: y = W3 · tanh(W2 · tanh(W1 · x + b1) + b2).

    Both hidden layers have width K1.  Xavier (fan_in) initialisation keeps
    activations in the informative tanh regime at initialisation, producing
    bounded but complex outputs across the input domain.  Random biases add
    phase diversity so different neurons fire for different input regions.

    Returns a callable teacher_fn(x: ndarray shape (K2,)) -> ndarray shape (K0,).
    """
    rng = np.random.default_rng(seed)
    W1 = rng.standard_normal((K1, K2)) * np.sqrt(2.0 / K2)
    b1 = rng.standard_normal(K1)       * 0.5
    W2 = rng.standard_normal((K1, K1)) * np.sqrt(2.0 / K1)
    b2 = rng.standard_normal(K1)       * 0.5
    W3 = rng.standard_normal((K0, K1)) * np.sqrt(2.0 / K1)

    def teacher_fn(x: np.ndarray) -> np.ndarray:
        h1 = np.tanh(W1 @ x + b1)
        h2 = np.tanh(W2 @ h1 + b2)
        return W3 @ h2

    return teacher_fn


# ── callable-based dataset builders (work with any teacher_fn) ────────────────

def build_dataset_fn(K0: int, K1: int, K2: int, teacher_fn,
                     nx=None, x_low=None, x_high=None):
    """Like build_dataset but uses a callable teacher_fn(x) -> y."""
    if nx is None:
        nx, x_low, x_high = _default_grid(K2)

    num_samples = 1
    for j in range(K2):
        num_samples *= nx[j]

    x_samples = np.zeros((num_samples, K2))
    y_targets  = np.zeros((num_samples, K0))

    idx = [0] * K2
    for s in range(num_samples):
        x = np.array([
            0.5 * (x_low[j] + x_high[j]) if nx[j] == 1
            else x_low[j] + (x_high[j] - x_low[j]) * idx[j] / (nx[j] - 1)
            for j in range(K2)
        ])
        x_samples[s] = x
        y_targets[s]  = teacher_fn(x)

        for j in range(K2):
            idx[j] += 1
            if idx[j] < nx[j]:
                break
            idx[j] = 0

    return x_samples, y_targets, num_samples


def build_random_dataset_fn(K0: int, K1: int, K2: int, teacher_fn,
                             n_samples: int, rng):
    """Like build_random_dataset but uses a callable teacher_fn(x) -> y."""
    _, x_low, x_high = _default_grid(K2)
    x_low  = np.array(x_low)
    x_high = np.array(x_high)
    x_samp = rng.uniform(x_low, x_high, size=(n_samples, K2))
    y_tgt  = np.array([teacher_fn(x) for x in x_samp])
    return x_samp, y_tgt, n_samples


# ── dataset (Cartesian grid, mixed-radix inner-first, mirrors sv testbench) ───

def _default_grid(K2: int):
    """Default nx and coordinate ranges matching test_all.sh plusargs."""
    if K2 == 2:
        nx = [6, 6]          # +NX0=6 +NX1=6  (36 samples)
    elif K2 == 4:
        nx = [4, 4, 4, 4]    # +NX0=4..NX3=4  (256 samples) — test_all.sh
    elif K2 == 8:
        nx = [2] * 8         # +NX0=2..NX7=2  (256 samples)
    else:
        nx = [2] * K2

    x_low  = []
    x_high = []
    for j in range(K2):
        if j == 0:
            x_low.append(-1.2); x_high.append(1.2)
        elif j == 1:
            x_low.append(-1.1); x_high.append(1.1)
        else:
            span = max(0.4, 1.2 - 0.1 * j)
            x_low.append(-span); x_high.append(span)
    return nx, x_low, x_high


def build_dataset(K0: int, K1: int, K2: int, A, B, nx=None, x_low=None, x_high=None):
    if nx is None:
        nx, x_low, x_high = _default_grid(K2)

    num_samples = 1
    for j in range(K2):
        num_samples *= nx[j]

    x_samples = np.zeros((num_samples, K2))
    y_targets  = np.zeros((num_samples, K0))

    idx = [0] * K2
    for s in range(num_samples):
        x = np.array([
            0.5 * (x_low[j] + x_high[j]) if nx[j] == 1
            else x_low[j] + (x_high[j] - x_low[j]) * idx[j] / (nx[j] - 1)
            for j in range(K2)
        ])
        h = np.maximum(0.0, B @ x)
        x_samples[s] = x
        y_targets[s]  = A @ h

        # mixed-radix increment (dim 0 fastest, same as sv testbench)
        for j in range(K2):
            idx[j] += 1
            if idx[j] < nx[j]:
                break
            idx[j] = 0

    return x_samples, y_targets, num_samples


def build_random_dataset(K0: int, K1: int, K2: int, A, B, n_samples: int, rng):
    """Draw n_samples uniformly at random from the same per-dim ranges as the grid."""
    _, x_low, x_high = _default_grid(K2)
    x_low  = np.array(x_low)
    x_high = np.array(x_high)
    x_samples = rng.uniform(x_low, x_high, size=(n_samples, K2))
    h = np.maximum(0.0, x_samples @ B.T)   # (n_samples, K1)
    y_targets = h @ A.T                     # (n_samples, K0)
    return x_samples, y_targets, n_samples


# ── training loop ──────────────────────────────────────────────────────────────

def run_experiment(K0: int, K1: int, K2: int, csv_path: str,
                   alpha: float = 0.05,
                   gamma: float = 0.10,
                   infer_ticks: int = 200,
                   learn_ticks: int = 20,
                   eval_settle: int = 2000,
                   epochs: int = 25,
                   seed: int = 42,
                   lr_decay: float = 1.0,
                   n_samples: int = None,
                   act_hidden: str = 'relu',
                   bias_lr_scale: float = 1.0,
                   teacher_kind: str = 'tiled',
                   teacher_seed: int = 7) -> None:

    rng = np.random.default_rng(seed)

    if teacher_kind == 'deep_tanh':
        teacher_fn = build_deep_teacher(K0, K1, K2, seed=teacher_seed)
        if n_samples is not None:
            x_samples, y_targets, num_samples = build_random_dataset_fn(
                K0, K1, K2, teacher_fn, n_samples, rng)
            dataset_mode = f'random ({num_samples} samples)'
        else:
            x_samples, y_targets, num_samples = build_dataset_fn(K0, K1, K2, teacher_fn)
            dataset_mode = f'grid ({num_samples} samples)'
    else:
        A, B = build_teacher(K0, K1, K2)
        if n_samples is not None:
            x_samples, y_targets, num_samples = build_random_dataset(K0, K1, K2, A, B, n_samples, rng)
            dataset_mode = f'random ({num_samples} samples)'
        else:
            x_samples, y_targets, num_samples = build_dataset(K0, K1, K2, A, B)
            dataset_mode = f'grid ({num_samples} samples)'

    nx, x_low, x_high = _default_grid(K2)
    print(f'[TB] {"=" * 50}')
    print(f'[TB] Scaling experiment')
    print(f'[TB] dims top→hidden→bottom = {K2}→{K1}→{K0}')
    print(f'[TB] DATASET = {dataset_mode}')
    print(f'[TB] ALPHA={alpha}  GAMMA={gamma}')
    print(f'[TB] INFER_TICKS={infer_ticks}  LEARN_TICKS={learn_ticks}  EVAL_SETTLE={eval_settle}')
    print(f'[TB] EPOCHS={epochs}')
    print(f'[TB] CSV_PATH = {csv_path}')
    for j in range(K2):
        print(f'[TB] dim {j}: range=[{x_low[j]:.4f},{x_high[j]:.4f}]')
    print(f'[TB] ACT_HIDDEN={act_hidden}  BIAS_LR_SCALE={bias_lr_scale}  TEACHER={teacher_kind}')
    print(f'[TB] {"=" * 50}')

    gen_k_lut = [max(8, K0), max(16, K1), max(8, K2)]
    net = PCNet3Layer(
        k_lut         = [K0, K1, K2],
        act_lut       = ['linear', act_hidden, 'linear'],
        wclip         = 20.0,
        gamma         = gamma,
        alpha         = alpha,
        seed          = seed,
        rtl_init      = True,
        gen_k_lut     = gen_k_lut,
        bias_lr_scale = bias_lr_scale,
    )

    def mse_dataset():
        net.set_rates(alpha=0.0, gamma=gamma)
        acc = 0.0
        for s in range(num_samples):
            for _ in range(eval_settle):
                net.tick(x_samples[s], y_bottom=None,
                         clamp_top=True, clamp_bottom=False)
            diff = net.x0 - y_targets[s]
            acc += float(np.dot(diff, diff)) / K0
        return acc / num_samples

    os.makedirs(os.path.dirname(csv_path) if os.path.dirname(csv_path) else '.', exist_ok=True)

    with open(csv_path, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(['epoch', 'mse'])

        mse0 = mse_dataset()
        writer.writerow([0, f'{mse0:.6f}'])
        print(f'[TB] Initial MSE = {mse0:.6f}')

        for ep in range(epochs):
            alpha_ep = alpha * (lr_decay ** ep)
            for s in range(num_samples):
                # Phase 1: infer to convergence — states free, no weight updates
                net.set_rates(alpha=0.0, gamma=gamma)
                for _ in range(infer_ticks):
                    net.tick(x_samples[s], y_targets[s],
                             clamp_top=True, clamp_bottom=True)

                # Phase 2: weight update — states frozen (gamma=0), weights updated
                net.set_rates(alpha=alpha_ep, gamma=0.0)
                for _ in range(learn_ticks):
                    net.tick(x_samples[s], y_targets[s],
                             clamp_top=True, clamp_bottom=True)

            msep = mse_dataset()
            writer.writerow([ep + 1, f'{msep:.6f}'])
            print(f'[TB] Epoch {ep + 1}  alpha={alpha_ep:.5f}  MSE = {msep:.6f}')

    print(f'Saved: {csv_path}\n')


def main():
    p = argparse.ArgumentParser(description='tb_scale_function Python reproduction')
    p.add_argument('--configs', nargs='+', default=['2_4_3', '4_8_4', '8_16_8', '16_32_16'],
                   help='Configs to run, e.g. 2_4_3 4_8_4 8_16_8 16_32_16')
    p.add_argument('--alpha',       type=float, default=0.01)   # matches test_all.sh
    p.add_argument('--gamma',       type=float, default=0.04)   # matches test_all.sh
    p.add_argument('--infer-ticks', type=int,   default=200)
    p.add_argument('--learn-ticks', type=int,   default=20)
    p.add_argument('--eval-settle', type=int,   default=300)    # matches test_all.sh
    p.add_argument('--epochs',      type=int,   default=25)
    p.add_argument('--seed',        type=int,   default=0)
    p.add_argument('--lr-decay',    type=float, default=0.95,
                   help='Multiplicative alpha decay per epoch (1.0 = no decay)')
    p.add_argument('--n-samples',   type=int,   default=256,
                   help='Use random sampling with N samples instead of Cartesian grid')
    p.add_argument('--sample-sweep', type=str,  default=None,
                   help='Comma-separated list of sample counts to sweep over, e.g. 256,1024,4096. '
                        'Runs each config × each N; outputs scale_{cfg}_n{N}.csv')
    p.add_argument('--act-hidden', type=str, default='relu',
                   choices=['relu', 'tanh', 'sigmoid', 'linear'],
                   help='Activation function for the hidden layer (default: relu)')
    p.add_argument('--bias-lr-scale', type=float, default=1.0,
                   help='Bias learning rate multiplier (0.0 = frozen bias, default: 1.0)')
    p.add_argument('--act-sweep', action='store_true',
                   help='If set, sweep over all hidden activations (relu, tanh, sigmoid) '
                        'for each config/size combination')
    p.add_argument('--teacher', type=str, default='tiled',
                   choices=['deep_tanh', 'tiled'],
                   help='Teacher function class: deep_tanh (default) = two-hidden-layer '
                        'random MLP with tanh; tiled = legacy sparse motif')
    p.add_argument('--teacher-seed', type=int, default=7,
                   help='RNG seed for deep_tanh teacher weights (default: 7)')
    args = p.parse_args()

    # Determine activation variants to sweep
    act_variants = ['relu', 'tanh', 'sigmoid'] if args.act_sweep else [args.act_hidden]

    # Build list of (cfg, n_samples, act_hidden, bias_lr_scale, csv_filename) runs
    runs = []
    if args.sample_sweep is not None:
        sweep_ns = [int(x) for x in args.sample_sweep.split(',')]
        for cfg in args.configs:
            for n in sweep_ns:
                for act in act_variants:
                    act_tag = f'_{act}' if act != 'relu' else ''
                    blr_tag = f'_blr{args.bias_lr_scale}' if args.bias_lr_scale != 1.0 else ''
                    runs.append((cfg, n, act, args.bias_lr_scale,
                                 f'scale_{cfg}_n{n}{act_tag}{blr_tag}.csv'))
    else:
        for cfg in args.configs:
            for act in act_variants:
                act_tag = f'_{act}' if act != 'relu' else ''
                blr_tag = f'_blr{args.bias_lr_scale}' if args.bias_lr_scale != 1.0 else ''
                runs.append((cfg, args.n_samples, act, args.bias_lr_scale,
                             f'scale_{cfg}{act_tag}{blr_tag}.csv'))

    for cfg, n_samples, act_hidden, bias_lr_scale, filename in runs:
        parts = cfg.split('_')
        K2, K1, K0 = int(parts[0]), int(parts[1]), int(parts[2])
        csv_path = f'python_runs/{filename}'
        run_experiment(K0, K1, K2, csv_path,
                       alpha=args.alpha,
                       gamma=args.gamma,
                       infer_ticks=args.infer_ticks,
                       learn_ticks=args.learn_ticks,
                       eval_settle=args.eval_settle,
                       epochs=args.epochs,
                       seed=args.seed,
                       lr_decay=args.lr_decay,
                       n_samples=n_samples,
                       act_hidden=act_hidden,
                       bias_lr_scale=bias_lr_scale,
                       teacher_kind=args.teacher,
                       teacher_seed=args.teacher_seed)


if __name__ == '__main__':
    main()
