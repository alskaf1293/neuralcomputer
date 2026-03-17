#!/usr/bin/env python3
"""
Predictive-coding angle-only inverted pendulum via active inference.

Key difference from pendulum_active_inference.py:
  Only theta (angle) is directly sensed. A finite-difference velocity
  estimate fdiff = (theta_t − theta_{t-1}) / dt is derived numerically
  from the angle sensor and used as the second observation channel.

  obs = [theta, fdiff]  (both fed to the same 3-layer PC network)

  The full-state version clamps the exact [theta, theta_dot] to the obs
  layer. Here we clamp [theta, fdiff] where fdiff ≈ theta_dot_{t-1}
  (one-step delayed). The PC network's weight learning smooths this
  noisy derivative and the hidden state converges to an accurate
  [z_theta, z_dot] estimate.

  Because fdiff carries the wrong velocity for the first step after
  a large impulsive torque, the action gain is reduced:
    action_lr_dot << action_lr_theta
  to prevent velocity-lag-induced saturation. The angle gain is kept
  strong for fast convergence.

  Effective PD gains (matches RTL control law):
    K_theta = args.action_lr_theta * dt² * B
    K_dot   = args.action_lr_dot   * dt  * B
  Stability condition: K_dot > A/B (overcomes inverted-pendulum
  restoring term). Default: K_dot = 50 000 * 0.01 = 500 >> A=15 ✓

Network layout (identical to pendulum_active_inference.py):
  layer 2  obs    [theta, fdiff]  clamped
  layer 1  hidden [z_theta, z_dot] free
  layer 0  goal   [0, 0]          clamped

RTL correspondence:
  One extra register for fdiff (delay-by-1 on sensor lane).
  All other datapath identical to full-state version.
  All arithmetic in float64 (RTL: recFN float32).
"""
from __future__ import annotations
import argparse
from typing import Sequence
import numpy as np


# ─── activation ───────────────────────────────────────────────────────────────

def phi_linear(x: float) -> tuple[float, float]:
    return x, 1.0


# ─── RTL cycle-count model ────────────────────────────────────────────────────

def layer_dims(k_lut: Sequence[int], m0: int = 0) -> list[tuple[int, int, int]]:
    nl = len(k_lut)
    out = []
    for ul in range(nl):
        k = k_lut[ul]
        n = k_lut[0] if nl == 1 else (k_lut[nl-2] if ul == nl-1 else k_lut[ul+1])
        m = m0 if ul == 0 else k_lut[ul-1]
        out.append((k, n, m))
    return out


def net_cpt(k_lut: Sequence[int], m0: int = 0) -> int:
    return max(3*n + m + 4 for _, n, m in layer_dims(k_lut, m0))


# ─── neuron_core_single_back ──────────────────────────────────────────────────

class Neuron:
    def __init__(self, n: int, m: int, winit: np.ndarray,
                 wclip: float, gamma: float, alpha: float,
                 bias_lr_scale: float = 0.1):
        self.n = n; self.m = m
        self.wclip = wclip; self.gamma = gamma
        self.alpha = alpha; self.bls = bias_lr_scale
        self.w = np.zeros(n + 1, dtype=np.float64)
        self.w[:n] = np.asarray(winit, dtype=np.float64)
        self.x = 0.0

    def tick(self, x_up: np.ndarray, back_in: np.ndarray,
             clamp: bool, x_obs: float) -> tuple[float, np.ndarray]:
        xi = x_obs if clamp else self.x
        mu  = float(np.dot(self.w[:self.n], x_up) + self.w[self.n])
        eps = xi - mu
        mi  = self.alpha * eps
        back_eff = float(np.sum(back_in))
        back_vec = self.w[:self.n] * eps
        self.w[:self.n] = np.clip(
            self.w[:self.n] + mi * x_up, -self.wclip, self.wclip)
        self.w[self.n] = np.clip(
            self.w[self.n] + mi * self.bls, -self.wclip, self.wclip)
        if clamp:
            self.x = x_obs
        else:
            self.x = self.x + self.gamma * (back_eff - eps)
        return eps, back_vec


# ─── pc_layer ─────────────────────────────────────────────────────────────────

class Layer:
    def __init__(self, k: int, n: int, m: int,
                 winit_matrix: np.ndarray,
                 wclip: float, gamma: float, alpha: float):
        self.k = k; self.n = n; self.m = m
        self.neurons = [
            Neuron(n, m, winit_matrix[i], wclip, gamma, alpha)
            for i in range(k)
        ]
        self.x_state = np.zeros(k)
        self.eps     = np.zeros(k)
        self.back_kn = np.zeros((k, n))

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
        return self.back_kn.T


# ─── 3-layer network (same as full-state, angle-only obs) ────────────────────

class PCNet3Layer:
    """
    Same 3-layer PC network as pendulum_active_inference.py.
    obs = [theta, fdiff] — second channel is a finite-difference
    velocity estimate, not a direct velocity sensor.
    """
    def __init__(self, obs_dim: int = 2,
                 wclip: float = 20.0, gamma: float = 0.3, alpha: float = 0.003):
        self.obs_dim = obs_dim
        I = np.eye(obs_dim, dtype=np.float64)

        self.layer0 = Layer(k=obs_dim, n=obs_dim, m=0,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=0.0)
        self.layer1 = Layer(k=obs_dim, n=obs_dim, m=obs_dim,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=alpha)
        self.layer2 = Layer(k=obs_dim, n=obs_dim, m=obs_dim,
                            winit_matrix=I.copy(),
                            wclip=wclip, gamma=gamma, alpha=alpha)

        self.k_lut = [obs_dim, obs_dim, obs_dim]
        self.m0    = 0

    def tick(self, obs: np.ndarray, goal: np.ndarray | None = None) -> None:
        if goal is None:
            goal = np.zeros(self.obs_dim)
        obs  = np.asarray(obs,  dtype=np.float64)

        self.layer2.tick(
            x_up           = np.zeros(self.obs_dim),
            back_from_down = self.layer1.back_nk,
            clamp_vec      = np.ones(self.obs_dim, dtype=bool),
            obs_vec        = obs,
        )
        self.layer1.tick(
            x_up           = self.layer2.x_state,
            back_from_down = np.zeros((self.obs_dim, self.obs_dim)),
            clamp_vec      = np.zeros(self.obs_dim, dtype=bool),
            obs_vec        = np.zeros(self.obs_dim),
        )
        self.layer0.tick(
            x_up           = self.layer1.x_state,
            back_from_down = np.zeros((0, self.obs_dim)),
            clamp_vec      = np.ones(self.obs_dim, dtype=bool),
            obs_vec        = goal,
        )

    @property
    def z(self) -> np.ndarray:
        return self.layer1.x_state.copy()


# ─── pendulum plant ────────────────────────────────────────────────────────────

class Pendulum:
    """Linear inverted pendulum: theta_ddot = a*theta + b*u − d*theta_dot"""
    def __init__(self, dt=0.01, a=15.0, b=1.0, d=0.2, th0=0.08):
        self.dt = dt; self.a = a; self.b = b; self.d = d
        self.th = th0; self.dth = 0.0

    def obs(self) -> float:
        return self.th   # angle only — no velocity sensor

    def step(self, u: float) -> None:
        tdd = self.a * self.th + self.b * u - self.d * self.dth
        self.dth += self.dt * tdd
        self.th  += self.dt * self.dth


# ─── convergence helper ───────────────────────────────────────────────────────

def convergence_tick(hist, theta_thresh: float, dtheta_thresh: float, hold: int):
    n = len(hist)
    if hold > n:
        return None
    ta = np.abs(hist[:, 1]); da = np.abs(hist[:, 2])
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
    theta_prev = env.obs()

    hist = np.zeros((args.steps, 10))

    for t in range(args.steps):
        theta_obs = env.obs()

        # angle-only: derive velocity numerically from angle sensor
        fdiff = (theta_obs - theta_prev) / dt
        theta_prev = theta_obs

        obs = np.array([theta_obs, fdiff])

        for _ in range(args.infer_ticks):
            net.tick(obs)
            total += cpt

        z = net.z

        # split action gradient: separate gains for angle and velocity
        # prevents velocity-lag saturation while keeping strong angle gain
        grad = (args.action_lr_theta * dt**2 * B * z[0]
              + args.action_lr_dot   * dt     * B * z[1])
        action = (1.0 - args.action_decay) * action - grad
        action = float(np.clip(action, -args.action_clip, args.action_clip))

        env.step(action)

        eps = net.layer1.eps.copy()
        hist[t] = [t, env.th, env.dth, action,
                   theta_obs, fdiff, z[0], z[1], eps[0], eps[1]]

        if args.print_every > 0 and (t % args.print_every == 0 or t == args.steps - 1):
            print(f"t={t:4d}  th={env.th: .5f}  dth={env.dth: .5f}  "
                  f"u={action: .4f}  z=[{z[0]:.4f},{z[1]:.4f}]  "
                  f"zdot_err={z[1]-env.dth: .4f}")

    return hist, cpt, cpe, total


# ─── CLI ──────────────────────────────────────────────────────────────────────

def fmt(t: float) -> str:
    for s, u in [(1, "s"), (1e-3, "ms"), (1e-6, "us"), (1e-9, "ns")]:
        if t >= s:
            return f"{t/s:.4f} {u}"
    return f"{t:.2e} s"


def main():
    p = argparse.ArgumentParser(
        description="PC angle-only pendulum — velocity from finite-diff of angle sensor")
    p.add_argument("--steps",               type=int,   default=1500)
    p.add_argument("--alpha",               type=float, default=0.003,
                   help="weight learning rate (>0)")
    p.add_argument("--gamma",               type=float, default=0.3)
    p.add_argument("--infer-ticks",         type=int,   default=20)
    p.add_argument("--action-lr-theta",     type=float, default=5_000_000.0,
                   help="action gradient gain on z_theta  (same as full-state)")
    p.add_argument("--action-lr-dot",       type=float, default=50_000.0,
                   help="action gradient gain on z_dot    (100x smaller than full-state "
                        "to avoid saturation from 1-step velocity lag)")
    p.add_argument("--action-decay",        type=float, default=0.3)
    p.add_argument("--action-clip",         type=float, default=600.0)
    p.add_argument("--weight-clip",         type=float, default=20.0)
    p.add_argument("--print-every",         type=int,   default=100)
    p.add_argument("--csv",                 type=str,   default="pendulum_angle_only.csv")
    p.add_argument("--clock-rates-mhz",     type=str,   default="1,10,50,100,250,1000")
    p.add_argument("--conv-theta-thresh",       type=float, default=0.01)
    p.add_argument("--conv-thetadot-thresh",    type=float, default=0.05)
    p.add_argument("--conv-hold-ticks",         type=int,   default=25)
    args = p.parse_args()
    assert args.alpha > 0

    hist, cpt, cpe, total = run(args)

    header = "t,theta,theta_dot,u,obs_theta,fdiff,z_theta,z_dot,eps0,eps1"
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
