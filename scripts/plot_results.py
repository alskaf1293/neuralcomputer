import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

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

# -----------------------------
# Load data
# -----------------------------

relu = pd.read_csv("runs/pc3_hidden_relu_train.csv")
tanh = pd.read_csv("runs/pc3_xor.csv")

# avoid log(0)
relu_mse = relu["mse"] + 1e-12
tanh_mse = tanh["mse"] + 1e-12

# -----------------------------
# Plot 1: ReLU experiment
# -----------------------------

fig, ax = plt.subplots()

ax.plot(
    relu["epoch"],
    relu_mse,
    marker="o",
    markersize=4,
    linewidth=2.2
)

ax.set_yscale("log")

ax.set_xlabel("Epoch")
ax.set_ylabel("Mean Squared Error")

ax.set_title("2 → 4 → 3 Network (ReLU Hidden Layer)")

style_axis(ax)

plt.tight_layout()
plt.savefig("figures/relu_training_curve.png", dpi=400)
plt.close()

# -----------------------------
# Plot 2: Tanh experiment
# -----------------------------

fig, ax = plt.subplots()

ax.plot(
    tanh["epoch"],
    tanh_mse,
    marker="o",
    markersize=4,
    linewidth=2.2
)

ax.set_yscale("log")

ax.set_xlabel("Epoch")
ax.set_ylabel("Mean Squared Error")

ax.set_title("2 → 2 → 1 Network (Tanh Hidden Layer)")

style_axis(ax)

plt.tight_layout()
plt.savefig("figures/tanh_training_curve.png", dpi=400)
plt.close()

print("Plots written to figures/")