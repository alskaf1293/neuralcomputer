#!/usr/bin/env python3
"""
Predictive-coding cart-pole via active inference.
4-state: [x, x_dot, theta, theta_dot]

Network layout (layer 0 = bottom, layer 2 = top):
  layer 2  obs    [x, x_dot, theta, theta_dot]   clamped to sensor reading
  layer 1  hidden [z_x, z_xd, z_th, z_thd]       free — inferred hidden state
  layer 0  goal   [0, 0, 0, 0]                    clamped — preferred state

Plant dynamics (linearised around theta = 0):
  theta_ddot = a_th * theta + b_th * u
  x_ddot     = b_x  * u

  Default: a_th = 10.0, b_th = -1.0, b_x = 1.0
  (standard cart-pole, M=1 kg, m=0.1 kg, l=1 m, g=10 m/s²)

Active-inference action gradient  dF/du of ||pos_next − 0||²:
  Minimise only the POSITION component of next-step free energy
  (not velocity), using a velocity-corrected prediction:

    theta_pred = z_th + dt * z_thdot   (where pole will be in 1 step)
    x_pred     = z_x  + dt * z_xdot   (where cart will be in 1 step)

    F = theta_pred² + x_pred²   (position-only free energy)

  dF/du = 2*theta_pred * dt²*b_th + 2*x_pred * dt²*b_x
        = 2*dt² * (b_th * theta_pred  +  b_x * x_pred)

  (factor 2 absorbed into action_lr)

  This avoids the sign-flip instability of including z_thdot in F:
  when b_th < 0, a large corrective u drives dth to be large and
  negative, which in the full-state gradient produces a huge
  positive dF/du that swings u to −clip — directly destabilising
  the pole because b_th * (−clip) >> 0.  The position-only gradient
  stays well-behaved because theta_pred is O(dt) smaller than z_thdot.

RTL correspondence: identical to pendulum_pendulum.py — just 4-wide neurons.
"""
from __future__ import annotations
import argparse
from dataclasses import dataclass
from typing import Sequence
import numpy as np


# ─── activation (linear) ─────────────────────────────────────────────────────

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


# ─── 3-layer network ──────────────────────────────────────────────────────────

class PCNet3Layer:
    def __init__(self, obs_dim: int = 4,
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
        goal = np.asarray(goal, dtype=np.float64)
        self.layer2.tick(
            x_up           = np.zeros(self.obs_dim),
            back_from_down = self.layer1.back_nk,
            clamp_vec      = np.ones(self.obs_dim,  dtype=bool),
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
            clamp_vec      = np.ones(self.obs_dim,  dtype=bool),
            obs_vec        = goal,
        )

    @property
    def z(self) -> np.ndarray:
        return self.layer1.x_state.copy()

    @property
    def goal_eps(self) -> np.ndarray:
        return self.layer0.eps.copy()


# ─── cart-pole plant ──────────────────────────────────────────────────────────

class CartPole:
    """
    Nonlinear cart-pole (Euler integration).
      M*x_ddot = u - m*l*th_ddot*cos(th) + m*l*th_dot²*sin(th)
      (M+m*sin²(th))*l*th_ddot = (M+m)*g*sin(th) - cos(th)*u - m*l*th_dot²*sin(th)*cos(th)

    Linearised around th=0 for the action gradient:
      th_ddot ≈ a_th*th + b_th*u     with a_th = (M+m)*g/(M*l),  b_th = -1/(M*l)
      x_ddot  ≈ b_x*u + b_xth*th    with b_x  = 1/M,            b_xth = m*g/M

    Default plant: M=1 kg, m=0.1 kg, l=1 m, g=10 m/s².
    """
    def __init__(self, dt=0.01,
                 M=1.0, m=0.1, l=1.0, g=10.0, d_th=0.5, d_x=0.0,
                 th0=0.10, x0=0.0):
        self.dt = dt
        self.M = M; self.m = m; self.l = l; self.g = g
        self.d_th = d_th; self.d_x = d_x
        self.x = x0;   self.dx  = 0.0
        self.th = th0; self.dth = 0.0
        # linearised coefficients for action gradient
        self.a_th = (M + m) * g / (M * l)          # ≈ 11.0
        self.b_th = -1.0 / (M * l)                 # ≈ -1.0
        self.b_x  = 1.0 / M                        # ≈ 1.0
        self.b_xth = m * g / M                     # ≈ 1.0

    def obs(self) -> np.ndarray:
        return np.array([self.x, self.dx, self.th, self.dth])

    def step(self, u: float) -> None:
        M, m, l, g = self.M, self.m, self.l, self.g
        s, c = np.sin(self.th), np.cos(self.th)
        denom = M + m * s**2           # = M + m*sin²(θ)
        # θ̈ from Lagrangian (undamped, for xdd consistency)
        thdd_nd = ((M + m) * g * s - c * u
                   - m * l * self.dth**2 * s * c) / (l * denom)
        # add joint friction separately
        thdd = thdd_nd - self.d_th / (m * l**2) * self.dth
        # ẍ consistent with Newton: (M+m)*ẍ = u - m*l*(θ̈_nd*cos - θ̇²*sin)
        xdd  = (u + m * l * (self.dth**2 * s - thdd_nd * c)
                - self.d_x * self.dx) / (M + m)
        self.dth += self.dt * thdd
        self.th  += self.dt * self.dth
        self.dx  += self.dt * xdd
        self.x   += self.dt * self.dx


# ─── convergence helper ───────────────────────────────────────────────────────

def convergence_tick(hist, x_thresh, xd_thresh, th_thresh, thd_thresh, hold):
    n = len(hist)
    if hold > n:
        return None
    xa   = np.abs(hist[:, 1]);  xda  = np.abs(hist[:, 2])
    tha  = np.abs(hist[:, 3]);  thda = np.abs(hist[:, 4])
    for t in range(n - hold + 1):
        sl = slice(t, t + hold)
        if (np.all(xa[sl]  <= x_thresh)  and np.all(xda[sl]  <= xd_thresh) and
                np.all(tha[sl] <= th_thresh) and np.all(thda[sl] <= thd_thresh)):
            return t
    return None


# ─── main simulation loop ─────────────────────────────────────────────────────

def run(args):
    env = CartPole(th0=args.th0)
    # 2-D PC network — observes [theta, theta_dot] only.
    # Using a 4-D network would contaminate z_thd via Hebbian cross-weights
    # once cart position x drifts large; a 2-D network keeps inference clean.
    net = PCNet3Layer(obs_dim=2,
                      wclip=args.weight_clip,
                      gamma=args.gamma,
                      alpha=args.alpha)

    cpt    = net_cpt(net.k_lut, net.m0)
    cpe    = cpt * args.infer_ticks
    total  = 0
    action = 0.0
    dt     = env.dt
    B_TH   = env.b_th
    B_X    = env.b_x

    # columns: t, x, x_dot, theta, theta_dot, u,
    #          z_th, z_thd, eps_th, eps_thd
    hist = np.zeros((args.steps, 10))

    for t in range(args.steps):
        o_full = env.obs()          # [x, dx, theta, dtheta]
        o_pole = o_full[2:4]        # [theta, dtheta] — pole only

        for _ in range(args.infer_ticks):
            net.tick(o_pole)
            total += cpt

        z = net.z   # [z_th, z_thd]

        # Active-inference action gradient
        #   F = (theta_pred)²  where  theta_pred = z_th + dt*z_thd
        #   dF/du = dt² * b_th * theta_pred
        #
        # A small scaled velocity term is added for damping:
        #   grad += vel_scale * dt * b_th * z_thd
        # vel_scale ≈ 0.001 keeps the combined gradient negative on step 1
        # (prevents the sign-flip from b_th < 0 that would clip action to -600)
        # while providing effective Kd = vel_scale*action_lr*dt ≈ 50,
        # giving damping ratio ξ ≈ (Kd + d_th_coeff) / (2*ω_n) ≈ 1.25.
        # Pole-balance gradient (from 2D PC inference, clean from x-contamination)
        th_pred = z[0] + dt * z[1]
        grad    = dt**2 * B_TH * th_pred + args.vel_scale * dt * B_TH * z[1]

        # Cart-centering gradient — position-prediction formula, no velocity term.
        # Velocity term (dt*B_X*dx) is O(dt) larger than position term and
        # dominates during the initial transient, flipping the action sign and
        # causing the pole to fall.  Using only x_pred keeps the x gradient
        # proportional to where the cart will be next step, consistent with
        # the pole-balance formula above.
        x_pred = o_full[0] + dt * o_full[1]
        grad += args.x_scale * dt**2 * B_X * x_pred

        action = (1.0 - args.action_decay) * action - args.action_lr * grad
        action = float(np.clip(action, -args.action_clip, args.action_clip))

        env.step(action)

        eps = net.layer1.eps.copy()
        hist[t] = [t,
                   env.x, env.dx, env.th, env.dth,
                   action,
                   z[0], z[1],
                   eps[0], eps[1]]

        if args.print_every > 0 and (t % args.print_every == 0 or t == args.steps-1):
            print(f"t={t:4d}  x={env.x: .4f}  th={env.th: .5f}  "
                  f"dth={env.dth: .5f}  u={action: .4f}")

    return hist, cpt, cpe, total


# ─── CLI ──────────────────────────────────────────────────────────────────────

def fmt(t: float) -> str:
    for s, u in [(1, "s"), (1e-3, "ms"), (1e-6, "us"), (1e-9, "ns")]:
        if t >= s:
            return f"{t/s:.4f} {u}"
    return f"{t:.2e} s"


def main():
    p = argparse.ArgumentParser(
        description="3-layer PC cart-pole — learned weights, active-inference action")
    p.add_argument("--steps",             type=int,   default=2000)
    p.add_argument("--th0",               type=float, default=0.10,
                   help="initial pole angle (rad)")
    p.add_argument("--alpha",             type=float, default=0.003)
    p.add_argument("--gamma",             type=float, default=0.3)
    p.add_argument("--infer-ticks",       type=int,   default=20)
    p.add_argument("--action-lr",         type=float, default=5_000_000.0)
    p.add_argument("--action-decay",      type=float, default=0.3)
    p.add_argument("--action-clip",       type=float, default=600.0)
    p.add_argument("--weight-clip",       type=float, default=20.0)
    p.add_argument("--print-every",       type=int,   default=100)
    p.add_argument("--csv",               type=str,   default="cartpole_ai.csv")
    p.add_argument("--clock-rates-mhz",   type=str,   default="1,10,50,100,250,1000")
    p.add_argument("--conv-x-thresh",     type=float, default=0.05)
    p.add_argument("--conv-xd-thresh",    type=float, default=0.10)
    p.add_argument("--conv-theta-thresh", type=float, default=0.01)
    p.add_argument("--conv-thd-thresh",   type=float, default=0.05)
    p.add_argument("--conv-hold-ticks",   type=int,   default=25)
    p.add_argument("--vel-scale",         type=float, default=0.001,
                   help="velocity gradient scale (~0.001 gives Kd≈50, ξ≈1.25)")
    p.add_argument("--x-scale",           type=float, default=0.01,
                   help="cart-centering gradient scale (0 disables x correction)")
    args = p.parse_args()
    assert args.alpha > 0, "--alpha must be > 0"

    hist, cpt, cpe, total = run(args)

    header = "t,x,x_dot,theta,theta_dot,u,z_th,z_thd,eps_th,eps_thd"
    np.savetxt(args.csv, hist, delimiter=",", header=header, comments="")

    conv = convergence_tick(hist,
                            args.conv_x_thresh,
                            args.conv_xd_thresh,
                            args.conv_theta_thresh,
                            args.conv_thd_thresh,
                            args.conv_hold_ticks)

    print(f"\nsaved:           {args.csv}")
    print(f"mean |theta|   = {np.mean(np.abs(hist[:,3])):.5f}")
    print(f"final |theta|  = {abs(hist[-1,3]):.6f}")
    print(f"final |x|      = {abs(hist[-1,1]):.6f}")
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
