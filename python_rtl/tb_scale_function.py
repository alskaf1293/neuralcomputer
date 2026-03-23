#!/usr/bin/env python3
"""
tb_scale_function.py — Python reproduction of tb/tb_scale_function.sv.

Generic 3-layer PC scaling testbench; runs three configurations:
  K2→K1→K0 = 2→4→3   → python_runs/scale_2_4_3.csv
  K2→K1→K0 = 4→8→4   → python_runs/scale_4_8_4.csv
  K2→K1→K0 = 8→16→8  → python_runs/scale_8_16_8.csv

Teacher variants (--teacher):
  tiled        — sparse ReLU motif:    y = A · ReLU(B · x)              (realizable by ReLU net)
  tiled_tanh   — sparse tanh motif:    y = A · tanh(B · tanh(x))        (realizable by tanh net, same sparse structure as tiled)
  shallow_tanh — single-hidden-layer:  y = W2 · tanh(W1 · tanh(x) + b) (realizable by tanh net, dense random)
  deep_tanh    — two-hidden-layer MLP: y = W3 · tanh(W2 · tanh(W1·x+b1)+b2)  (unrealizable)

Teacher-specific defaults (applied when flag is omitted):
  tiled:                  alpha=0.01,  gamma=0.04, lr_decay=0.95, act_hidden=relu, eval_settle=300
  tiled_tanh:             alpha=0.01,  gamma=0.04, lr_decay=0.95, act_hidden=tanh, eval_settle=300
  shallow_tanh/deep_tanh: alpha=0.003, gamma=0.04, lr_decay=1.0,  act_hidden=tanh, eval_settle=1000

Use --width-mult N to scale K1 by N for more hidden capacity (useful with deep_tanh).
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


# ── tiled tanh teacher: same sparse motif as tiled ReLU but with tanh ────────

def build_tiled_tanh_teacher(K0: int, K1: int, K2: int):
    """
    Sparse tiled teacher with tanh: y = A · tanh(B · tanh(x)).

    Uses the same sparse B (1–2 nonzero entries per row) and A matrices as the
    tiled ReLU teacher, but replaces ReLU with tanh.  Also applies tanh(x)
    element-wise as input features, matching the student's function class when
    act_bottom = act_hidden = 'tanh'.

    This is the tanh analogue of the tiled ReLU teacher: same low effective
    dimensionality (each hidden unit depends on 1–2 input dimensions), same
    sample requirements, same convergence profile — the only difference is the
    nonlinearity.
    """
    A, B = build_teacher(K0, K1, K2)

    def teacher_fn(x: np.ndarray) -> np.ndarray:
        return A @ np.tanh(B @ np.tanh(x))

    return teacher_fn


# ── shallow teacher: single-hidden-layer random MLP with tanh ─────────────────

def build_shallow_teacher(K0: int, K1: int, K2: int, seed: int = 7):
    """
    Single-hidden-layer random teacher: y = W2 · tanh(W1 · tanh(x) + b1).

    Uses tanh(x) (element-wise) as input features, matching the student's
    hidden-layer prediction mu_h = W1 @ tanh(x_input) + bias1.  This makes
    the problem realizable: the student spans exactly the same function class
    as the teacher and can in principle achieve zero error.

    Note: using raw x as features (W1 @ x + b) would require the student to
    represent linear combinations of x, but the student's prior uses
    tanh(x) as features — an incompatible function class that causes a
    permanent plateau regardless of training length.

    Returns a callable teacher_fn(x: ndarray shape (K2,)) -> ndarray shape (K0,).
    """
    rng = np.random.default_rng(seed)
    W1 = rng.standard_normal((K1, K2)) * np.sqrt(2.0 / K2)
    b1 = rng.standard_normal(K1)       * 0.5
    W2 = rng.standard_normal((K0, K1)) * np.sqrt(2.0 / K1)

    def teacher_fn(x: np.ndarray) -> np.ndarray:
        return W2 @ np.tanh(W1 @ np.tanh(x) + b1)

    return teacher_fn


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
                   bias_init_scale: float = 0.0,
                   teacher_kind: str = 'tiled',
                   teacher_seed: int = 7) -> None:

    rng = np.random.default_rng(seed)

    if teacher_kind in ('deep_tanh', 'shallow_tanh', 'tiled_tanh'):
        if teacher_kind == 'deep_tanh':
            teacher_fn = build_deep_teacher(K0, K1, K2, seed=teacher_seed)
        elif teacher_kind == 'shallow_tanh':
            teacher_fn = build_shallow_teacher(K0, K1, K2, seed=teacher_seed)
        else:  # tiled_tanh
            teacher_fn = build_tiled_tanh_teacher(K0, K1, K2)
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
    # For tanh/sigmoid hidden layers, the bottom layer must share the same
    # activation so that phi'(x_h) in the back signal matches the derivative of
    # how layer 0 uses x_h.  With a linear bottom, layer 0 computes W0 @ x_h
    # (derivative = 1) but the hidden layer applies tanh'(x_h) < 1, causing a
    # systematic gradient attenuation that stalls inference.  Matching activations
    # also makes the problem representable: student output W0 @ tanh(x_h) can
    # exactly match teacher y = W2 @ tanh(W1 @ x + b).
    act_bottom = act_hidden if act_hidden in ('tanh', 'sigmoid') else 'linear'
    print(f'[TB] ACT_BOTTOM={act_bottom}  ACT_HIDDEN={act_hidden}  BIAS_LR_SCALE={bias_lr_scale}  BIAS_INIT_SCALE={bias_init_scale}  TEACHER={teacher_kind}')
    print(f'[TB] {"=" * 50}')

    gen_k_lut = [max(8, K0), max(16, K1), max(8, K2)]
    net = PCNet3Layer(
        k_lut           = [K0, K1, K2],
        act_lut         = [act_bottom, act_hidden, 'linear'],
        wclip           = 20.0,
        gamma           = gamma,
        alpha           = alpha,
        seed            = seed,
        rtl_init        = True,
        gen_k_lut       = gen_k_lut,
        bias_lr_scale   = bias_lr_scale,
        bias_init_scale = bias_init_scale,
    )

    # RTL init value (32'h3A83126F) — reused to reset states per sample
    x_init = net.layer1.x_state[0]

    def reset_hidden():
        """Reset free-layer states before each sample's inference.

        Without this, hidden states carry over from the previous sample.
        For tanh networks, large carry-over values saturate neurons
        (tanh'(x) → 0), killing the back gradient and preventing settling
        in a fixed number of inference ticks — regardless of how many ticks
        are used.  Resetting to x_init ensures inference always starts from
        a non-saturated, neutral point.
        """
        net.layer1.x_state[:] = x_init
        net.layer0.x_state[:] = x_init

    def mse_dataset():
        net.set_rates(alpha=0.0, gamma=gamma)
        acc = 0.0
        for s in range(num_samples):
            reset_hidden()
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
                reset_hidden()
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

            # Hidden-layer saturation diagnostic (tanh phi' < 0.1 when |x| > ~1.8)
            h = net.layer1.x_state
            sat_pct = float(np.mean(np.abs(h) > 1.8) * 100)
            h_mean  = float(np.mean(np.abs(h)))
            print(f'[TB] Epoch {ep + 1}  alpha={alpha_ep:.5f}  MSE={msep:.6f}'
                  f'  hidden |x|_mean={h_mean:.3f}  sat%={sat_pct:.0f}%')

    print(f'Saved: {csv_path}\n')


def main():
    p = argparse.ArgumentParser(description='tb_scale_function Python reproduction')
    p.add_argument('--configs', nargs='+', default=['2_4_3', '4_8_4', '8_16_8'],
                   help='Configs to run, e.g. 2_4_3 4_8_4 8_16_8')
    p.add_argument('--alpha',       type=float, default=None,
                   help='Weight learning rate (default: 0.01 for tiled, 0.003 for deep_tanh)')
    p.add_argument('--gamma',       type=float, default=None,
                   help='State inference rate (default: 0.04)')
    p.add_argument('--infer-ticks', type=int,   default=200)
    p.add_argument('--learn-ticks', type=int,   default=20)
    p.add_argument('--eval-settle', type=int,   default=None,
                   help='Settling ticks during evaluation (default: 300 for tiled, 1000 for deep_tanh)')
    p.add_argument('--epochs',      type=int,   default=25)
    p.add_argument('--seed',        type=int,   default=0)
    p.add_argument('--lr-decay',    type=float, default=None,
                   help='Multiplicative alpha decay per epoch (default: 0.95 for tiled, 0.90 for deep_tanh)')
    p.add_argument('--n-samples',   type=int,   default=None,
                   help='Random samples per epoch (default: 32×K1 for tanh teachers, '
                        '256 for tiled; overrides auto-scaling when set explicitly)')
    p.add_argument('--sample-sweep', type=str,  default=None,
                   help='Comma-separated list of sample counts to sweep over, e.g. 256,1024,4096. '
                        'Runs each config × each N; outputs scale_{cfg}_n{N}.csv')
    p.add_argument('--act-hidden', type=str, default=None,
                   choices=['relu', 'tanh', 'sigmoid', 'linear'],
                   help='Activation function for the hidden layer '
                        '(default: relu for tiled teacher, tanh for deep_tanh teacher)')
    p.add_argument('--bias-lr-scale', type=float, default=1.0,
                   help='Bias learning rate multiplier (0.0 = frozen bias, default: 1.0)')
    p.add_argument('--bias-init-scale', type=float, default=0.0,
                   help='Std-dev of N(0, s) bias initialisation (0.0 = zero init, default: 0.0)')
    p.add_argument('--act-sweep', action='store_true',
                   help='If set, sweep over all hidden activations (relu, tanh, sigmoid) '
                        'for each config/size combination')
    p.add_argument('--teacher', type=str, default='tiled',
                   choices=['deep_tanh', 'shallow_tanh', 'tiled', 'tiled_tanh'],
                   help='Teacher function class: tiled = sparse ReLU motif (default); '
                        'tiled_tanh = sparse tanh motif, same structure as tiled but with tanh; '
                        'shallow_tanh = single-hidden-layer tanh MLP (realizable by student); '
                        'deep_tanh = two-hidden-layer tanh MLP (unrealizable, harder)')
    p.add_argument('--teacher-seed', type=int, default=7,
                   help='RNG seed for deep_tanh teacher weights (default: 7)')
    p.add_argument('--width-mult', type=int, default=1,
                   help='Multiply K1 (hidden width) by this factor for more capacity (default: 1)')
    args = p.parse_args()

    # Resolve teacher-specific defaults for any flag left unset
    if args.teacher in ('deep_tanh', 'shallow_tanh'):
        if args.alpha       is None: args.alpha       = 0.003
        if args.gamma       is None: args.gamma       = 0.04
        if args.lr_decay    is None: args.lr_decay    = 1.0
        if args.act_hidden  is None: args.act_hidden  = 'tanh'
        if args.eval_settle is None: args.eval_settle = 1000
    elif args.teacher == 'tiled_tanh':
        if args.alpha       is None: args.alpha       = 0.01
        if args.gamma       is None: args.gamma       = 0.04
        if args.lr_decay    is None: args.lr_decay    = 0.95
        if args.act_hidden  is None: args.act_hidden  = 'tanh'
        if args.eval_settle is None: args.eval_settle = 300
    else:  # tiled
        if args.alpha       is None: args.alpha       = 0.01
        if args.gamma       is None: args.gamma       = 0.04
        if args.lr_decay    is None: args.lr_decay    = 0.95
        if args.act_hidden  is None: args.act_hidden  = 'relu'
        if args.eval_settle is None: args.eval_settle = 300

    # Determine activation variants to sweep
    act_variants = ['relu', 'tanh', 'sigmoid'] if args.act_sweep else [args.act_hidden]

    # Filename tags that distinguish runs from different settings
    teacher_tag = {'deep_tanh': '_dt', 'shallow_tanh': '_st', 'tiled_tanh': '_tt', 'tiled': ''}.get(args.teacher, '')
    width_tag   = f'_w{args.width_mult}' if args.width_mult != 1 else ''

    # Build list of (cfg, n_samples, act_hidden, bias_lr_scale, bias_init_scale, csv_filename) runs
    runs = []
    if args.sample_sweep is not None:
        sweep_ns = [int(x) for x in args.sample_sweep.split(',')]
        for cfg in args.configs:
            for n in sweep_ns:
                for act in act_variants:
                    act_tag  = f'_{act}' if act != 'relu' else ''
                    blr_tag  = f'_blr{args.bias_lr_scale}' if args.bias_lr_scale != 1.0 else ''
                    bis_tag  = f'_bis{args.bias_init_scale}' if args.bias_init_scale != 0.0 else ''
                    runs.append((cfg, n, act, args.bias_lr_scale, args.bias_init_scale,
                                 f'scale_{cfg}_n{n}{act_tag}{blr_tag}{bis_tag}{teacher_tag}{width_tag}.csv'))
    else:
        for cfg in args.configs:
            for act in act_variants:
                act_tag  = f'_{act}' if act != 'relu' else ''
                blr_tag  = f'_blr{args.bias_lr_scale}' if args.bias_lr_scale != 1.0 else ''
                bis_tag  = f'_bis{args.bias_init_scale}' if args.bias_init_scale != 0.0 else ''
                runs.append((cfg, args.n_samples, act, args.bias_lr_scale, args.bias_init_scale,
                             f'scale_{cfg}{act_tag}{blr_tag}{bis_tag}{teacher_tag}{width_tag}.csv'))

    for cfg, n_samples, act_hidden, bias_lr_scale, bias_init_scale, filename in runs:
        parts = cfg.split('_')
        K2, K1, K0 = int(parts[0]), int(parts[1]) * args.width_mult, int(parts[2])

        # For dense tanh teachers, scale n_samples with K1×K2 (the dominant weight
        # matrix size) to maintain constant sample-to-parameter ratio.  Compensate
        # by scaling alpha down proportionally so the epoch-level weight update
        # magnitude stays constant regardless of config size.
        # n_ref = smallest config's sample count (K1=4, K2=2 → 64), used as anchor.
        n_ref = 8 * 4 * 2  # = 64
        if args.n_samples is not None:
            eff_n_samples = n_samples
            eff_alpha = args.alpha
        elif args.teacher in ('shallow_tanh', 'deep_tanh'):
            eff_n_samples = 8 * K1 * K2
            eff_alpha = args.alpha * n_ref / eff_n_samples  # keep epoch-level LR constant
        else:  # tiled, tiled_tanh: use grid (n_samples=None triggers grid builder)
            eff_n_samples = n_samples
            eff_alpha = args.alpha

        csv_path = f'python_runs/{filename}'
        run_experiment(K0, K1, K2, csv_path,
                       alpha=eff_alpha,
                       gamma=args.gamma,
                       infer_ticks=args.infer_ticks,
                       learn_ticks=args.learn_ticks,
                       eval_settle=args.eval_settle,
                       epochs=args.epochs,
                       seed=args.seed,
                       lr_decay=args.lr_decay,
                       n_samples=eff_n_samples,
                       act_hidden=act_hidden,
                       bias_lr_scale=bias_lr_scale,
                       bias_init_scale=bias_init_scale,
                       teacher_kind=args.teacher,
                       teacher_seed=args.teacher_seed)


if __name__ == '__main__':
    main()
