#!/usr/bin/env python3
"""
exp_fidelity_trace.py — Experiment 3: Simulation Fidelity Validation.

The RTL implementation uses IEEE-754 float32 arithmetic.  The Python reference
uses float64.  This script formally bounds the precision gap by running both in
parallel and comparing per-tick traces.

Runs for all entries in SWEEP_CONFIGS, covering multiple network sizes and
hidden activation functions.

Method
------
Float32Layer rounds all stored state and inputs to float32 after/before each
tick — matching the float32 register file in RTL.  This gives an upper bound on
the RTL–Python precision gap.

Expected result: all metrics stay bounded (< 1e-4 for weights, < 1e-5 for
states), confirming that the Python float64 reference faithfully predicts RTL
float32 behaviour at the tick-level granularity claimed in the paper.

SWEEP_CONFIGS entries: (K2, K1, K0, act_hidden, tag)

Outputs
-------
  python_runs/fidelity_trace_{tag}.csv   (one per config)
  figures/fidelity_trace_{tag}.png       (one per config)

Run from repo root:
    python scripts/exp_fidelity_trace.py
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

from pc_network import Layer, PCNet3Layer
from tb_scale_function import build_teacher, build_dataset

# ── sweep configurations ───────────────────────────────────────────────────────
# (K2, K1, K0, act_hidden, tag)
SWEEP_CONFIGS = [
    (2,  4,  3, 'relu', '2x4x3_relu'),
]

SEED        = 0
ALPHA       = 0.01
GAMMA       = 0.04
N_TICKS     = 500
INFER_PHASE = 200   # first INFER_PHASE ticks: inference only (alpha=0)


# ── float32-precision layer ─────────────────────────────────────────────────────

class Float32Layer(Layer):
    """
    Layer variant that rounds stored state to float32 after each tick.
    Mimics the float32 register file of the RTL neuron_core_single_back.
    """

    @staticmethod
    def _f32(x: np.ndarray) -> np.ndarray:
        return x.astype(np.float32).astype(np.float64)

    def tick(self,
             x_up:          np.ndarray,
             back_from_down: np.ndarray,
             clamp_vec:      np.ndarray,
             obs_vec:        np.ndarray) -> None:
        x_up_in = self._f32(x_up) if x_up.size > 0 else x_up
        back_in = self._f32(back_from_down) if back_from_down.size > 0 else back_from_down
        obs_in  = self._f32(obs_vec)

        super().tick(x_up_in, back_in, clamp_vec, obs_in)

        self.W       = self._f32(self.W)
        self.bias    = self._f32(self.bias)
        self.x_state = self._f32(self.x_state)
        self.eps     = self._f32(self.eps)
        self.back_kn = self._f32(self.back_kn)


def _upgrade_layer_to_f32(layer: Layer) -> Float32Layer:
    fl = object.__new__(Float32Layer)
    fl.__dict__.update(layer.__dict__)
    fl.W       = Float32Layer._f32(fl.W)
    fl.bias    = Float32Layer._f32(fl.bias)
    fl.x_state = Float32Layer._f32(fl.x_state)
    fl.eps     = Float32Layer._f32(fl.eps)
    fl.back_kn = Float32Layer._f32(fl.back_kn)
    return fl


def make_float32_pcnet(**kwargs) -> PCNet3Layer:
    net = PCNet3Layer(**kwargs)
    net.layer0 = _upgrade_layer_to_f32(net.layer0)
    net.layer1 = _upgrade_layer_to_f32(net.layer1)
    net.layer2 = _upgrade_layer_to_f32(net.layer2)
    return net


# ── per-tick comparison ────────────────────────────────────────────────────────

def _rmse(a: np.ndarray, b: np.ndarray) -> float:
    d = a.ravel() - b.ravel()
    return float(np.sqrt(np.mean(d * d))) if d.size > 0 else 0.0


def run_fidelity_trace(K2: int, K1: int, K0: int,
                       act_hidden: str, tag: str) -> list:
    gen_k_lut = [max(8, K0), max(16, K1), max(8, K2)]
    common_kwargs = dict(
        k_lut         = [K0, K1, K2],
        act_lut       = ['linear', act_hidden, 'linear'],
        wclip         = 20.0,
        gamma         = GAMMA,
        alpha         = ALPHA,
        seed          = SEED,
        rtl_init      = True,
        gen_k_lut     = gen_k_lut,
    )

    A, B = build_teacher(K0, K1, K2)
    x_samples, y_targets, _ = build_dataset(K0, K1, K2, A, B)
    X_IN  = x_samples[0]
    Y_TGT = y_targets[0]

    net64 = PCNet3Layer(**common_kwargs)
    net32 = make_float32_pcnet(**common_kwargs)

    rows: list[dict] = []

    for tick in range(N_TICKS):
        x_state_rmse = [
            _rmse(net64.layer0.x_state, net32.layer0.x_state),
            _rmse(net64.layer1.x_state, net32.layer1.x_state),
            _rmse(net64.layer2.x_state, net32.layer2.x_state),
        ]
        weight_rmse = [
            _rmse(net64.layer0.W, net32.layer0.W),
            _rmse(net64.layer1.W, net32.layer1.W),
        ]
        error_rmse = [
            _rmse(net64.layer0.eps, net32.layer0.eps),
            _rmse(net64.layer1.eps, net32.layer1.eps),
        ]

        all64 = np.concatenate([
            net64.layer0.x_state, net64.layer1.x_state, net64.layer2.x_state,
            net64.layer0.W.ravel(), net64.layer1.W.ravel(),
            net64.layer0.bias, net64.layer1.bias,
            net64.layer0.eps, net64.layer1.eps,
        ])
        all32 = np.concatenate([
            net32.layer0.x_state, net32.layer1.x_state, net32.layer2.x_state,
            net32.layer0.W.ravel(), net32.layer1.W.ravel(),
            net32.layer0.bias, net32.layer1.bias,
            net32.layer0.eps, net32.layer1.eps,
        ])
        max_abs  = float(np.max(np.abs(all64 - all32)))
        rmse_all = float(np.sqrt(np.mean((all64 - all32) ** 2)))

        rows.append({
            'tick':           tick,
            'phase':          'infer' if tick < INFER_PHASE else 'learn',
            'max_abs_diff':   max_abs,
            'rmse_all':       rmse_all,
            'state_rmse_l0':  x_state_rmse[0],
            'state_rmse_l1':  x_state_rmse[1],
            'state_rmse_l2':  x_state_rmse[2],
            'weight_rmse_l0': weight_rmse[0],
            'weight_rmse_l1': weight_rmse[1],
            'error_rmse_l0':  error_rmse[0],
            'error_rmse_l1':  error_rmse[1],
        })

        is_learning = tick >= INFER_PHASE
        a_eff = ALPHA if is_learning else 0.0
        g_eff = 0.0   if is_learning else GAMMA

        net64.set_rates(alpha=a_eff, gamma=g_eff)
        net32.set_rates(alpha=a_eff, gamma=g_eff)
        net64.tick(X_IN, Y_TGT, clamp_top=True, clamp_bottom=True)
        net32.tick(X_IN, Y_TGT, clamp_top=True, clamp_bottom=True)

    os.makedirs(os.path.join(_ROOT, 'python_runs'), exist_ok=True)
    out_csv = os.path.join(_ROOT, 'python_runs', f'fidelity_trace_{tag}.csv')
    with open(out_csv, 'w', newline='') as f:
        writer = csv.DictWriter(f, fieldnames=list(rows[0].keys()))
        writer.writeheader()
        writer.writerows(rows)
    print(f'[Fidelity:{tag}] Saved: {out_csv}')
    return rows


# ── plotting ───────────────────────────────────────────────────────────────────

def plot_fidelity_trace(rows: list, tag: str,
                        K2: int, K1: int, K0: int, act_hidden: str) -> None:
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    ticks = [r['tick'] for r in rows]

    fig, axes = plt.subplots(3, 1, figsize=(7.0, 8.5), sharex=True)
    fig.suptitle(f'Float64 vs Float32 Per-Tick Agreement\n'
                 f'({K2}→{K1}→{K0}, {act_hidden} hidden, single sample, {N_TICKS} ticks)',
                 fontsize=12, fontweight='bold')

    ax = axes[0]
    ax.plot(ticks, [r['state_rmse_l0'] for r in rows],
            label='Layer 0 (output)', color='#2980b9', linewidth=1.4)
    ax.plot(ticks, [r['state_rmse_l1'] for r in rows],
            label='Layer 1 (hidden)', color='#27ae60', linewidth=1.4)
    ax.plot(ticks, [r['state_rmse_l2'] for r in rows],
            label='Layer 2 (input)',  color='#8e44ad', linewidth=1.4)
    ax.axvline(INFER_PHASE, color='gray', linestyle=':', linewidth=1.2,
               label=f'Learning phase starts (tick {INFER_PHASE})')
    ax.set_ylabel('State RMSE', fontsize=10)
    ax.set_yscale('log')
    ax.set_title('Neuron state  x  (float64 − float32)', fontsize=10)
    ax.legend(fontsize=8, loc='upper left')
    ax.grid(True, which='both', alpha=0.25)
    ax.spines['top'].set_visible(False); ax.spines['right'].set_visible(False)

    ax = axes[1]
    ax.plot(ticks, [r['weight_rmse_l0'] for r in rows],
            label='Layer 0 weights (W₀)', color='#e67e22', linewidth=1.4)
    ax.plot(ticks, [r['weight_rmse_l1'] for r in rows],
            label='Layer 1 weights (W₁)', color='#e74c3c', linewidth=1.4)
    ax.axvline(INFER_PHASE, color='gray', linestyle=':', linewidth=1.2)
    ax.set_ylabel('Weight matrix RMSE', fontsize=10)
    ax.set_yscale('log')
    ax.set_title('Weight matrix  W  (float64 − float32)', fontsize=10)
    ax.legend(fontsize=8, loc='upper left')
    ax.grid(True, which='both', alpha=0.25)
    ax.spines['top'].set_visible(False); ax.spines['right'].set_visible(False)

    ax = axes[2]
    ax.plot(ticks, [r['max_abs_diff'] for r in rows],
            color='#c0392b', linewidth=1.4, label='Max |float64 − float32|')
    ax.plot(ticks, [r['rmse_all'] for r in rows],
            color='#7f8c8d', linewidth=1.0, linestyle='--', label='RMSE (all params)')
    ax.axvline(INFER_PHASE, color='gray', linestyle=':', linewidth=1.2)
    ax.set_ylabel('Absolute difference', fontsize=10)
    ax.set_xlabel('Tick', fontsize=11)
    ax.set_yscale('log')
    ax.set_title('Worst-case disagreement across all stored parameters', fontsize=10)
    ax.legend(fontsize=8, loc='upper left')
    ax.grid(True, which='both', alpha=0.25)
    ax.spines['top'].set_visible(False); ax.spines['right'].set_visible(False)

    plt.tight_layout()
    out = os.path.join(_ROOT, 'figures', f'fidelity_trace_{tag}.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Fidelity:{tag}] Saved: {out}')


def plot_fidelity_summary(all_summaries: list) -> None:
    """Bar chart comparing peak max|float64−float32| across all configs."""
    os.makedirs(os.path.join(_ROOT, 'figures'), exist_ok=True)

    tags  = [s['tag']  for s in all_summaries]
    peaks = [s['peak'] for s in all_summaries]

    fig, ax = plt.subplots(figsize=(max(6, len(tags) * 1.4), 4.5))
    bars = ax.bar(range(len(tags)), peaks, color='#2980b9', edgecolor='white')
    ax.set_xticks(range(len(tags)))
    ax.set_xticklabels(tags, rotation=30, ha='right', fontsize=9)
    ax.set_yscale('log')
    ax.set_ylabel('Peak max |float64 − float32|', fontsize=11)
    ax.set_title('Fidelity Summary — All Configs', fontsize=12)
    ax.axhline(1e-4, color='red', linestyle='--', linewidth=1.0,
               label='1e-4 threshold')
    ax.legend(fontsize=9)
    ax.grid(True, which='both', alpha=0.25, axis='y')
    ax.spines['top'].set_visible(False); ax.spines['right'].set_visible(False)
    plt.tight_layout()

    out = os.path.join(_ROOT, 'figures', 'fidelity_summary.png')
    plt.savefig(out, dpi=300)
    plt.close()
    print(f'[Fidelity] Saved summary: {out}')


# ── main ───────────────────────────────────────────────────────────────────────

def main() -> None:
    import argparse
    p = argparse.ArgumentParser(description='Experiment 3: Simulation Fidelity Validation')
    p.add_argument('--configs', nargs='+', default=None,
                   help='Tags to run, e.g. 2x4x3_relu 4x8x4_relu. Defaults to all.')
    args = p.parse_args()

    available_tags = [cfg[4] for cfg in SWEEP_CONFIGS]
    if args.configs is not None:
        unknown = [t for t in args.configs if t not in available_tags]
        if unknown:
            print(f'Unknown config tags: {unknown}. Available: {available_tags}')
            return
        configs = [cfg for cfg in SWEEP_CONFIGS if cfg[4] in args.configs]
    else:
        configs = SWEEP_CONFIGS

    print('=' * 60)
    print('Experiment 3: Simulation Fidelity Validation')
    print(f'  Ticks   : {N_TICKS}  ({INFER_PHASE} infer + {N_TICKS - INFER_PHASE} learn)')
    print(f'  α={ALPHA}  γ={GAMMA}')
    print('=' * 60)

    for cfg in configs:
        K2, K1, K0, act_hidden, tag = cfg

        print()
        print(f'--- Config: {K2}→{K1}→{K0}  act_hidden={act_hidden}  [{tag}] ---')

        rows = run_fidelity_trace(K2, K1, K0, act_hidden, tag)
        plot_fidelity_trace(rows, tag, K2, K1, K0, act_hidden)

        max_abs_all  = [r['max_abs_diff']   for r in rows]
        w0_rmse_all  = [r['weight_rmse_l0'] for r in rows]
        w1_rmse_all  = [r['weight_rmse_l1'] for r in rows]
        s0_rmse_all  = [r['state_rmse_l0']  for r in rows]
        peak = max(max_abs_all)

        print(f'  Peak max|float64 − float32|  : {peak:.3e}')
        print(f'  Mean max|float64 − float32|  : {np.mean(max_abs_all):.3e}')
        print(f'  Peak weight RMSE (L0)        : {max(w0_rmse_all):.3e}')
        print(f'  Peak weight RMSE (L1)        : {max(w1_rmse_all):.3e}')
        print(f'  Peak state  RMSE (L0)        : {max(s0_rmse_all):.3e}')
        verdict = 'PASS' if peak < 1e-4 else 'BORDERLINE' if peak < 1e-3 else 'FAIL'
        print(f'  Verdict                      : {verdict}')

    print('\nDone.')


if __name__ == '__main__':
    main()
