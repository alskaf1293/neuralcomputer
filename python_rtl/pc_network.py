"""
pc_network.py — RTL-faithful predictive-coding network classes.

Extracted from pendulum_active_inference.py and generalised for arbitrary
3-layer architectures.  Serves as the shared base for testbench reproductions.

RTL correspondence:
  Neuron      → neuron_core_single_back   (states: PRED→ERR→BACKSUM→BACKVEC→WUP→STATE)
  Layer       → pc_layer                  (vectorised across k neurons)
  PCNet3Layer → pc_network_nlayer (3-layer specialisation)

Key design notes:
  • Activation (phi) is the CURRENT layer's function applied to x_up
    (presynaptic inputs from the layer above).  Matches RTL ACT_LUT[l].
  • Back contribution from layer l to position i in layer l+1:
      back_nk[i, :] (row i)  →  sum gives (W^T · ε)[i].
  • Weight init: Gaussian(0, 0.1) per layer, matching theta_init_pkg.sv.
  • bias_lr_scale=1.0 matches RTL BIAS_LR_SCALE default.
  • Layer.tick() is fully vectorised (numpy matrix ops) for performance.
  • Arithmetic is float64 (RTL uses float32 recFN); results are qualitatively
    faithful but not bit-exact.
"""
from __future__ import annotations

import numpy as np
from typing import Optional


# ── Activation functions (vectorised over arrays) ─────────────────────────────

def _phi_linear(x: np.ndarray):
    return x.copy(), np.ones_like(x)

def _phi_relu(x: np.ndarray):
    return np.maximum(0.0, x), (x > 0.0).astype(np.float64)

def _phi_tanh(x: np.ndarray):
    t = np.tanh(x)
    return t, 1.0 - t * t

def _phi_sigmoid(x: np.ndarray):
    s = 1.0 / (1.0 + np.exp(-x))
    return s, s * (1.0 - s)

_PHI = {
    'linear':  _phi_linear,
    'relu':    _phi_relu,
    'tanh':    _phi_tanh,
    'sigmoid': _phi_sigmoid,
}

def get_phi(name: str):
    if name not in _PHI:
        raise ValueError(f"Unknown activation '{name}'. Choose from {list(_PHI)}")
    return _PHI[name]


# ── RTL cycle-count model ─────────────────────────────────────────────────────

def layer_dims(k_lut: list[int], m0: int = 0) -> list[tuple[int, int, int]]:
    """Return (k, n, m) for each layer index (bottom-to-top)."""
    nl = len(k_lut)
    out = []
    for ul in range(nl):
        k = k_lut[ul]
        n = k_lut[0] if nl == 1 else (k_lut[nl-2] if ul == nl-1 else k_lut[ul+1])
        m = m0 if ul == 0 else k_lut[ul-1]
        out.append((k, n, m))
    return out

def net_cpt(k_lut: list[int], m0: int = 0) -> int:
    """Cycles per tick = max neuron latency across all layers."""
    return max(3*n + m + 4 for _, n, m in layer_dims(k_lut, m0))


# ── Neuron (neuron_core_single_back) ─────────────────────────────────────────
# Reference implementation — used for documentation; Layer uses vectorised ops.

class Neuron:
    """
    One neuron_core_single_back instance (reference, not used by Layer).

    Parameters
    ----------
    n : presynaptic input width (from the layer above).
    m : back-input width (from the layer below); 0 = no layer below.
    winit : initial weight vector, length n.
    phi   : activation — applied to x_up in S_PRED/S_WUP, phi'(xi) in S_BACKSUM.
    """
    def __init__(self, n: int, m: int, winit: np.ndarray,
                 phi: str = 'linear',
                 wclip: float = 20.0,
                 gamma: float = 0.1,
                 alpha: float = 0.05,
                 bias_lr_scale: float = 1.0):
        self.n = n; self.m = m
        self.phi = get_phi(phi)
        self.wclip = wclip; self.gamma = gamma; self.alpha = alpha; self.bls = bias_lr_scale
        self.w = np.zeros(n + 1, dtype=np.float64)
        if n > 0:
            self.w[:n] = np.asarray(winit, dtype=np.float64)
        self.x = 0.0

    def tick(self, x_up: np.ndarray, back_in: np.ndarray,
             clamp: bool, x_obs: float) -> tuple[float, np.ndarray]:
        xi = x_obs if clamp else self.x
        phi_xup, _ = self.phi(x_up) if self.n > 0 else (np.zeros(0), np.zeros(0))
        mu = float(np.dot(self.w[:self.n], phi_xup) + self.w[self.n])
        eps = xi - mu
        _, phi_prime = self.phi(np.array([xi]))
        back_eff = float(phi_prime[0]) * float(np.sum(back_in))
        back_vec = self.w[:self.n] * eps
        mi = self.alpha * eps
        if self.n > 0:
            self.w[:self.n] = self.w[:self.n] + mi * phi_xup
        self.w[self.n] = self.w[self.n] + mi * self.bls
        self.x = x_obs if clamp else (self.x + self.gamma * (back_eff - eps))
        return eps, back_vec


# ── Layer (pc_layer) — vectorised ─────────────────────────────────────────────

class Layer:
    """
    One pc_layer containing k neurons — fully vectorised across neurons.

    Internal state
    --------------
    W    : weight matrix, shape (k, n).  W[i, :] = weights for neuron i.
    bias : bias vector, shape (k,).
    x_state : current state, shape (k,).
    eps     : prediction errors from last tick, shape (k,).
    back_kn : backward matrix, shape (k, n).  back_kn[i, :] = W[i, :] * eps[i].
    back_nk : transpose of back_kn, shape (n, k).
              back_nk[j, :].sum() = total back contribution to position j above.
    """
    def __init__(self, k: int, n: int, m: int,
                 winit_matrix: np.ndarray,
                 phi: str = 'linear',
                 wclip: float = 20.0,
                 gamma: float = 0.1,
                 alpha: float = 0.05,
                 bias_lr_scale: float = 1.0,
                 x_init: float = 0.0,
                 bias_init: Optional[np.ndarray] = None):
        self.k = k; self.n = n; self.m = m
        self.phi_fn = get_phi(phi)
        self.wclip = wclip; self.gamma = gamma; self.alpha = alpha; self.bls = bias_lr_scale

        self.W    = np.asarray(winit_matrix, dtype=np.float64)   # (k, n)
        self.bias = np.zeros(k, dtype=np.float64) if bias_init is None else np.asarray(bias_init, dtype=np.float64)
        self.x_state = np.full(k, x_init, dtype=np.float64)
        self.eps     = np.zeros(k, dtype=np.float64)
        self.back_kn = np.zeros((k, n), dtype=np.float64)

    def set_rates(self, alpha: float, gamma: float) -> None:
        self.alpha = alpha
        self.gamma = gamma

    def tick(self,
             x_up:          np.ndarray,   # from layer above, shape (n,) or (0,)
             back_from_down: np.ndarray,   # back_nk of layer below, shape (k, m)
             clamp_vec:      np.ndarray,   # bool array, shape (k,)
             obs_vec:        np.ndarray,   # observations, shape (k,)
             ) -> None:
        """
        Vectorised PC tick for all k neurons simultaneously.

        back_from_down[i, :] contains the back contributions from the layer
        below to neuron i in this layer.  sum(back_from_down[i, :]) gives
        (W_below^T · ε_below)[i] — the standard PC error signal.
        """
        # S_PRED: phi(x_up) applied to presynaptic from above, shared across neurons
        if self.n > 0:
            phi_xup, _ = self.phi_fn(x_up)              # shape (n,)
            mu = self.W @ phi_xup + self.bias            # shape (k,)
        else:
            phi_xup = np.zeros(0)
            mu = self.bias.copy()                        # top layer: bias only

        # Effective state: clamped neurons use obs, free neurons use self.x_state
        x_eff = np.where(clamp_vec, obs_vec, self.x_state)

        # S_ERR
        eps = x_eff - mu                                 # shape (k,)

        # S_BACKSUM: phi'(x_eff) · sum_j(back_from_down[i, j])
        _, phi_prime = self.phi_fn(x_eff)               # shape (k,)
        if self.m > 0:
            back_sum = back_from_down.sum(axis=1)        # shape (k,)
            back_eff = phi_prime * back_sum              # shape (k,)
        else:
            back_eff = np.zeros(self.k)

        # S_BACKVEC: back_kn[i, :] = W[i, :] * eps[i]
        if self.n > 0:
            self.back_kn = self.W * eps[:, np.newaxis]  # (k, n) broadcast

        # S_WUP: W[i, :] += alpha * eps[i] * phi_xup
        mi = self.alpha * eps                            # shape (k,)
        if self.n > 0:
            self.W = self.W + np.outer(mi, phi_xup)
        self.bias = self.bias + mi * self.bls

        # S_STATE: clamped → x_obs; free → x + gamma*(back_eff - eps)
        new_x = self.x_state + self.gamma * (back_eff - eps)
        self.x_state = np.where(clamp_vec, obs_vec, new_x)
        self.eps = eps

    @property
    def back_nk(self) -> np.ndarray:
        """
        Transpose of back_kn, shape (n, k).
        Pass this as back_from_down to the layer above:
          back_nk[i, :].sum() = total back contribution to position i above.
        """
        return self.back_kn.T


# ── 3-layer PC network for testbench-style supervised learning ────────────────

class PCNet3Layer:
    """
    pc_network_nlayer with NUM_LAYERS=3.

    Layer numbering (matches RTL K_LUT / ACT_LUT indexing):
      layer 0 : bottom / output    — clamped to target y during training
      layer 1 : hidden             — free state; learns internal representation
      layer 2 : top / input        — clamped to input x

    Information flow:
      Forward  (top-down prediction):  2 → 1 → 0
      Backward (bottom-up error):      0 → 1 → 2  (via back_nk)

    Parameters
    ----------
    k_lut    : [k0, k1, k2]  neurons per layer, bottom to top.
    act_lut  : ['linear'|'relu'|'tanh'|'sigmoid'] per layer, bottom to top.
    wclip    : weight clip magnitude (RTL default 20.0).
    gamma    : state inference rate.
    alpha    : weight learning rate.
    bias_lr_scale : bias update multiplier (RTL default 1.0).
    seed     : RNG seed for weight initialisation.
    """
    def __init__(self, k_lut: list[int], act_lut: list[str],
                 wclip: float = 20.0,
                 gamma: float = 0.1,
                 alpha: float = 0.05,
                 bias_lr_scale: float = 1.0,
                 seed: Optional[int] = None,
                 rtl_init: bool = True,
                 gen_k_lut: Optional[list[int]] = None,
                 bias_init_scale: float = 0.0):
        """
        Parameters
        ----------
        rtl_init  : use float32-cast Gaussian weights matching gen_theta_init_pkg.py.
        gen_k_lut : generation K_LUT used to draw the full weight block before
                    slicing to k_lut.  gen_theta_init_pkg.py defaults to [8,16,8],
                    so the RTL's theta_init_pkg.sv always has that shape and the
                    testbench uses the top-left [0:k0,0:k1] / [0:k1,0:k2] slice.
                    Set this to [8,16,8] (or whatever gen_theta_init_pkg.py was
                    run with) to reproduce RTL weight values exactly.
                    If None, draws exactly (k0,k1) and (k1,k2) — different RNG
                    samples, different dynamics.
        """
        assert len(k_lut) == 3 and len(act_lut) == 3
        k0, k1, k2 = k_lut
        self.k_lut = k_lut

        rng = np.random.default_rng(seed if seed is not None else 0)
        gk = gen_k_lut if gen_k_lut is not None else k_lut

        def rinit(layer_idx: int) -> np.ndarray:
            """Draw full gen block then slice to actual dimensions."""
            gk0, gk1, gk2 = gk[0], gk[1], gk[2]
            if layer_idx == 0:
                gK, gN, aK, aN = gk0, gk1, k0, k1
            else:  # layer 1
                gK, gN, aK, aN = gk1, gk2, k1, k2
            raw = rng.standard_normal((gK, gN))
            if rtl_init:
                full = (raw.astype(np.float32) * np.float32(0.1)).astype(np.float64)
            else:
                full = raw * 0.1
            return full[:aK, :aN]

        # RTL initialises all neuron states to 32'h3A83126F = 0.001 exactly
        # (prevents dead ReLU neurons at start; x>0 → phi'=1 immediately)
        import struct as _struct
        x_init = float(_struct.unpack('>f', _struct.pack('>I', 0x3A83126F))[0])

        def binit(k: int) -> Optional[np.ndarray]:
            if bias_init_scale == 0.0:
                return None
            raw = rng.standard_normal(k)
            if rtl_init:
                return (raw.astype(np.float32) * np.float32(bias_init_scale)).astype(np.float64)
            return raw * bias_init_scale

        # layer 0: bottom (k0 neurons, n=k1 presynaptic from layer 1, m=0)
        self.layer0 = Layer(k0, k1, 0,  rinit(0),  act_lut[0],
                            wclip, gamma, alpha, bias_lr_scale, x_init=float(x_init),
                            bias_init=binit(k0))
        # layer 1: hidden (k1 neurons, n=k2 presynaptic from layer 2, m=k0 back from layer 0)
        self.layer1 = Layer(k1, k2, k0, rinit(1),  act_lut[1],
                            wclip, gamma, alpha, bias_lr_scale, x_init=float(x_init),
                            bias_init=binit(k1))
        # layer 2: top (k2 neurons, n=0 no presynaptic above, m=k1 back from layer 1)
        self.layer2 = Layer(k2, 0,  k1, np.zeros((k2, 0)), act_lut[2],
                            wclip, gamma, alpha, bias_lr_scale, x_init=float(x_init))

    def set_rates(self, alpha: float, gamma: float) -> None:
        for layer in (self.layer0, self.layer1, self.layer2):
            layer.set_rates(alpha, gamma)

    def tick(self,
             x_top:        np.ndarray,           # input, shape (k2,)
             y_bottom:     Optional[np.ndarray],  # target, shape (k0,) or None
             clamp_top:    bool = True,
             clamp_bottom: bool = False,
             ) -> None:
        """One PC inference/learning tick — sequential (Gauss-Seidel) update."""
        k0, k1, k2 = self.k_lut

        # Layer 2 (top): x_up=zeros, back_from_down from layer 1
        # back_from_down shape must be (k2, k1) for row-indexed access
        self.layer2.tick(
            x_up           = np.zeros(0),
            back_from_down = self.layer1.back_nk,              # (k2, k1)
            clamp_vec      = np.ones(k2, dtype=bool) if clamp_top else np.zeros(k2, dtype=bool),
            obs_vec        = np.asarray(x_top, dtype=np.float64),
        )

        # Layer 1 (hidden): x_up from layer 2, back_from_down from layer 0
        # back_from_down shape: (k1, k0) — layer0.back_nk = layer0.back_kn.T
        self.layer1.tick(
            x_up           = self.layer2.x_state,              # (k2,)
            back_from_down = self.layer0.back_nk,              # (k1, k0)
            clamp_vec      = np.zeros(k1, dtype=bool),
            obs_vec        = np.zeros(k1),
        )

        # Layer 0 (bottom): x_up from layer 1, no back below
        obs0 = np.asarray(y_bottom, dtype=np.float64) if y_bottom is not None else np.zeros(k0)
        self.layer0.tick(
            x_up           = self.layer1.x_state,              # (k1,)
            back_from_down = np.zeros((k0, 0)),                 # no layer below
            clamp_vec      = np.ones(k0, dtype=bool) if clamp_bottom and y_bottom is not None
                             else np.zeros(k0, dtype=bool),
            obs_vec        = obs0,
        )

    @property
    def x0(self) -> np.ndarray:
        """Bottom-layer state — the network's output prediction."""
        return self.layer0.x_state.copy()
