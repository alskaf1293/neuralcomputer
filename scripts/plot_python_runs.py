"""
plot_python_runs.py — Plot python_runs/ CSVs.

Handles two layouts:

1. Sample-size sweep (files like scale_4_8_4_n1024.csv):
   One subplot per architecture config, multiple curves for each N.
   Use this to see whether plateaus shrink / disappear as dataset grows.

2. Baseline comparison (files like scale_4_8_4.csv):
   Single combined plot identical to the existing scaling_curves logic.

Run from the repo root:
    python scripts/plot_python_runs.py
    python scripts/plot_python_runs.py --runs-dir python_runs --out-dir figures
"""
import argparse
import os
import re

import matplotlib.pyplot as plt
import pandas as pd

plt.rcParams.update({
    "font.size": 11,
    "axes.titlesize": 12,
    "axes.labelsize": 11,
    "legend.fontsize": 9,
    "xtick.labelsize": 10,
    "ytick.labelsize": 10,
    "axes.spines.top": False,
    "axes.spines.right": False,
    "axes.linewidth": 1.2,
})

_SWEEP_PAT   = re.compile(r"scale_(\d+)_(\d+)_(\d+)_n(\d+)\.csv$")
_BASELINE_PAT = re.compile(r"scale_(\d+)_(\d+)_(\d+)\.csv$")


def style_axis(ax):
    ax.grid(True, which="major", linewidth=0.6, alpha=0.4)
    ax.set_axisbelow(True)


def load_csvs(runs_dir):
    sweep   = {}   # key=(K2,K1,K0) -> list of (N, df)
    baseline = []  # list of (K2,K1,K0,df)

    for fname in sorted(os.listdir(runs_dir)):
        path = os.path.join(runs_dir, fname)
        m = _SWEEP_PAT.match(fname)
        if m:
            k2, k1, k0, n = int(m[1]), int(m[2]), int(m[3]), int(m[4])
            df = pd.read_csv(path)
            sweep.setdefault((k2, k1, k0), []).append((n, df))
            continue
        m = _BASELINE_PAT.match(fname)
        if m and os.path.getsize(path) > 0:
            k2, k1, k0 = int(m[1]), int(m[2]), int(m[3])
            baseline.append((k2, k1, k0, pd.read_csv(path)))

    # sort each config's sweep by N ascending
    for key in sweep:
        sweep[key].sort(key=lambda t: t[0])

    return sweep, baseline


def plot_sweep(sweep, out_dir):
    """One figure per architecture: curves = different sample counts."""
    configs = sorted(sweep.keys())
    if not configs:
        return

    ncols = min(len(configs), 3)
    nrows = (len(configs) + ncols - 1) // ncols
    fig, axes = plt.subplots(nrows, ncols,
                             figsize=(5.5 * ncols, 4.0 * nrows),
                             squeeze=False)

    for idx, key in enumerate(configs):
        ax = axes[idx // ncols][idx % ncols]
        k2, k1, k0 = key
        for n, df in sweep[key]:
            mse = df["mse"] + 1e-12
            ax.plot(df["epoch"], mse, marker="o", markersize=3,
                    linewidth=2.0, label=f"N={n}")
        ax.set_yscale("log")
        ax.set_xlabel("Epoch")
        ax.set_ylabel("MSE")
        ax.set_title(f"{k2} → {k1} → {k0}")
        ax.legend(title="samples")
        style_axis(ax)

    # hide unused subplots
    for idx in range(len(configs), nrows * ncols):
        axes[idx // ncols][idx % ncols].set_visible(False)

    fig.suptitle("Plateau vs Dataset Size", fontsize=13, fontweight="bold")
    plt.tight_layout()

    out = os.path.join(out_dir, "python_runs_sample_sweep.png")
    plt.savefig(out, dpi=400)
    plt.close()
    print(f"Wrote {out}")


def plot_baseline(baseline, out_dir):
    """Combined scaling plot for baseline (no-suffix) CSVs."""
    if not baseline:
        return

    fig, ax = plt.subplots(figsize=(5.5, 3.8))
    for k2, k1, k0, df in sorted(baseline):
        mse = df["mse"] + 1e-12
        ax.plot(df["epoch"], mse, marker="o", markersize=4,
                linewidth=2.2, label=f"{k2} → {k1} → {k0}")
    ax.set_yscale("log")
    ax.set_xlabel("Epoch")
    ax.set_ylabel("Mean Squared Error")
    ax.set_title("Architectural Scaling (python_runs)")
    ax.legend()
    style_axis(ax)
    plt.tight_layout()

    out = os.path.join(out_dir, "python_runs_scaling.png")
    plt.savefig(out, dpi=400)
    plt.close()
    print(f"Wrote {out}")


def main():
    p = argparse.ArgumentParser()
    p.add_argument("--runs-dir", default="python_runs")
    p.add_argument("--out-dir",  default="figures")
    args = p.parse_args()

    os.makedirs(args.out_dir, exist_ok=True)
    sweep, baseline = load_csvs(args.runs_dir)
    plot_sweep(sweep, args.out_dir)
    plot_baseline(baseline, args.out_dir)
    print("Done.")


if __name__ == "__main__":
    main()
