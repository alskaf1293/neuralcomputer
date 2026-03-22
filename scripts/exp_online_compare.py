#!/usr/bin/env python3
"""
exp_online_compare.py — Experiment 2: Online/Streaming Learning Comparison.

Compares the PC network against a backprop MLP with identical topology in the
strictly online (no-replay) regime: each training sample is seen exactly once,
in a single pass, with no shuffling or batching across samples.

Runs for all entries in SWEEP_CONFIGS — varying architecture size, hidden
activation, and bias_lr_scale — and produces both per-config and combined plots.

SWEEP_CONFIGS entries: (K2, K1, K0, act_hidden, bias_lr_scale, tag)

Outputs
-------
  python_runs/online_compare_{tag}.csv   (one per config)
  figures/online_comparison_{tag}.png    (one per config)
  figures/online_comparison_combined.png (all configs overlaid)

Run from repo root:
    python scripts/exp_online_compare.py
"""

import sys
import os
import csv

import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

_ROOT = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, os.path.join(_ROOT, 'python_rtl'))

from pc_network import PCNet3Layer
from tb_scale_function import build_teacher, build_random_dataset

# ── sweep configurations ───────────────────────────────────────────────────────
# (K2, K1, K0, act_hidden, bias_lr_scale, tag)
SWEEP_CONFIGS = [
    (2,  4,  3, 'relu', 1.0, '2x4x3_relu'),
]

plt.rcParams.update({
    'font.size': 10,
    'axes.spines.top': False,
    'axes.spines.right': False,
})


# ── backprop MLP baseline ──────────────────────────────────────────────────────

class BackpropMLP:
    """
    3-layer MLP (n_in -> n_hidden/act -> n_out) trained with online SGD.
    Parameter count and weight initialisation match the PC network exactly.
    """

    _ACTS = {
        'relu':    (lambda z: np.maximum(0.0, z),
                    lambda z: (z > 0.0).astype(np.float64)),
        'tanh':    (lambda z: np.tanh(z),
                    lambda z: 1.0 - np.tanh(z) ** 2),
        'sigmoid': (lambda z: 1.0 / (1.0 + np.exp(-z)),
                    lambda z: (lambda s: s * (1.0 - s))(1.0 / (1.0 + np.exp(-z)))),
        'linear':  (lambda z: z,
                    lambda z: np.ones_like(z)),
    }

    def __init__(self, n_in: int, n_hidden: int, n_out: int,
                 act_hidden: str = 'relu', lr: float = 0.005, seed: int = 0):
        rng = np.random.default_rng(seed)
        raw1 = rng.standard_normal((n_hidden, n_in))
        raw2 = rng.standard_normal((n_out, n_hidden))
        self.W1 = (raw1.astype(np.float32) * np.float32(0.1)).astype(np.float64)
        self.b1 = np.zeros(n_hidden, dtype=np.float64)
        self.W2 = (raw2.astype(np.float32) * np.float32(0.1)).astype(np.float64)
        self.b2 = np.zeros(n_out, dtype=np.float64)
        self.lr = lr
        self._act, self._act_prime = self._ACTS[act_hidden]
        self._x = self._z1 = self._h = self._y = None

    def forward(self, x: np.ndarray) -> np.ndarray:
        self._x  = x
        self._z1 = self.W1 @ x + self.b1
        self._h  = self._act(self._z1)
        self._y  = self.W2 @ self._h + self.b2
        return self._y

    def update(self, y_target: np.ndarray) -> None:
        n_out = len(y_target)
        dy    = 2.0 * (self._y - y_target) / n_out
        dW2   = np.outer(dy, self._h)
        db2   = dy.copy()
        dh    = self.W2.T @ dy
        dact  = self._act_prime(self._z1) * dh
        dW1   = np.outer(dact, self._x)
        db1   = dact.copy()
        self.W2 -= self.lr * dW2
        self.b2 -= self.lr * db2
        self.W1 -= self.lr * dW1
        self.b1 -= self.lr * db1

    def predict(self, x: np.ndarray) -> np.ndarray:
        z1 = self.W1 @ x + self.b1
        h  = self._act(z1)
        return self.W2 @ h + self.b2


# ── evaluation helpers ─────────────────────────────────────────────────────────

def eval_pc_mse(net: PCNet3Layer, K0: int,
                x_test: np.ndarray, y_test: np.ndarray,
                gamma: float, settle: int) -> float:
    net.set_rates(alpha=0.0, gamma=gamma)
    acc = 0.0
    for s in range(len(x_test)):
        for _ in range(settle):
            net.tick(x_test[s], y_bottom=None, clamp_top=True, clamp_bottom=False)
        diff = net.x0 - y_test[s]
        acc += float(np.dot(diff, diff)) / K0
    return acc / len(x_test)


def eval_bp_mse(mlp: BackpropMLP, K0: int,
                x_test: np.ndarray, y_test: np.ndarray) -> float:
    acc = 0.0
    for s in range(len(x_test)):
        pred = mlp.predict(x_test[s])
        diff = pred - y_test[s]
        acc += float(np.dot(diff, diff)) / K0
    return acc / len(x_test)


# ── per-config experiment ──────────────────────────────────────────────────────

def run_online_comparison(
    K2: int, K1: int, K0: int,
    act_hidden: str, bias_lr_scale: float, tag: str,
    A, B,
    n_train:        int   = 3000,
    n_test:         int   = 500,
    pc_alpha:       float = 0.01,
    pc_gamma:       float = 0.04,
    pc_infer_ticks: int   = 50,
    pc_learn_ticks: int   = 10,
    bp_lr:          float = 0.005,
    eval_every:     int   = 100,
    pc_eval_settle: int   = 50,
    n_seeds:        int   = 3,
):
    print(f'[Online:{tag}] n_train={n_train}  n_test={n_test}  n_seeds={n_seeds}')
    print(f'[Online:{tag}] PC: α={pc_alpha}  γ={pc_gamma}'
          f'  infer={pc_infer_ticks}  learn={pc_learn_ticks}')
    print(f'[Online:{tag}] BP: lr={bp_lr}  act_hidden={act_hidden}')

    gen_k_lut = [max(8, K0), max(16, K1), max(8, K2)]
    eval_points = list(range(0, n_train + eval_every, eval_every))

    all_pc_curves: list[list[float]] = []
    all_bp_curves: list[list[float]] = []

    for seed in range(n_seeds):
        rng_test  = np.random.default_rng(seed * 1000 + 99)
        rng_train = np.random.default_rng(seed * 1000 + 1)

        x_test,  y_test,  _ = build_random_dataset(K0, K1, K2, A, B, n_test,  rng_test)
        x_train, y_train, _ = build_random_dataset(K0, K1, K2, A, B, n_train, rng_train)

        pc = PCNet3Layer(
            k_lut         = [K0, K1, K2],
            act_lut       = ['linear', act_hidden, 'linear'],
            wclip         = 20.0,
            gamma         = pc_gamma,
            alpha         = pc_alpha,
            seed          = seed,
            rtl_init      = True,
            gen_k_lut     = gen_k_lut,
            bias_lr_scale = bias_lr_scale,
        )
        bp = BackpropMLP(K2, K1, K0, act_hidden=act_hidden, lr=bp_lr, seed=seed)

        pc_curve: list[float] = []
        bp_curve: list[float] = []

        eval_set = set(eval_points)
        for s in range(n_train + 1):
            if s in eval_set:
                pc_mse = eval_pc_mse(pc, K0, x_test, y_test, pc_gamma, pc_eval_settle)
                bp_mse = eval_bp_mse(bp, K0, x_test, y_test)
                pc_curve.append(pc_mse)
                bp_curve.append(bp_mse)

            if s < n_train:
                pc.set_rates(alpha=0.0, gamma=pc_gamma)
                for _ in range(pc_infer_ticks):
                    pc.tick(x_train[s], y_train[s], clamp_top=True, clamp_bottom=True)
                pc.set_rates(alpha=pc_alpha, gamma=0.0)
                for _ in range(pc_learn_ticks):
                    pc.tick(x_train[s], y_train[s], clamp_top=True, clamp_bottom=True)

                bp.forward(x_train[s])
                bp.update(y_train[s])

        all_pc_curves.append(pc_curve)
        all_bp_curves.append(bp_curve)
        print(f'  seed={seed}  final PC MSE={pc_curve[-1]:.5f}  BP MSE={bp_curve[-1]:.5f}')

    # save CSV
    os.makedirs(os.path.join(_ROOT, 'python_runs'), exist_ok=True)
    out_csv = os.path.join(_ROOT, 'python_runs', f'online_compare_{tag}.csv')
    with open(out_csv, 'w', newline='') as f:
        header = (['sample']
                  + [f'pc_seed{s}' for s in range(n_seeds)]
                  + [f'bp_seed{s}' for s in range(n_seeds)])
        writer = csv.writer(f)
        writer.writerow(header)
        for i, ep in enumerate(eval_points):
            row = ([ep]
                   + [all_pc_curves[s][i] for s in range(n_seeds)]
                   + [all_bp_curves[s][i] for s in range(n_seeds)])
            writer.writerow(row)
    print(f'[Online:{tag}] Saved: {out_csv}')

    pc_arr = np.array(all_pc_curves)
    bp_arr = np.array(all_bp_curves)
    return eval_points, pc_arr, bp_arr


# ── plotting ───────────────────────────────────────────────────────────────────

def plot_online_comparison(eval_points: list,
                           all_pc: np.ndarray,
                           all_bp: np.ndarray,
                           tag: str,
                           K2: int, K1: int, K0: int,
                           act_hidden: str) -> None:
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    pc_mean = all_pc.mean(axis=0)
    pc_std  = all_pc.std(axis=0)
    bp_mean = all_bp.mean(axis=0)
    bp_std  = all_bp.std(axis=0)
    ep = np.array(eval_points)

    fig, ax = plt.subplots(figsize=(6.5, 4.5))

    ax.plot(ep, pc_mean, color='#2980b9', linewidth=2.2,
            label='PC network (local learning rules)')
    ax.fill_between(ep, np.maximum(pc_mean - pc_std, 1e-9),
                    pc_mean + pc_std, alpha=0.18, color='#2980b9')

    ax.plot(ep, bp_mean, color='#c0392b', linewidth=2.2, linestyle='--',
            label='Backprop MLP (SGD, batch=1)')
    ax.fill_between(ep, np.maximum(bp_mean - bp_std, 1e-9),
                    bp_mean + bp_std, alpha=0.18, color='#c0392b')

    ax.set_yscale('log')
    ax.set_xlabel('Training samples seen  (online, no replay)', fontsize=12)
    ax.set_ylabel('Test MSE', fontsize=12)
    ax.set_title(f'Online Learning — PC vs Backprop\n'
                 f'({K2}→{K1}→{K0}, {act_hidden} hidden, each sample once)', fontsize=11)
    ax.legend(fontsize=10)
    ax.grid(True, which='both', alpha=0.25)
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', f'online_comparison_{tag}.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Online:{tag}] Saved: {out}')


def plot_combined(all_results: list) -> None:
    """One figure with one panel per config, arranged in a grid."""
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    n = len(all_results)
    ncols = 3
    nrows = (n + ncols - 1) // ncols

    fig, axes = plt.subplots(nrows, ncols, figsize=(5.5 * ncols, 4.0 * nrows),
                              squeeze=False)

    for idx, (tag, K2, K1, K0, act_hidden, eval_points, all_pc, all_bp) in enumerate(all_results):
        ax = axes[idx // ncols][idx % ncols]
        ep = np.array(eval_points)
        pc_mean = all_pc.mean(axis=0)
        bp_mean = all_bp.mean(axis=0)
        pc_std  = all_pc.std(axis=0)
        bp_std  = all_bp.std(axis=0)

        ax.plot(ep, pc_mean, color='#2980b9', linewidth=1.8, label='PC')
        ax.fill_between(ep, np.maximum(pc_mean - pc_std, 1e-9),
                        pc_mean + pc_std, alpha=0.18, color='#2980b9')
        ax.plot(ep, bp_mean, color='#c0392b', linewidth=1.8,
                linestyle='--', label='BP')
        ax.fill_between(ep, np.maximum(bp_mean - bp_std, 1e-9),
                        bp_mean + bp_std, alpha=0.18, color='#c0392b')
        ax.set_yscale('log')
        ax.set_title(f'{K2}→{K1}→{K0}  [{act_hidden}]', fontsize=10)
        ax.set_xlabel('Samples', fontsize=9)
        ax.set_ylabel('Test MSE', fontsize=9)
        ax.legend(fontsize=8)
        ax.grid(True, which='both', alpha=0.25)
        ax.spines['top'].set_visible(False)
        ax.spines['right'].set_visible(False)

    # hide any unused panels
    for idx in range(n, nrows * ncols):
        axes[idx // ncols][idx % ncols].set_visible(False)

    fig.suptitle('Online Learning — PC Network vs Backprop MLP (all configs)',
                 fontsize=13, fontweight='bold')
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', 'online_comparison_combined.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Online] Saved combined: {out}')


# ── main ───────────────────────────────────────────────────────────────────────

def main() -> None:
    import argparse
    p = argparse.ArgumentParser(description='Experiment 2: Online/Streaming Learning Comparison')
    p.add_argument('--configs', nargs='+', default=None,
                   help='Tags to run, e.g. 2x4x3_relu 4x8x4_relu. Defaults to all.')
    args = p.parse_args()

    available_tags = [cfg[5] for cfg in SWEEP_CONFIGS]
    if args.configs is not None:
        unknown = [t for t in args.configs if t not in available_tags]
        if unknown:
            print(f'Unknown config tags: {unknown}. Available: {available_tags}')
            return
        configs = [cfg for cfg in SWEEP_CONFIGS if cfg[5] in args.configs]
    else:
        configs = SWEEP_CONFIGS

    print('=' * 60)
    print('Experiment 2: Online/Streaming Learning Comparison')
    print('=' * 60)

    all_results = []

    for cfg in configs:
        K2, K1, K0, act_hidden, bias_lr_scale, tag = cfg
        A, B = build_teacher(K0, K1, K2)

        print()
        print(f'--- Config: {K2}→{K1}→{K0}  act={act_hidden}'
              f'  bias_lr={bias_lr_scale}  [{tag}] ---')

        eval_points, all_pc, all_bp = run_online_comparison(
            K2, K1, K0, act_hidden, bias_lr_scale, tag, A, B)
        plot_online_comparison(eval_points, all_pc, all_bp,
                               tag, K2, K1, K0, act_hidden)

        pc_final = all_pc[:, -1].mean()
        bp_final = all_bp[:, -1].mean()
        ratio = pc_final / bp_final if bp_final > 0 else float('nan')
        print(f'\n[Online:{tag}] Final — PC: {pc_final:.5f}  BP: {bp_final:.5f}'
              f'  ratio PC/BP: {ratio:.2f}x')

    print('\nDone.')


if __name__ == '__main__':
    main()
