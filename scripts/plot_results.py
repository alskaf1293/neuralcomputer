import pandas as pd
import matplotlib.pyplot as plt
import os
import re

# -----------------------------
# Plot style (publication style)
# -----------------------------

plt.rcParams.update({
    "font.size": 11,
    "axes.titlesize": 12,
    "axes.labelsize": 11,
    "legend.fontsize": 10,
    "xtick.labelsize": 10,
    "ytick.labelsize": 10,
    "figure.figsize": (5.5, 3.8),
    "axes.spines.top": False,
    "axes.spines.right": False,
    "axes.linewidth": 1.2,
})

def style_axis(ax):
    ax.grid(True, which="major", linewidth=0.6, alpha=0.4)
    ax.set_axisbelow(True)

def make_title(filename):
    """Convert a CSV filename to a readable plot title."""
    name = os.path.splitext(filename)[0]
    # scale_K2_K1_K0 -> "K2 → K1 → K0 Network"
    m = re.match(r"scale_(\d+)_(\d+)_(\d+)", name)
    if m:
        return f"{m.group(1)} → {m.group(2)} → {m.group(3)} Network"
    # pc3_hidden_relu_train -> "PC3 Hidden ReLU"
    return name.replace("_", " ").title()

def make_label(filename):
    """Short legend label for scaling plot."""
    name = os.path.splitext(filename)[0]
    m = re.match(r"scale_(\d+)_(\d+)_(\d+)", name)
    if m:
        return f"{m.group(1)} → {m.group(2)} → {m.group(3)}"
    return name

def make_output_name(filename):
    """Map input CSV name to output PNG name."""
    name = os.path.splitext(filename)[0]
    mapping = {
        "pc3_hidden_relu_train": "relu_training_curve",
        "pc3_tanh_reg":          "tanh_training_curve",
    }
    return mapping.get(name, name)

# -----------------------------
# Discover CSVs
# -----------------------------

runs_dir = "runs"
all_csvs = sorted(f for f in os.listdir(runs_dir) if f.endswith(".csv"))

scale_csvs   = [f for f in all_csvs if f.startswith("scale_")]
single_csvs  = [f for f in all_csvs if not f.startswith("scale_")]

os.makedirs("figures", exist_ok=True)

# -----------------------------
# Individual plots
# -----------------------------

for filename in single_csvs:
    df = pd.read_csv(os.path.join(runs_dir, filename))
    mse = df["mse"] + 1e-12

    fig, ax = plt.subplots()
    ax.plot(df["epoch"], mse, marker="o", markersize=4, linewidth=2.2)
    ax.set_yscale("log")
    ax.set_xlabel("Epoch")
    ax.set_ylabel("Mean Squared Error")
    ax.set_title(make_title(filename))
    style_axis(ax)
    plt.tight_layout()

    out = f"figures/{make_output_name(filename)}.png"
    plt.savefig(out, dpi=400)
    plt.close()
    print(f"Wrote {out}")

# -----------------------------
# Combined scaling plot
# -----------------------------

if scale_csvs:
    fig, ax = plt.subplots()

    for filename in scale_csvs:
        df = pd.read_csv(os.path.join(runs_dir, filename))
        mse = df["mse"] + 1e-12
        ax.plot(df["epoch"], mse, marker="o", markersize=4,
                linewidth=2.2, label=make_label(filename))

    ax.set_yscale("log")
    ax.set_xlabel("Epoch")
    ax.set_ylabel("Mean Squared Error")
    ax.set_title("Architectural Scaling")
    ax.legend()
    style_axis(ax)
    plt.tight_layout()

    out = "figures/scaling_curves.png"
    plt.savefig(out, dpi=400)
    plt.close()
    print(f"Wrote {out}")

print("Done.")