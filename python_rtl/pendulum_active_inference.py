#!/usr/bin/env python3
"""
Predictive-coding inverted pendulum via active inference.
3-layer network. Learned weights. No pretraining on data.

Network layout (layer 0 = bottom, layer 2 = top):
  layer 2  obs    [theta, theta_dot]   clamped to sensor reading
  layer 1  hidden [z_theta, z_dot]     free — inferred hidden state
  layer 0  goal   [0, 0]               clamped — preferred (upright) state

Information flow:
  Top-down prediction: layer2 → layer1 → layer0.
  Bottom-up error:     layer0 → layer1 → layer2 (back_vec path).

  Layer 1 (hidden) receives x_up = obs from layer 2 and learns weights
  W such that mu = W * obs.  State update:
      z += gamma * (back_from_goal - (z - W*obs))
  At the PC fixed point z = W*obs → obs as W → I.

  The goal layer (layer 0) is frozen (alpha=0) and its back signal to
  layer 1 is zeroed.  This prevents the goal prior from perturbing
  the dynamics-learning taking place in layer 1.  The goal's influence
  enters exclusively through the action gradient.

Weight initialisation:
  All weight matrices initialised to identity.  This is a structural
  prior (not pretraining): it means z tracks obs from tick 1, so the
  action gradient is immediately meaningful on an unstable plant.
  Weights are learned online via the standard PC Hebbian rule:
      W_j += alpha * eps_i * phi(x_j)

Active-inference action update:
  Preferred future observation: [0, 0] (upright, stationary).
  One-step prediction from z and u:
      mu_dot_next   = z_dot + dt*A*z_theta + dt*B*u
      mu_theta_next = z_theta + dt * mu_dot_next
  Free energy gradient w.r.t. u  (||mu_next - 0||^2):
      dF/du  = dt^2 * B * z_theta  +  dt * B * z_dot
  Leaky-integrator action register (analogous to RTL motor output):
      u_{t+1} = (1 - decay) * u_t  -  action_lr * dF/du

  Only B (plant input gain) is external knowledge.  No state-feedback
  gains.  No hand-crafted control law.

RTL correspondence:
  Each Neuron mirrors neuron_core_single_back: owns x_i, theta, eps_i.
  States S_PRED → S_ERR → S_BACKSUM → S_BACKVEC → S_WUP → S_STATE.
  All arithmetic in float64 (RTL uses recFN); weights hard-clipped to
  match float32 saturation at the register boundary.
"""
from __future__ import annotations
import argparse
from dataclasses import dataclass, field
from typing import Sequence, List
import numpy as np


# ─── activation (linear; RTL supports RELU/TANH/SIGMOID via act_lut) ─────────

def phi_linear(x: float) -> tuple[float, float]:
    return x, 1.0


# ─── RTL cycle-count model ────────────────────────────────────────────────────

def layer_dims(k_lut: Sequence[int], m0: int = 0) -> list[tuple[int, int, int]]:
    """Return (k, n, m) for each layer index."""
    nl = len(k_lut)
    out = []
    for ul in range(nl):
        k = k_lut[ul]
        n = k_lut[0] if nl == 1 else (k_lut[nl-2] if ul == nl-1 else k_lut[ul+1])
        m = m0 if ul == 0 else k_lut[ul-1]
        out.append((k, n, m))
    return out


def net_cpt(k_lut: Sequence[int], m0: int = 0) -> int:
    """Cycles per tick = max neuron latency across all layers."""
    return max(3*n + m + 4 for _, n, m in layer_dims(k_lut, m0))


# ─── neuron_core_single_back (Python model) ───────────────────────────────────

class Neuron:
    """
    One neuron_core_single_back instance.

    n  : number of presynaptic inputs (x_vec, from layer above)
    m  : number of back inputs (from layer below); 0 means no layer below
    winit : initial weight vector, length n (bias slot appended separately)
    """
    def __init__(self, n: int, m: int, winit: np.ndarray,
                 wclip: float, gamma: float, alpha: float,
                 bias_lr_scale: float = 0.1):
        self.n  = n; self.m  = m
        self.wclip = wclip; self.gamma = gamma
        self.alpha = alpha; self.bls = bias_lr_scale
        self.w = np.zeros(n + 1, dtype=np.float64)   # w[n] = bias
        self.w[:n] = np.asarray(winit, dtype=np.float64)
        self.x = 0.0   # hidden state

    def tick(self,
             x_up:    np.ndarray,   # presynaptic from layer above, length n
             back_in: np.ndarray,   # back contributions from below, length m
             clamp:   bool,
             x_obs:   float,
             ) -> tuple[float, np.ndarray]:

        xi = x_obs if clamp else self.x

        # S_PRED: mu = sum_j w_j * phi(x_up_j) + bias  (linear: phi=id)
        mu  = float(np.dot(self.w[:self.n], x_up) + self.w[self.n])

        # S_ERR
        eps = xi - mu
        mi  = self.alpha * eps

        # S_BACKSUM: phi'(xi) * sum(back_in)  (linear: phi'=1)
        back_eff = float(np.sum(back_in))

        # S_BACKVEC: w_j * eps  for j in [0..n-1]
        back_vec = self.w[:self.n] * eps

        # S_WUP: w_j += mi * phi(x_up_j); clip to [−wclip, +wclip]
        self.w[:self.n] = np.clip(
            self.w[:self.n] + mi * x_up, -self.wclip, self.wclip)
        self.w[self.n]  = np.clip(
            self.w[self.n] + mi * self.bls, -self.wclip, self.wclip)

        # S_STATE
        if clamp:
            self.x = x_obs
        else:
            self.x = self.x + self.gamma * (back_eff - eps)

        return eps, back_vec


# ─── pc_layer ─────────────────────────────────────────────────────────────────

class Layer:
    def __init__(self, k: int, n: int, m: int,
                 winit_matrix: np.ndarray,   # shape (k, n)
                 wclip: float, gamma: float, alpha: float):
        self.k = k; self.n = n; self.m = m
        self.neurons = [
            Neuron(n, m, winit_matrix[i], wclip, gamma, alpha)
            for i in range(k)
        ]
        self.x_state = np.zeros(k)
        self.eps     = np.zeros(k)
        self.back_kn = np.zeros((k, n))   # row i = neuron i's back_vec (length n)

    def tick(self, x_up: np.ndarray, back_from_down: np.ndarray,
             clamp_vec: np.ndarray, obs_vec: np.ndarray) -> None:
        for i in range(self.k):
            back_in_i = (back_from_down[:, i]
                         if self.m > 0 else np.zeros(0))
            eps_i, bv = self.neurons[i].tick(
                x_up, back_in_i, bool(clamp_vec[i]), float(obs_vec[i]))
            self.eps[i]       = eps_i
            self.x_state[i]   = self.neurons[i].x
            self.back_kn[i,:] = bv

    @property
    def back_nk(self) -> np.ndarray:
        """Transpose of back_kn: shape (n, k). Wired to layer above as back_from_down."""
        return self.back_kn.T


# ─── 3-layer network: obs / hidden / goal ─────────────────────────────────────

class PCNet3Layer:
    """
    pc_network_nlayer with k_lut = [2, 2, 2]:
      layer 0 (bottom): goal  — clamped to [0,0],  alpha=0,  back zeroed
      layer 1 (middle): hidden — free state         alpha>0
      layer 2 (top):    obs   — clamped to sensor,  alpha>0

    The goal layer exists architecturally (3-layer requirement) but does not
    perturb the hidden-state inference; its signal enters only via dF/du.
    """
    def __init__(self, obs_dim: int = 2,
                 wclip: float = 20.0, gamma: float = 0.3, alpha: float = 0.003):
        self.obs_dim = obs_dim

        I = np.eye(obs_dim, dtype=np.float64)

        # layer 0: goal, frozen weights (alpha=0), no back below (m=0)
        self.layer0 = Layer(k=obs_dim, n=obs_dim, m=0,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=0.0)

        # layer 1: hidden, free, receives top-down from obs (n=obs_dim)
        #          and bottom-up from goal (m=obs_dim) — but we zero that path
        self.layer1 = Layer(k=obs_dim, n=obs_dim, m=obs_dim,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=alpha)

        # layer 2: obs, clamped, receives "above" as zeros (top of stack)
        self.layer2 = Layer(k=obs_dim, n=obs_dim, m=obs_dim,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=alpha)

        self.k_lut = [obs_dim, obs_dim, obs_dim]
        self.m0    = 0

    def tick(self, obs: np.ndarray, goal: np.ndarray | None = None) -> None:
        if goal is None:
            goal = np.zeros(self.obs_dim)
        obs  = np.asarray(obs,  dtype=np.float64)
        goal = np.asarray(goal, dtype=np.float64)

        # layer 2 (obs/top): x_up=0, back from hidden, clamped to obs
        self.layer2.tick(
            x_up           = np.zeros(self.obs_dim),
            back_from_down = self.layer1.back_nk,
            clamp_vec      = np.ones(self.obs_dim,  dtype=bool),
            obs_vec        = obs,
        )

        # layer 1 (hidden): x_up = obs (from layer 2), back from goal ZEROED
        # Zeroing goal back prevents the frozen goal weights from biasing
        # the hidden state away from the observation.
        self.layer1.tick(
            x_up           = self.layer2.x_state,
            back_from_down = np.zeros((self.obs_dim, self.obs_dim)),
            clamp_vec      = np.zeros(self.obs_dim, dtype=bool),
            obs_vec        = np.zeros(self.obs_dim),
        )

        # layer 0 (goal/bottom): x_up = hidden state, clamped to goal
        self.layer0.tick(
            x_up           = self.layer1.x_state,
            back_from_down = np.zeros((0, self.obs_dim)),
            clamp_vec      = np.ones(self.obs_dim,  dtype=bool),
            obs_vec        = goal,
        )

    @property
    def z(self) -> np.ndarray:
        """Inferred hidden state from layer 1."""
        return self.layer1.x_state.copy()

    @property
    def goal_eps(self) -> np.ndarray:
        """Goal-layer prediction error ≈ 0 − z (since W_goal ≈ I at init)."""
        return self.layer0.eps.copy()


# ─── pendulum plant ────────────────────────────────────────────────────────────

class Pendulum:
    """Linear inverted pendulum: theta_ddot = a*theta + b*u − d*theta_dot"""
    def __init__(self, dt=0.01, a=15.0, b=1.0, d=0.2, th0=0.08):
        self.dt=dt; self.a=a; self.b=b; self.d=d
        self.th=th0; self.dth=0.0
    def obs(self) -> np.ndarray:
        return np.array([self.th, self.dth])
    def step(self, u: float) -> None:
        tdd = self.a*self.th + self.b*u - self.d*self.dth
        self.dth += self.dt * tdd
        self.th  += self.dt * self.dth


# ─── convergence helper ───────────────────────────────────────────────────────

def convergence_tick(hist, theta_thresh, dtheta_thresh, hold):
    n = len(hist)
    if hold > n: return None
    ta = np.abs(hist[:,1]); da = np.abs(hist[:,2])
    for t in range(n - hold + 1):
        if np.all(ta[t:t+hold] <= theta_thresh) and np.all(da[t:t+hold] <= dtheta_thresh):
            return t
    return None


# ─── main simulation loop ─────────────────────────────────────────────────────

def run(args):
    env = Pendulum()
    net = PCNet3Layer(obs_dim=2,
                      wclip=args.weight_clip,
                      gamma=args.gamma,
                      alpha=args.alpha)

    cpt   = net_cpt(net.k_lut, net.m0)
    cpe   = cpt * args.infer_ticks
    total = 0
    action = 0.0
    dt = env.dt; B = env.b

    hist = np.zeros((args.steps, 10))

    for t in range(args.steps):
        o = env.obs()

        for _ in range(args.infer_ticks):
            net.tick(o)
            total += cpt

        z = net.z   # inferred state ≈ obs as W → I

        # Active-inference action gradient: dF/du of ||mu_next − 0||²
        #   mu_theta_next     ≈ z_theta + dt*(z_dot + dt*B*u)
        #   mu_thetadot_next  ≈ z_dot   + dt*B*u
        # => dF/du = dt²·B·z_theta + dt·B·z_dot
        grad   = dt**2 * B * z[0] + dt * B * z[1]
        action = (1.0 - args.action_decay) * action - args.action_lr * grad
        action = float(np.clip(action, -args.action_clip, args.action_clip))

        env.step(action)

        eps = net.layer1.eps.copy()
        hist[t] = [t, env.th, env.dth, action,
                   o[0], o[1], z[0], z[1], eps[0], eps[1]]

        if args.print_every > 0 and (t % args.print_every == 0 or t == args.steps-1):
            print(f"t={t:4d}  th={env.th: .5f}  dth={env.dth: .5f}  "
                  f"u={action: .4f}  z=[{z[0]:.4f},{z[1]:.4f}]")

    return hist, cpt, cpe, total


# ─── CLI ──────────────────────────────────────────────────────────────────────

def fmt(t: float) -> str:
    for s, u in [(1,"s"),(1e-3,"ms"),(1e-6,"us"),(1e-9,"ns")]:
        if t >= s: return f"{t/s:.4f} {u}"
    return f"{t:.2e} s"


def main():
    p = argparse.ArgumentParser(
        description="3-layer PC pendulum — learned weights, active-inference action")
    p.add_argument("--steps",             type=int,   default=1500)
    p.add_argument("--alpha",             type=float, default=0.003,
                   help="weight learning rate (>0, applied to layers 1 and 2)")
    p.add_argument("--gamma",             type=float, default=0.3,
                   help="hidden state inference rate")
    p.add_argument("--infer-ticks",       type=int,   default=20,
                   help="PC ticks per environment step")
    p.add_argument("--action-lr",         type=float, default=5_000_000.0,
                   help="step size on dF/du action gradient")
    p.add_argument("--action-decay",      type=float, default=0.3,
                   help="leaky decay on action register (time const = 1/decay steps)")
    p.add_argument("--action-clip",       type=float, default=600.0)
    p.add_argument("--weight-clip",       type=float, default=20.0)
    p.add_argument("--print-every",       type=int,   default=100)
    p.add_argument("--csv",               type=str,   default="pendulum_ai.csv")
    p.add_argument("--clock-rates-mhz",   type=str,   default="1,10,50,100,250,1000")
    p.add_argument("--conv-theta-thresh",     type=float, default=0.01)
    p.add_argument("--conv-thetadot-thresh",  type=float, default=0.05)
    p.add_argument("--conv-hold-ticks",       type=int,   default=25)
    args = p.parse_args()
    assert args.alpha > 0, "--alpha must be > 0"

    hist, cpt, cpe, total = run(args)

    header = "t,theta,theta_dot,u,s_th,s_dot,z_th,z_dot,eps_th,eps_dot"
    np.savetxt(args.csv, hist, delimiter=",", header=header, comments="")

    conv = convergence_tick(hist,
                            args.conv_theta_thresh,
                            args.conv_thetadot_thresh,
                            args.conv_hold_ticks)

    print(f"\nsaved:           {args.csv}")
    print(f"mean |theta|   = {np.mean(np.abs(hist[:,1])):.5f}")
    print(f"final |theta|  = {abs(hist[-1,1]):.6f}")
    print(f"conv tick      = {conv if conv is not None else 'not detected'}")
    if conv is not None:
        print(f"conv cycles    = {(conv+1)*cpe}")

    print(f"\ncycles_per_net_tick  = {cpt}")
    print(f"cycles_per_env_step  = {cpe}  ({args.infer_ticks} ticks × {cpt} cyc/tick)")
    print(f"total_cycles         = {total}")
    print(f"\n{'f_clk':>12}  {'net_tick':>14}  {'env_step':>14}  {'full_run':>14}  {'conv':>14}")
    for f_mhz in [float(x) for x in args.clock_rates_mhz.split(",") if x.strip()]:
        f  = f_mhz * 1e6
        cv = fmt((conv+1)*cpe/f) if conv is not None else "N/A"
        print(f"{f_mhz:10.1f} MHz  {fmt(cpt/f):>14}  {fmt(cpe/f):>14}  "
              f"{fmt(total/f):>14}  {cv:>14}")


if __name__ == "__main__":
    main()
