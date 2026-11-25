#!/usr/bin/env python3
"""Fast Python model of the serial PC testbench experiments.

Uses the RTL's initialization tables, learning rates, activation convention,
and same-tick backward signals.

Supports three-layer RTL students and independently configured teachers.
Arithmetic is float64: this is not a bit-exact HardFloat simulator.
"""

import argparse
import csv
from pathlib import Path
import re
import struct

import numpy as np


ROOT = Path(__file__).resolve().parents[1]


def ieee(hex_value):
    return struct.unpack(">f", bytes.fromhex(hex_value))[0]


def read_rtl_settings():
    text = (ROOT / "rtl/digitalpc.sv").read_text()

    def constant(name):
        match = re.search(
            rf"\b{name}\s*=\s*32'h([0-9a-fA-F_]+)", text
        )
        if match is None:
            raise ValueError(f"Cannot find RTL constant {name}")
        return ieee(match.group(1).replace("_", ""))

    tables = []
    for name, shape in [
        ("THETA_L0", (8, 16)),
        ("THETA_L1", (16, 8)),
    ]:
        match = re.search(
            rf"\b{name}\b[^=]*=\s*'\{{(.*?)\}}\s*;",
            text,
            re.S,
        )
        if match is None:
            raise ValueError(f"Cannot find RTL table {name}")

        words = re.findall(
            r"32'h([0-9a-fA-F]{8})", match.group(1)
        )
        values = np.array([ieee(word) for word in words])

        if values.size != np.prod(shape):
            raise ValueError(f"Unexpected shape for {name}")

        tables.append(values.reshape(shape))

    return {
        "alpha": constant("ALPHA_IEEE"),
        "gamma": constant("GAMMA_IEEE"),
        "x_init": constant("X_INIT_SEED"),
        "bias_init": constant("BIAS_INIT_IEEE"),
        "bias_lr": constant("BIAS_LR_SCALE_IEEE"),
        "tables": tables,
    }


# Piecewise-linear tanh coefficients used by the current RTL.
TANH_BREAKS = np.array([
    0.25, 0.5, 0.75, 1.0, 1.25, 1.5, 2.0
])

TANH_M = np.array([
    ieee(word) for word in [
        "3F7ACBF5", "3F5E6948", "3F312F3F", "3F017ADA",
        "3EB18A42", "3E68EADF", "3DF12B73", "3CFE2CB3",
    ]
])

TANH_B = np.array([
    ieee(word) for word in [
        "00000000", "3CE31568", "3DEDAD7E", "3E82F9F7",
        "3ED4656A", "3F105FB8", "3F3A7FA6", "3F66E7B8",
    ]
])


def activation(x, kind):
    """Student activation and derivative, following the RTL convention."""
    if kind == "linear":
        return x, np.ones_like(x)

    if kind == "relu":
        return np.maximum(x, 0.0), (x > 0.0).astype(float)

    if kind == "tanh":
        magnitude = np.minimum(np.abs(x), 3.0)
        segment = np.searchsorted(
            TANH_BREAKS, magnitude, side="right"
        )
        value = TANH_M[segment] * magnitude + TANH_B[segment]
        value = np.where(x < 0.0, -value, value)

        # RTL retains the final segment slope beyond the clip point.
        return value, TANH_M[segment]

    raise ValueError(f"Unknown activation: {kind}")


class PCNetwork:
    def __init__(self, layers, activations, settings):
        # Internal order: output -> hidden layers -> input.
        self.widths = list(reversed(layers))
        self.activations = list(reversed(activations))
        self.alpha = settings["alpha"]
        self.gamma = settings["gamma"]
        self.bias_lr = settings["bias_lr"]

        self.x = [
            np.full(width, settings["x_init"])
            for width in self.widths
        ]
        self.weights = []
        self.biases = []

        rng = np.random.default_rng(0)

        for layer in range(len(layers) - 1):
            rows = self.widths[layer]
            columns = self.widths[layer + 1]

            table = (
                settings["tables"][layer]
                if layer < len(settings["tables"])
                else None
            )

            if (
                table is not None
                and rows <= table.shape[0]
                and columns <= table.shape[1]
            ):
                weights = table[:rows, :columns].copy()
            else:
                # New dimensions have no corresponding RTL init table.
                weights = (
                    rng.standard_normal((rows, columns)).astype(np.float32)
                    * np.float32(0.1)
                ).astype(np.float64)

                print(
                    f"Layer {layer}: using seeded random initialization "
                    f"for {rows}x{columns}; no matching RTL table"
                )

            self.weights.append(weights)
            self.biases.append(
                np.full(rows, settings["bias_init"])
            )

    def tick(self, inputs, targets=None, learn=False):
        effective = [state.copy() for state in self.x]
        effective[-1] = np.asarray(inputs, dtype=float)

        if targets is not None:
            effective[0] = np.asarray(targets, dtype=float)

        features = []
        errors = []
        backward = []

        # Compute every layer's error before changing states or weights.
        for layer in range(len(self.weights)):
            feature, _ = activation(
                effective[layer + 1],
                self.activations[layer + 1],
            )
            prediction = (
                self.weights[layer] @ feature
                + self.biases[layer]
            )
            error = effective[layer] - prediction

            features.append(feature)
            errors.append(error)
            backward.append(self.weights[layer].T @ error)

        new_states = [state.copy() for state in self.x]

        for layer in range(len(self.weights)):
            if layer == 0:
                feedback = np.zeros_like(errors[layer])
            else:
                _, derivative = activation(
                    effective[layer],
                    self.activations[layer],
                )
                feedback = derivative * backward[layer - 1]

            new_states[layer] = self.x[layer] + self.gamma * (
                feedback - errors[layer]
            )

        if learn:
            for layer in range(len(self.weights)):
                scaled_error = self.alpha * errors[layer]
                self.weights[layer] += np.outer(
                    scaled_error, features[layer]
                )
                self.biases[layer] += (
                    self.bias_lr * scaled_error
                )

        new_states[-1] = effective[-1].copy()
        if targets is not None:
            new_states[0] = effective[0].copy()

        self.x = new_states

        arrays = self.x + self.weights + self.biases
        if not all(np.isfinite(array).all() for array in arrays):
            raise FloatingPointError("Non-finite network value")

    def evaluate(self, inputs, targets, ticks):
        predictions = []

        for sample in inputs:
            for _ in range(ticks):
                self.tick(sample, learn=False)
            predictions.append(self.x[0].copy())

        predictions = np.asarray(predictions)
        return float(np.mean((predictions - targets) ** 2)), predictions

    def settled_predictions(self, inputs):
        values = np.asarray(inputs, dtype=float)

        # Evaluate the learned mapping from input down to output.
        for layer in range(len(self.weights) - 1, -1, -1):
            features, _ = activation(
                values, self.activations[layer + 1]
            )
            values = (
                features @ self.weights[layer].T
                + self.biases[layer]
            )

        return values


def load_teacher(path, layers):
    """Read the same whitespace-separated format as load_teacher() in SV."""
    tokens = Path(path).read_text().split()
    position = 0

    def take(convert):
        nonlocal position

        if position >= len(tokens):
            raise ValueError("Teacher file ended unexpectedly")

        value = convert(tokens[position])
        position += 1
        return value

    count = take(int)
    if not 2 <= count <= 16:
        raise ValueError("Teacher must have 2–16 layers")

    widths = [take(int) for _ in range(count)]
    if any(width < 1 or width > 64 for width in widths):
        raise ValueError("Teacher widths must be 1–64")

    if widths[0] != layers[0] or widths[-1] != layers[-1]:
        raise ValueError(
            "Teacher input/output widths must match the student"
        )

    activations = [take(int) for _ in range(count - 1)]
    if any(kind not in (0, 1, 2) for kind in activations):
        raise ValueError("Teacher activations must be 0, 1, or 2")

    maps = []
    for source, destination in zip(widths, widths[1:]):
        rows = np.array([
            [take(float) for _ in range(source + 1)]
            for _ in range(destination)
        ])

        if not np.isfinite(rows).all():
            raise ValueError("Teacher coefficients must be finite")

        maps.append((
            rows[:, :source],
            rows[:, source],
        ))

    if position != len(tokens):
        raise ValueError("Unexpected trailing teacher data")

    def evaluate(inputs):
        values = inputs.copy()

        for (weights, biases), kind in zip(maps, activations):
            result = np.broadcast_to(
                biases, (len(inputs), len(biases))
            ).copy()

            # Preserve the SV teacher's accumulation order.
            for j in range(weights.shape[1]):
                result += values[:, j, None] * weights[:, j]

            if kind == 1:
                result = np.maximum(result, 0.0)
            elif kind == 2:
                # The SV teacher uses $tanh, rather than the RTL's
                # piecewise-linear student activation.
                result = np.tanh(result)

            values = result

        if not np.isfinite(values).all():
            raise ValueError("Teacher produced non-finite targets")

        return values

    return evaluate


def make_dataset(args, width):
    bounds = np.maximum(
        0.4, 1.2 - 0.1 * np.arange(width)
    )
    low = -bounds
    high = bounds

    if args.dataset == "random":
        if not 1 <= args.samples <= args.max_samples:
            raise ValueError("Invalid sample count")
        rng = np.random.default_rng(args.seed)
        return rng.uniform(low, high, size=(args.samples, width))

    # Grid mode overrides sample count, matching the SV testbench.
    count = (
        args.grid ** width
        if args.dataset == "grid"
        else args.samples
    )

    if count < 1 or count > args.max_samples:
        raise ValueError(
            "Dataset exceeds the configured sample capacity"
        )

    inputs = np.zeros((count, width))

    for s in range(count):
        remainder = s

        # Last dimension varies fastest, matching the SV grid order.
        for j in range(width - 1, -1, -1):
            if args.dataset == "grid":
                digit = remainder % args.grid
                remainder //= args.grid

                fraction = (
                    0.5 if args.grid == 1
                    else digit / (args.grid - 1)
                )
                inputs[s, j] = (
                    low[j] + (high[j] - low[j]) * fraction
                )
            else:
                fraction = (
                    0.5 if count == 1 else s / (count - 1)
                )
                inputs[s, j] = (
                    -1.0 + 2.0 * fraction
                    if j % 2 == 0
                    else 1.0 - 2.0 * fraction
                )

    return inputs


def main():
    parser = argparse.ArgumentParser(description=__doc__)

    parser.add_argument("--layers", default="2,4,3")
    parser.add_argument("--activations", default="0,1,0")
    parser.add_argument("--teacher-file", required=True)

    parser.add_argument(
        "--dataset",
        choices=["grid", "diagonal", "random"],
        default="grid",
    )
    parser.add_argument("--grid", type=int, default=6)
    parser.add_argument("--samples", type=int, default=36)
    parser.add_argument("--max-samples", type=int, default=1024)

    parser.add_argument("--epochs", type=int, default=25)
    parser.add_argument("--settle-ticks", type=int, default=0)
    parser.add_argument("--train-ticks", type=int, default=20)
    parser.add_argument("--eval-ticks", type=int, default=2000)

    parser.add_argument(
        "--csv", default="runs/python_learning.csv"
    )
    parser.add_argument("--plot", action="store_true")
    parser.add_argument("--seed", type=int, default=0)
    parser.add_argument("--noise-std", type=float, default=0.0)

    args = parser.parse_args()

    try:
        layers = [
            int(value) for value in args.layers.split(",")
        ]
    except ValueError:
        parser.error("Layer widths must be integers")

    names = {
        "0": "linear",
        "1": "relu",
        "2": "tanh",
        "linear": "linear",
        "relu": "relu",
        "tanh": "tanh",
    }

    try:
        activations = [
            names[value.strip()]
            for value in args.activations.split(",")
        ]
    except KeyError:
        parser.error(
            "Activations must be 0/1/2 or linear/relu/tanh"
        )

    if len(layers) < 2 or min(layers) < 1:
        parser.error("Specify at least two positive layer widths")

    if len(activations) != len(layers):
        parser.error("Specify one activation per student layer")

    if args.grid < 1 or args.eval_ticks < 1:
        parser.error(
            "Grid size and evaluation ticks must be positive"
        )

    if min(
        args.epochs, args.settle_ticks, args.train_ticks
    ) < 0:
        parser.error(
            "Epochs and training tick counts cannot be negative"
        )

    try:
        settings = read_rtl_settings()
        settings["alpha"] /= 10
        net = PCNetwork(layers, activations, settings)
        teacher = load_teacher(args.teacher_file, layers)
        inputs = make_dataset(args, layers[0])
        targets = teacher(inputs)
        if not np.isfinite(args.noise_std) or args.noise_std < 0:
            raise ValueError("Noise standard deviation must be finite and nonnegative")

        if args.noise_std:
            noise_rng = np.random.default_rng(
                np.random.SeedSequence([args.seed, 1])
            )
            targets += noise_rng.normal(
                0.0, args.noise_std, targets.shape
            )
    except ValueError as error:
        parser.error(str(error))

    # The SV bench clamps float32 observations, but calculates MSE
    # against the original real-valued targets.
    observed_inputs = inputs.astype(np.float32).astype(np.float64)
    observed_targets = targets.astype(np.float32).astype(np.float64)

    output = Path(args.csv)
    output.parent.mkdir(parents=True, exist_ok=True)

    ticks = 0
    learning_ticks = 0
    results = []

    print(f"Layers={layers}; activations={activations}")
    print(
        f"Teacher={args.teacher_file}; "
        f"dataset={args.dataset}; samples={len(inputs)}"
    )
    print(
        f"Core alpha={net.alpha:.9g}; gamma={net.gamma:.9g}"
    )
    print(
        f"Epochs={args.epochs}; settle={args.settle_ticks}; "
        f"train={args.train_ticks}; eval={args.eval_ticks}"
    )
    print(
        "Float64 tick model; not a bit-exact HardFloat "
        "or hardware-cycle simulation."
    )

    with output.open("w", newline="") as handle:
        writer = csv.writer(handle)
        writer.writerow([
            "epoch", "mse", "ticks", "learning_ticks"
        ])

        for epoch in range(args.epochs + 1):
            if epoch:
                for sample, target in zip(
                    observed_inputs, observed_targets
                ):
                    for _ in range(args.settle_ticks):
                        net.tick(
                            sample, target, learn=False
                        )

                    for _ in range(args.train_ticks):
                        net.tick(
                            sample, target, learn=True
                        )

                ticks += len(inputs) * (
                    args.settle_ticks + args.train_ticks
                )
                learning_ticks += (
                    len(inputs) * args.train_ticks
                )

            # Evaluation is on the training examples, as in SV.
            # Its final activities carry into subsequent training.
            mse, _ = net.evaluate(
                observed_inputs, targets, args.eval_ticks
            )

            predictions = net.settled_predictions(observed_inputs)
            settled_mse = np.mean((predictions - targets) ** 2)

            print(f"  Settled prediction MSE={settled_mse:.12g}")

            ticks += len(inputs) * args.eval_ticks

            writer.writerow([
                epoch, mse, ticks, learning_ticks
            ])
            handle.flush()
            results.append((epoch, mse))

            print(
                f"Epoch {epoch} MSE={mse:.12g} "
                f"ticks={ticks} "
                f"learning_ticks={learning_ticks}",
                flush=True,
            )
    
    saved_states = [state.copy() for state in net.x]
    saved_gamma = net.gamma

    for gamma in (saved_gamma, saved_gamma / 2, saved_gamma / 10):
        for budget in (200, 2000):
            net.x = [state.copy() for state in saved_states]
            net.gamma = gamma

            mse, _ = net.evaluate(
                observed_inputs, targets, budget
            )
            print(
                f"Fixed weights: gamma={gamma:.6g}, "
                f"ticks={budget}, MSE={mse:.9g}"
            )

    net.x = saved_states
    net.gamma = saved_gamma

    if args.plot:
        import matplotlib
        matplotlib.use("Agg")
        import matplotlib.pyplot as plt

        values = np.asarray(results)

        fig, ax = plt.subplots()
        ax.semilogy(
            values[:, 0],
            np.maximum(values[:, 1], 1e-16),
            "o-",
        )
        ax.set_xlabel("Epoch")
        ax.set_ylabel("Prediction MSE")
        ax.grid(alpha=0.25)

        fig.tight_layout()
        fig.savefig(
            output.with_suffix(".png"), dpi=200
        )
        plt.close(fig)

    print(f"Saved: {output}")


if __name__ == "__main__":
    main()