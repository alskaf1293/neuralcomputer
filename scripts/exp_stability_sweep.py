#!/usr/bin/env python3
"""
exp_stability_sweep.py — Experiment 1: Stability / Hyperparameter Characterization.

Delivers what the paper promises: "we treat stability as an empirical property
to be characterized."

Two sub-experiments run for each entry in SWEEP_CONFIGS:
  A) Phase diagram: grid sweep over (alpha, gamma).
     Each point classified as: converged / stagnated / oscillating / diverged.
     Output: python_runs/stability_phase_{tag}.csv
             figures/stability_phase_{tag}.png

  B) Tick-budget sweep: vary infer_ticks in {1,2,5,10,20,50,100,200,500}
     at fixed (alpha, gamma) = (0.01, 0.04), 20 epochs.
     Output: python_runs/tick_budget_{tag}.csv
             figures/tick_budget_{tag}.png

SWEEP_CONFIGS entries: (K2, K1, K0, act_hidden, bias_lr_scale, tag)
  - K2→K1→K0 architecture (top→hidden→bottom)
  - act_hidden: 'relu' | 'tanh' | 'sigmoid'
  - bias_lr_scale: 0.0 = frozen bias, 1.0 = default

Run from repo root:
    python scripts/exp_stability_sweep.py
"""

import sys
import os
import csv
import math

import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches

# ── path setup ─────────────────────────────────────────────────────────────────
_ROOT = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, os.path.join(_ROOT, 'python_rtl'))

from pc_network import PCNet3Layer
from tb_scale_function import build_teacher, build_random_dataset

# ── sweep configurations ───────────────────────────────────────────────────────
# (K2, K1, K0, act_hidden, bias_lr_scale, tag)
SWEEP_CONFIGS = [
    (2,  4,  3, 'relu', 1.0, '2x4x3_relu'),
]

SEED            = 0
N_PHASE_SAMPLES = 36   # random samples per config (fast; matches original grid count)

plt.rcParams.update({
    'font.size': 11,
    'axes.titlesize': 12,
    'axes.labelsize': 11,
    'legend.fontsize': 9,
    'axes.spines.top': False,
    'axes.spines.right': False,
})

# ── phase diagram grid ─────────────────────────────────────────────────────────
ALPHAS = [0.001, 0.003, 0.01, 0.03, 0.05, 0.10, 0.15, 0.20]
GAMMAS = [0.005, 0.010, 0.02, 0.04, 0.07, 0.10, 0.15, 0.20]

PHASE_EPOCHS      = 15
PHASE_INFER_TICKS = 100
PHASE_LEARN_TICKS = 20
PHASE_EVAL_SETTLE = 100

# ── tick-budget sweep ──────────────────────────────────────────────────────────
TICK_VALUES = [1, 2, 5, 10, 20, 50, 100, 200, 500]
TICK_ALPHA  = 0.01
TICK_GAMMA  = 0.04
TICK_LEARN  = 20
TICK_EVAL   = 200
TICK_EPOCHS = 20


# ── helpers ────────────────────────────────────────────────────────────────────

def _gen_k_lut(K0, K1, K2):
    return [max(8, K0), max(16, K1), max(8, K2)]


def make_net(K0: int, K1: int, K2: int,
             act_hidden: str, bias_lr_scale: float,
             alpha: float, gamma: float) -> PCNet3Layer:
    return PCNet3Layer(
        k_lut         = [K0, K1, K2],
        act_lut       = ['linear', act_hidden, 'linear'],
        wclip         = 20.0,
        gamma         = gamma,
        alpha         = alpha,
        seed          = SEED,
        rtl_init      = True,
        gen_k_lut     = _gen_k_lut(K0, K1, K2),
        bias_lr_scale = bias_lr_scale,
    )


def compute_mse(net: PCNet3Layer, K0: int,
                x_samples: np.ndarray, y_targets: np.ndarray,
                gamma: float, eval_settle: int = 100) -> float:
    net.set_rates(alpha=0.0, gamma=gamma)
    acc = 0.0
    n = len(x_samples)
    for s in range(n):
        for _ in range(eval_settle):
            net.tick(x_samples[s], y_bottom=None, clamp_top=True, clamp_bottom=False)
        diff = net.x0 - y_targets[s]
        acc += float(np.dot(diff, diff)) / K0
    return acc / n


def train_epoch(net: PCNet3Layer,
                x_samples: np.ndarray, y_targets: np.ndarray,
                alpha: float, gamma: float,
                infer_ticks: int, learn_ticks: int) -> None:
    for s in range(len(x_samples)):
        net.set_rates(alpha=0.0, gamma=gamma)
        for _ in range(infer_ticks):
            net.tick(x_samples[s], y_targets[s], clamp_top=True, clamp_bottom=True)
        net.set_rates(alpha=alpha, gamma=0.0)
        for _ in range(learn_ticks):
            net.tick(x_samples[s], y_targets[s], clamp_top=True, clamp_bottom=True)


def classify_trajectory(mse_list: list) -> str:
    m = mse_list

    if any(not math.isfinite(v) for v in m):
        return 'diverged'
    if m[-1] > max(10.0 * m[0], m[0] + 1.0):
        return 'diverged'

    if m[-1] < 0.01:
        return 'converged'

    n = len(m)
    half = m[max(0, n // 2):]
    if len(half) >= 3:
        diffs = np.diff(half)
        sign_changes = int(np.sum(np.diff(np.sign(diffs)) != 0))
        amplitude = float(np.max(half) - np.min(half))
        if sign_changes >= 2 and amplitude > 0.10 * float(np.mean(half)):
            return 'oscillating'

    return 'stagnated'


# ── Part A: Phase diagram ──────────────────────────────────────────────────────

def run_phase_diagram(K2: int, K1: int, K0: int,
                      act_hidden: str, bias_lr_scale: float, tag: str,
                      x_samples: np.ndarray, y_targets: np.ndarray) -> list:
    print(f'[Phase:{tag}] Starting (α, γ) grid sweep ...')
    rows = []
    total = len(ALPHAS) * len(GAMMAS)
    done = 0

    for alpha in ALPHAS:
        for gamma in GAMMAS:
            net = make_net(K0, K1, K2, act_hidden, bias_lr_scale, alpha, gamma)
            mse_traj = [compute_mse(net, K0, x_samples, y_targets, gamma, PHASE_EVAL_SETTLE)]

            for ep in range(PHASE_EPOCHS):
                train_epoch(net, x_samples, y_targets, alpha, gamma,
                            PHASE_INFER_TICKS, PHASE_LEARN_TICKS)
                mse = compute_mse(net, K0, x_samples, y_targets, gamma, PHASE_EVAL_SETTLE)
                mse_traj.append(mse)
                if not math.isfinite(mse):
                    break

            label = classify_trajectory(mse_traj)
            done += 1
            print(f'  [{done:2d}/{total}] α={alpha:.3f} γ={gamma:.3f}'
                  f'  →  {label:<12s}  final MSE={mse_traj[-1]:.4f}')

            rows.append({
                'alpha': alpha,
                'gamma': gamma,
                'label': label,
                'final_mse': mse_traj[-1],
                'initial_mse': mse_traj[0],
                'epochs_run': len(mse_traj) - 1,
            })

    os.makedirs(os.path.join(_ROOT, 'python_runs'), exist_ok=True)
    out_csv = os.path.join(_ROOT, 'python_runs', f'stability_phase_{tag}.csv')
    with open(out_csv, 'w', newline='') as f:
        writer = csv.DictWriter(f, fieldnames=['alpha', 'gamma', 'label',
                                               'final_mse', 'initial_mse', 'epochs_run'])
        writer.writeheader()
        writer.writerows(rows)
    print(f'[Phase:{tag}] Saved: {out_csv}')
    return rows


def plot_phase_diagram(rows: list, tag: str,
                       K2: int, K1: int, K0: int, act_hidden: str) -> None:
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    COLORS = {
        'converged':   '#27ae60',
        'stagnated':   '#f39c12',
        'oscillating': '#e67e22',
        'diverged':    '#e74c3c',
    }

    fig, ax = plt.subplots(figsize=(7.0, 5.5))

    for row in rows:
        c = COLORS.get(row['label'], '#95a5a6')
        ax.scatter(row['alpha'], row['gamma'],
                   c=c, s=220, zorder=3, edgecolors='white', linewidths=0.6)

    ax.scatter(0.01, 0.04, marker='*', s=500, c='black', zorder=5)

    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlabel('Learning rate  α', fontsize=12)
    ax.set_ylabel('Inference rate  γ', fontsize=12)
    ax.set_title(f'Stability Phase Diagram — {K2}→{K1}→{K0}  [{act_hidden} hidden]', fontsize=13)

    legend_patches = [mpatches.Patch(facecolor=v, label=k.capitalize())
                      for k, v in COLORS.items()]
    star_handle = plt.Line2D([0], [0], marker='*', color='black',
                             markersize=12, linestyle='None',
                             label='Default (α=0.01, γ=0.04)')
    ax.legend(handles=legend_patches + [star_handle],
              loc='lower right', fontsize=9, framealpha=0.85)

    ax.grid(True, alpha=0.25)
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', f'stability_phase_{tag}.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Phase:{tag}] Saved: {out}')


# ── Part B: Tick-budget sweep ──────────────────────────────────────────────────

def run_tick_budget(K2: int, K1: int, K0: int,
                    act_hidden: str, bias_lr_scale: float, tag: str,
                    x_samples: np.ndarray, y_targets: np.ndarray) -> list:
    print(f'[Ticks:{tag}] Starting tick-budget sweep ...')
    rows = []

    for T in TICK_VALUES:
        net = make_net(K0, K1, K2, act_hidden, bias_lr_scale, TICK_ALPHA, TICK_GAMMA)

        for ep in range(TICK_EPOCHS):
            train_epoch(net, x_samples, y_targets,
                        TICK_ALPHA, TICK_GAMMA, T, TICK_LEARN)

        final_mse = compute_mse(net, K0, x_samples, y_targets, TICK_GAMMA, TICK_EVAL)
        print(f'  T={T:4d}  final MSE = {final_mse:.6f}')
        rows.append({'infer_ticks': T, 'final_mse': final_mse})

    os.makedirs(os.path.join(_ROOT, 'python_runs'), exist_ok=True)
    out_csv = os.path.join(_ROOT, 'python_runs', f'tick_budget_{tag}.csv')
    with open(out_csv, 'w', newline='') as f:
        writer = csv.DictWriter(f, fieldnames=['infer_ticks', 'final_mse'])
        writer.writeheader()
        writer.writerows(rows)
    print(f'[Ticks:{tag}] Saved: {out_csv}')
    return rows


def plot_tick_budget(rows: list, tag: str,
                     K2: int, K1: int, K0: int) -> None:
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    T_vals   = [r['infer_ticks'] for r in rows]
    mse_vals = [r['final_mse']   for r in rows]

    fig, ax = plt.subplots(figsize=(5.5, 4.0))
    ax.plot(T_vals, mse_vals, marker='o', markersize=7,
            linewidth=2.2, color='#2980b9')

    log_mse = np.log10(np.maximum(mse_vals, 1e-12))
    drops = np.diff(log_mse)
    if len(drops) > 0:
        knee_idx = int(np.argmin(drops)) + 1
        ax.axvline(x=T_vals[knee_idx], color='gray', linestyle='--', linewidth=1.0,
                   label=f'Diminishing returns (T={T_vals[knee_idx]})')

    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlabel('Inference tick budget T per sample', fontsize=12)
    ax.set_ylabel(f'Final MSE (after {TICK_EPOCHS} epochs)', fontsize=12)
    ax.set_title(f'Tick Budget vs Accuracy\n({K2}→{K1}→{K0}, α={TICK_ALPHA}, γ={TICK_GAMMA})',
                 fontsize=11)
    ax.legend(fontsize=9)
    ax.grid(True, which='both', alpha=0.25)
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', f'tick_budget_{tag}.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Ticks:{tag}] Saved: {out}')


# ── summary comparison plot ────────────────────────────────────────────────────

def plot_tick_budget_comparison(all_results: list) -> None:
    """Overlay tick-budget curves for all configs on one figure."""
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    fig, ax = plt.subplots(figsize=(7.0, 5.0))
    colors = ['#2980b9', '#27ae60', '#e74c3c', '#8e44ad', '#e67e22', '#7f8c8d']

    for i, (tag, rows) in enumerate(all_results):
        T_vals   = [r['infer_ticks'] for r in rows]
        mse_vals = [r['final_mse']   for r in rows]
        ax.plot(T_vals, mse_vals, marker='o', markersize=5, linewidth=1.8,
                color=colors[i % len(colors)], label=tag)

    ax.set_xscale('log')
    ax.set_yscale('log')
    ax.set_xlabel('Inference tick budget T per sample', fontsize=12)
    ax.set_ylabel(f'Final MSE (after {TICK_EPOCHS} epochs)', fontsize=12)
    ax.set_title('Tick Budget vs Accuracy — All Configs', fontsize=12)
    ax.legend(fontsize=8, loc='upper right')
    ax.grid(True, which='both', alpha=0.25)
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', 'tick_budget_comparison.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Ticks] Saved comparison: {out}')


# ── main ───────────────────────────────────────────────────────────────────────

def main() -> None:
    import argparse
    p = argparse.ArgumentParser()
    p.add_argument('--plot-only', action='store_true',
                   help='Replot from existing CSVs without re-running experiments')
    args = p.parse_args()

    all_tick_results = []

    for cfg in SWEEP_CONFIGS:
        K2, K1, K0, act_hidden, bias_lr_scale, tag = cfg

        print()
        print('=' * 65)
        print(f'Config: {K2}→{K1}→{K0}  act_hidden={act_hidden}'
              f'  bias_lr={bias_lr_scale}  [{tag}]')
        print('=' * 65)

        if args.plot_only:
            import csv as _csv
            phase_csv = os.path.join(_ROOT, 'python_runs', f'stability_phase_{tag}.csv')
            tick_csv  = os.path.join(_ROOT, 'python_runs', f'tick_budget_{tag}.csv')
            with open(phase_csv, newline='') as f:
                phase_rows = list(_csv.DictReader(f))
            for r in phase_rows:
                r['alpha'] = float(r['alpha']); r['gamma'] = float(r['gamma'])
                r['final_mse'] = float(r['final_mse'])
            with open(tick_csv, newline='') as f:
                tick_rows = list(_csv.DictReader(f))
            for r in tick_rows:
                r['infer_ticks'] = int(r['infer_ticks']); r['final_mse'] = float(r['final_mse'])
        else:
            A, B = build_teacher(K0, K1, K2)
            rng = np.random.default_rng(SEED)
            x_samples, y_targets, _ = build_random_dataset(
                K0, K1, K2, A, B, N_PHASE_SAMPLES, rng)

            print(f'\n--- Part A: Phase Diagram ---')
            phase_rows = run_phase_diagram(K2, K1, K0, act_hidden, bias_lr_scale, tag,
                                           x_samples, y_targets)

            counts = {}
            for r in phase_rows:
                counts[r['label']] = counts.get(r['label'], 0) + 1
            print(f'\n[Phase:{tag}] Classification summary:')
            for label, n in sorted(counts.items()):
                print(f'  {label:<14s} {n:2d} / {len(phase_rows)}')

            print(f'\n--- Part B: Tick Budget Sweep ---')
            tick_rows = run_tick_budget(K2, K1, K0, act_hidden, bias_lr_scale, tag,
                                        x_samples, y_targets)

        plot_phase_diagram(phase_rows, tag, K2, K1, K0, act_hidden)
        plot_tick_budget(tick_rows, tag, K2, K1, K0)
    print('\nAll done.')


if __name__ == '__main__':
    main()
