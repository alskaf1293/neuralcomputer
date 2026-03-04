#!/usr/bin/env python3
"""
main.py — FULL rewrite (simple + robust), locality + tick budgets, preserves Ω(B) for parity.

Two tasks:

(1) task=local
  Plant: 1D chain with Laplacian coupling (strict 1-hop stencil).
  Controllers:
    - PD_GLOBAL: classic PD on full state.
    - PC_LOCAL : delay-aware "PC-lite" with projected gradient descent.
        * Matched discretization.
        * Handles action delay u_delay by optimizing error at horizon H = u_delay+1.
        * Handles obs_delay implicitly via rollout wrapper (controller receives delayed obs).
        * No MPC sequence. No reverse-mode. No tricky backprop.
        * Tick budget = number of gradient steps per physics step.

(2) task=parity
  Anti-Moravec global constraint per block of size B:
    parity(sign(p_block)) must equal target bit.
  Target bit exists ONLY at block start.
  DIG_LOCAL uses 1-hop message passing per tick (snapshot buffers) and only last index may flip.
  => Requires >= (B-1) ticks to guarantee success: Ω(B) preserved.

Output: sweep table over ticks: success_rate, median_steps, median_total_ticks, and energy/cost.
"""

from __future__ import annotations

import argparse
import sys
from dataclasses import dataclass
from typing import Callable, Dict, List, Tuple

import numpy as np


# -------------------------
# Local Laplacian stencil (strict locality)
# -------------------------
def laplacian_apply_1d_chain(x: np.ndarray) -> np.ndarray:
    """
    Applies 1D chain Laplacian L to x with neighbor-only ops:
      (Lx)[0]   = x[0] - x[1]
      (Lx)[i]   = 2x[i] - x[i-1] - x[i+1]
      (Lx)[n-1] = x[n-1] - x[n-2]
    """
    x = np.asarray(x, dtype=np.float32).reshape(-1)
    n = x.shape[0]
    out = np.empty_like(x)
    if n == 1:
        out[0] = 0.0
        return out
    out[0] = x[0] - x[1]
    out[1:-1] = 2.0 * x[1:-1] - x[:-2] - x[2:]
    out[-1] = x[-1] - x[-2]
    return out


# -------------------------
# Rollout with optional delays
# -------------------------
def rollout_episode_nd(
    controller: Callable[[np.ndarray, np.ndarray, int], Tuple[np.ndarray, float]],
    goal: np.ndarray,
    T: int,
    dt: float,
    beta: float,
    lam: float,
    noise_p: float,
    noise_v: float,
    bias_u: np.ndarray,
    success_fn: Callable[[np.ndarray, np.ndarray], bool],
    ticks_per_step: int,
    u_delay_steps: int = 0,
    obs_delay_steps: int = 0,
) -> Tuple[bool, int, float]:
    """
    controller(s_obs, goal, ticks_per_step) -> (u_cmd, extra_cost)
    Returns (success, steps_used, total_extra_cost)

    Delays:
      - obs_delay_steps: controller sees delayed (p,v)
      - u_delay_steps: plant applies delayed u
    """
    goal = np.asarray(goal, dtype=np.float32).reshape(-1)
    n = goal.shape[0]

    p = np.zeros(n, dtype=np.float32)
    v = np.zeros(n, dtype=np.float32)
    bias_u = np.asarray(bias_u, dtype=np.float32).reshape(n)

    u_delay_steps = int(max(0, u_delay_steps))
    obs_delay_steps = int(max(0, obs_delay_steps))

    u_fifo = [np.zeros(n, dtype=np.float32) for _ in range(u_delay_steps + 1)]
    obs_fifo: List[Tuple[np.ndarray, np.ndarray]] = [(p.copy(), v.copy()) for _ in range(obs_delay_steps + 1)]

    total_cost = 0.0

    for t in range(int(T)):
        # delayed observation
        obs_fifo.append((p.copy(), v.copy()))
        p_obs, v_obs = obs_fifo.pop(0) if obs_delay_steps > 0 else (p, v)

        s_obs = np.concatenate([p_obs, v_obs]).astype(np.float32)
        u_cmd, cost = controller(s_obs, goal, int(ticks_per_step))
        u_cmd = np.asarray(u_cmd, dtype=np.float32).reshape(n) + bias_u
        total_cost += float(cost)

        # delayed action
        u_fifo.append(u_cmd)
        u_apply = u_fifo.pop(0) if u_delay_steps > 0 else u_cmd

        coupling = -np.float32(lam) * laplacian_apply_1d_chain(p)
        v = (np.float32(1.0) - np.float32(beta)) * v + np.float32(dt) * (u_apply + coupling)
        if noise_v > 0:
            v = v + np.float32(noise_v) * np.random.randn(n).astype(np.float32)

        p = p + np.float32(dt) * v
        if noise_p > 0:
            p = p + np.float32(noise_p) * np.random.randn(n).astype(np.float32)

        if success_fn(p, goal):
            return True, t + 1, total_cost

    return False, int(T), total_cost


# -------------------------
# Local task: goals + success
# -------------------------
def make_goal_local(rng: np.random.Generator, n: int, goal_range: float) -> np.ndarray:
    z = rng.normal(0.0, 1.0, size=(n,)).astype(np.float32)
    kernel = np.ones(9, dtype=np.float32) / np.float32(9.0)
    g = np.convolve(z, kernel, mode="same").astype(np.float32)
    return np.clip(g, -goal_range, goal_range).astype(np.float32)


def success_local(success_eps: float) -> Callable[[np.ndarray, np.ndarray], bool]:
    eps = float(success_eps)

    def fn(p: np.ndarray, goal: np.ndarray) -> bool:
        n = p.shape[0]
        return float(np.linalg.norm(p - goal) / np.sqrt(n)) < eps

    return fn


# -------------------------
# Parity task: goals + success
# -------------------------
def parity_bits(x: np.ndarray) -> int:
    b = (x > 0).astype(np.uint8)
    return int(np.bitwise_xor.reduce(b))


def make_goal_parity_blocks(rng: np.random.Generator, n: int, block: int) -> np.ndarray:
    """
    goal[b*B] = +1 => target parity 1; -1 => target parity 0. Others are 0.
    """
    B = int(block)
    if n % B != 0:
        raise ValueError("dim must be divisible by --block for parity task")
    nb = n // B
    bits = rng.integers(0, 2, size=(nb,), dtype=np.int32)
    goal = np.zeros((n,), dtype=np.float32)
    for b in range(nb):
        goal[b * B] = (1.0 if bits[b] == 1 else -1.0)
    return goal


def success_parity_blocks(block: int, amp_min: float) -> Callable[[np.ndarray, np.ndarray], bool]:
    B = int(block)
    amin = float(amp_min)

    def fn(p: np.ndarray, goal: np.ndarray) -> bool:
        if float(np.mean(np.abs(p))) < amin:
            return False
        n = p.shape[0]
        if n % B != 0:
            return False
        nb = n // B
        for b in range(nb):
            pb = p[b * B : (b + 1) * B]
            target = 1 if goal[b * B] > 0 else 0
            if parity_bits(pb) != target:
                return False
        return True

    return fn


# -------------------------
# PD_GLOBAL
# -------------------------
def pd_global_controller(n: int, kp: float, kd: float, action_limit: float):
    kp = np.float32(kp)
    kd = np.float32(kd)
    al = np.float32(action_limit)

    def ctrl(s: np.ndarray, g: np.ndarray, ticks_per_step: int):
        s = np.asarray(s, dtype=np.float32).reshape(-1)
        g = np.asarray(g, dtype=np.float32).reshape(-1)
        p = s[:n]
        v = s[n : 2 * n]
        u = kp * (g - p) - kd * v
        u = np.clip(u, -al, al).astype(np.float32)
        return u, 0.0

    return ctrl


# -------------------------
# PC_LOCAL (delay-aware, projected GD, matched discretization)
# -------------------------
@dataclass
class PCModel:
    n: int
    dt: float
    beta_hat: float
    lam_hat: float
    gamma: float
    action_limit: float


class PCState:
    def __init__(self, model: PCModel, u_delay: int):
        self.n = model.n
        self.u_delay = int(max(0, u_delay))
        self.u = np.zeros(self.n, dtype=np.float32)  # actual commanded control (projected)
        self.u_fifo = np.zeros((self.u_delay, self.n), dtype=np.float32)  # mirror of plant delay

    def reset(self):
        self.u.fill(0.0)
        self.u_fifo.fill(0.0)


def pc_local_controller(
    model: PCModel,
    state: PCState,
    kp_ref: float,
    kd_ref: float,
    use_pd_reference_target: bool,
    goal_rate: float,
    u_prior_w: float,
    v_target_mode: str,
):
    """
    Delay-aware one-shot PC:

    If u_delay = d, a newly chosen command affects the plant after d steps.
    So we define an internal horizon:
        H = d + 1
    and optimize the predicted state at time t+H (first time the new u has an effect).

    Internal rollout (matched discretization):
      v <- (1-beta_hat)v + dt*(u_eff - lam_hat*L(p))
      p <- p + dt*v

    Gradient:
      We use a simple "direct sensitivity" approximation for the last step:
        dv_H/du ~= dt
        dp_H/du ~= dt^2
      and (crucially) we evaluate error at t+H so u matters causally.
    This is intentionally simple, robust, and sufficient to make u_delay work.

    Projected GD:
      u <- clip(u - gamma * grad, [-action_limit, action_limit])
    """
    n = model.n
    dt = np.float32(model.dt)
    bh = np.float32(model.beta_hat)
    lamh = np.float32(model.lam_hat)
    gamma = np.float32(model.gamma)
    al = np.float32(model.action_limit)

    kp_ref = np.float32(kp_ref)
    kd_ref = np.float32(kd_ref)
    u_prior_w = float(max(0.0, u_prior_w))

    # goal_rate is interpreted as "per-second-ish" rate; we scale by dt safely.
    goal_rate = float(max(0.0, goal_rate))
    v_target_mode = str(v_target_mode)

    def ctrl(s: np.ndarray, g: np.ndarray, ticks_per_step: int):
        s = np.asarray(s, dtype=np.float32).reshape(-1)
        g = np.asarray(g, dtype=np.float32).reshape(-1)
        p0 = s[:n].astype(np.float32)
        v0 = s[n : 2 * n].astype(np.float32)

        d = state.u_delay
        H = int(d + 1)

        # Choose targets at horizon t+H
        # Make target REACHABLE: use rate-limited waypoint scaled by dt*H.
        if use_pd_reference_target:
            # PD ref computed on observed state, then internally rolled H steps (using queued u's and u_ref when available)
            u_ref = kp_ref * (g - p0) - kd_ref * v0
            u_ref = np.clip(u_ref, -al, al).astype(np.float32)

            p_tmp = p0.copy()
            v_tmp = v0.copy()
            for h in range(H):
                if h < d:
                    u_eff = state.u_fifo[h]
                else:
                    u_eff = u_ref
                coupling = -lamh * laplacian_apply_1d_chain(p_tmp)
                v_tmp = (np.float32(1.0) - bh) * v_tmp + dt * (u_eff + coupling)
                p_tmp = p_tmp + dt * v_tmp

            p_tgt = p_tmp
            v_tgt = v_tmp
        else:
            # rate-limited waypoint fraction over H steps: alpha_eff = 1 - exp(-rate*dt*H) (bounded, stable)
            alpha_eff = float(1.0 - np.exp(-goal_rate * float(dt) * float(H)))
            alpha_eff = float(np.clip(alpha_eff, 0.0, 1.0))
            p_tgt = (p0 + np.float32(alpha_eff) * (g - p0)).astype(np.float32)

            # velocity target: consistent with moving toward p_tgt over H steps
            # desired average velocity over horizon:
            v_des = ((p_tgt - p0) / (np.float32(H) * dt)).astype(np.float32)
            if v_target_mode == "damp":
                v_tgt = (np.float32(0.5) * v_des + np.float32(0.5) * v0).astype(np.float32)
            else:
                v_tgt = v_des

        energy = 0.0
        Tticks = int(max(0, ticks_per_step))

        for _ in range(Tticks):
            # Internal rollout to t+H, using queued controls then the candidate u
            p_tmp = p0.copy()
            v_tmp = v0.copy()

            for h in range(H):
                if h < d:
                    u_eff = state.u_fifo[h]
                else:
                    u_eff = state.u  # candidate command, first affects at h=d

                coupling = -lamh * laplacian_apply_1d_chain(p_tmp)
                v_tmp = (np.float32(1.0) - bh) * v_tmp + dt * (u_eff + coupling)
                p_tmp = p_tmp + dt * v_tmp

            ep = (p_tmp - p_tgt).astype(np.float32)
            ev = (v_tmp - v_tgt).astype(np.float32)
            energy += float(np.sum(ep * ep) + np.sum(ev * ev))

            # Simple direct gradient at the point u first matters.
            # This is a pragmatic approximation that works well in this toy.
            grad = np.float32(2.0) * ((dt * dt) * ep + dt * ev)
            if u_prior_w > 0.0:
                grad = grad + np.float32(2.0 * u_prior_w) * state.u

            state.u[:] = state.u - gamma * grad
            state.u[:] = np.clip(state.u, -al, al)

        u_out = state.u.astype(np.float32)

        # Mirror plant actuator delay with EXACT returned command
        if d > 0:
            state.u_fifo[:-1] = state.u_fifo[1:]
            state.u_fifo[-1] = u_out

        return u_out, energy

    return ctrl


# -------------------------
# Parity controllers (Ω(B) preserved)
# -------------------------
def dig_global_parity_controller(n: int, block: int, amp: float, kp: float, kd: float, action_limit: float):
    B = int(block)
    if n % B != 0:
        raise ValueError("dim must be divisible by --block for parity task")
    nb = n // B

    kp = np.float32(kp)
    kd = np.float32(kd)
    al = np.float32(action_limit)
    amp = np.float32(amp)

    def ctrl(s: np.ndarray, goal: np.ndarray, ticks_per_step: int):
        s = np.asarray(s, dtype=np.float32).reshape(-1)
        goal = np.asarray(goal, dtype=np.float32).reshape(-1)
        p = s[:n]
        v = s[n : 2 * n]

        p_des = np.full((n,), amp, dtype=np.float32)
        for b in range(nb):
            target = 1 if goal[b * B] > 0 else 0
            base_parity = (B & 1)  # parity of all-positive bits in length-B block
            if base_parity != target:
                p_des[b * B + 0] = -amp  # global instant fix

        u = kp * (p_des - p) - kd * v
        u = np.clip(u, -al, al).astype(np.float32)
        return u, 0.0

    return ctrl


def dig_local_parity_controller(n: int, block: int, amp: float, kp: float, kd: float, action_limit: float):
    """
    Strict-local parity + target propagation (Ω(B) barrier).
    1 hop per tick via snapshot buffers, only last index may flip.
    """
    B = int(block)
    if n % B != 0:
        raise ValueError("dim must be divisible by --block for parity task")
    nb = n // B

    kp = np.float32(kp)
    kd = np.float32(kd)
    al = np.float32(action_limit)
    amp = np.float32(amp)

    buf_par = np.zeros((nb, B), dtype=np.uint8)
    buf_tgt = np.zeros((nb, B), dtype=np.uint8)

    def ctrl(s: np.ndarray, goal: np.ndarray, ticks_per_step: int):
        s = np.asarray(s, dtype=np.float32).reshape(-1)
        goal = np.asarray(goal, dtype=np.float32).reshape(-1)
        p = s[:n]
        v = s[n : 2 * n]

        bits = (p > 0).astype(np.uint8)
        for b in range(nb):
            buf_par[b, :] = bits[b * B : (b + 1) * B]
            buf_tgt[b, :] = 0
            buf_tgt[b, 0] = 1 if goal[b * B] > 0 else 0

        k = int(ticks_per_step)
        k_eff = min(max(0, k), B - 1)

        for _ in range(k_eff):
            prev_par = buf_par.copy()
            prev_tgt = buf_tgt.copy()
            buf_par[:, 1:] = prev_par[:, 1:] ^ prev_par[:, :-1]  # 1-hop parity accumulation
            buf_tgt[:, 1:] = prev_tgt[:, :-1]                    # 1-hop target propagation

        p_des = np.sign(p)
        p_des[p_des == 0] = 1.0
        p_des = (amp * p_des).astype(np.float32)

        for b in range(nb):
            est_par = int(buf_par[b, B - 1])
            est_tgt = int(buf_tgt[b, B - 1])
            last_idx = b * B + (B - 1)
            if est_par != est_tgt:
                p_des[last_idx] = -p_des[last_idx]

        u = kp * (p_des - p) - kd * v
        u = np.clip(u, -al, al).astype(np.float32)
        return u, float(k_eff)

    return ctrl


# -------------------------
# Evaluation / printing
# -------------------------
Result = Dict[Tuple[str, int], Tuple[float, float, float, float]]
# (model,ticks) -> (success_rate, median_steps, median_total_ticks, median_energy_or_cost)


def parse_int_list(s: str) -> List[int]:
    parts = [p.strip() for p in s.split(",") if p.strip()]
    return [int(p) for p in parts]


def eval_sweep(args: argparse.Namespace) -> Result:
    rng = np.random.default_rng(int(args.seed))

    task = str(args.task)
    n = int(args.dim)
    ticks_list = parse_int_list(args.ticks)

    lam = float(args.lam)
    dt = float(args.dt)

    beta_max = float(args.beta_max)
    noise_p = float(args.noise_p)
    noise_v = float(args.noise_v)
    bias_std = float(args.bias_std)

    episodes = int(args.episodes)
    horizon = int(args.horizon)

    goal_range = float(args.goal_range)
    success_eps = float(args.success_eps)

    pd_kp = float(args.pd_kp)
    pd_kd = float(args.pd_kd)
    action_limit = float(args.action_limit)

    gamma = float(args.gamma)
    beta_hat = float(args.beta_hat)
    lam_hat = float(lam if args.lam_hat is None else args.lam_hat)

    u_delay = int(args.u_delay)
    obs_delay = int(args.obs_delay)

    results: Result = {}

    if task == "local":
        goal_fn = lambda: make_goal_local(rng, n, goal_range)
        succ_fn = success_local(success_eps)

        pd = pd_global_controller(n=n, kp=pd_kp, kd=pd_kd, action_limit=action_limit)

        # PD sweep
        for ticks in ticks_list:
            succ = 0
            steps = []
            for _ in range(episodes):
                goal = goal_fn()
                beta = float(rng.uniform(0.0, beta_max))
                bias = rng.normal(0.0, bias_std, size=(n,)).astype(np.float32)

                ok, ns, _ = rollout_episode_nd(
                    controller=pd,
                    goal=goal,
                    T=horizon,
                    dt=dt,
                    beta=beta,
                    lam=lam,
                    noise_p=noise_p,
                    noise_v=noise_v,
                    bias_u=bias,
                    success_fn=succ_fn,
                    ticks_per_step=int(ticks),
                    u_delay_steps=u_delay,
                    obs_delay_steps=obs_delay,
                )
                succ += int(ok)
                steps.append(ns)

            sr = succ / episodes
            med_steps = float(np.median(np.asarray(steps)))
            med_total_ticks = float(np.median(np.asarray(steps) * int(ticks)))
            results[("PD_GLOBAL", int(ticks))] = (sr, med_steps, med_total_ticks, float("nan"))

        # PC sweep
        for ticks in ticks_list:
            succ = 0
            steps = []
            energies = []
            for _ in range(episodes):
                goal = goal_fn()
                beta = float(rng.uniform(0.0, beta_max))
                bias = rng.normal(0.0, bias_std, size=(n,)).astype(np.float32)

                model = PCModel(
                    n=n,
                    dt=dt,
                    beta_hat=beta_hat,
                    lam_hat=lam_hat,
                    gamma=gamma,
                    action_limit=action_limit,
                )
                st = PCState(model, u_delay=u_delay)
                st.reset()

                pc = pc_local_controller(
                    model=model,
                    state=st,
                    kp_ref=pd_kp,
                    kd_ref=pd_kd,
                    use_pd_reference_target=bool(args.pc_use_pd_ref),
                    goal_rate=float(args.pc_goal_rate),
                    u_prior_w=float(args.pc_u_prior_w),
                    v_target_mode=str(args.pc_v_target_mode),
                )

                ok, ns, energy = rollout_episode_nd(
                    controller=pc,
                    goal=goal,
                    T=horizon,
                    dt=dt,
                    beta=beta,
                    lam=lam,
                    noise_p=noise_p,
                    noise_v=noise_v,
                    bias_u=bias,
                    success_fn=succ_fn,
                    ticks_per_step=int(ticks),
                    u_delay_steps=u_delay,
                    obs_delay_steps=obs_delay,
                )
                succ += int(ok)
                steps.append(ns)
                energies.append(energy)

            sr = succ / episodes
            med_steps = float(np.median(np.asarray(steps)))
            med_total_ticks = float(np.median(np.asarray(steps) * int(ticks)))
            med_energy = float(np.median(np.asarray(energies)))
            results[("PC_LOCAL", int(ticks))] = (sr, med_steps, med_total_ticks, med_energy)

        return results

    if task == "parity":
        block = int(args.block)
        amp_min = float(args.amp_min)

        goal_fn = lambda: make_goal_parity_blocks(rng, n, block)
        succ_fn = success_parity_blocks(block=block, amp_min=amp_min)

        amp = float(goal_range)

        dig_global = dig_global_parity_controller(
            n=n, block=block, amp=amp, kp=pd_kp, kd=pd_kd, action_limit=action_limit
        )
        dig_local = dig_local_parity_controller(
            n=n, block=block, amp=amp, kp=pd_kp, kd=pd_kd, action_limit=action_limit
        )

        for name, ctrl in [("DIG_GLOBAL", dig_global), ("DIG_LOCAL", dig_local)]:
            for ticks in ticks_list:
                succ = 0
                steps = []
                costs = []
                for _ in range(episodes):
                    goal = goal_fn()
                    beta = float(rng.uniform(0.0, beta_max))
                    bias = rng.normal(0.0, bias_std, size=(n,)).astype(np.float32)

                    ok, ns, cost = rollout_episode_nd(
                        controller=ctrl,
                        goal=goal,
                        T=horizon,
                        dt=dt,
                        beta=beta,
                        lam=lam,
                        noise_p=noise_p,
                        noise_v=noise_v,
                        bias_u=bias,
                        success_fn=succ_fn,
                        ticks_per_step=int(ticks),
                        u_delay_steps=0,
                        obs_delay_steps=0,
                    )
                    succ += int(ok)
                    steps.append(ns)
                    costs.append(cost)

                sr = succ / episodes
                med_steps = float(np.median(np.asarray(steps)))
                med_total_ticks = float(np.median(np.asarray(steps) * int(ticks)))
                med_cost = float(np.median(np.asarray(costs)))
                results[(name, int(ticks))] = (sr, med_steps, med_total_ticks, med_cost)

        return results

    raise ValueError("bad task")


def print_results(task: str, results: Result, ticks_list: List[int]):
    print("\n=== Sweep Results ===")
    if task == "local":
        print("Columns: success_rate, median_steps, median_total_ticks, median_energy(PC only)")
        models = ["PD_GLOBAL", "PC_LOCAL"]
    else:
        print("Columns: success_rate, median_steps, median_total_ticks, median_alg_cost(local only)")
        models = ["DIG_GLOBAL", "DIG_LOCAL"]

    print("")
    header = "model ".ljust(12) + " ".join([f"t={t:>3d}".ljust(34) for t in ticks_list])
    print(header)
    print("-" * len(header))

    for m in models:
        row = m.ljust(12)
        for t in ticks_list:
            sr, med_steps, med_ticks, extra = results[(m, t)]
            if task == "local":
                if m == "PD_GLOBAL":
                    row += f"{sr:6.3f},{med_steps:6.1f},{med_ticks:7.1f},    -   ".ljust(34)
                else:
                    row += f"{sr:6.3f},{med_steps:6.1f},{med_ticks:7.1f},{extra:8.1f}".ljust(34)
            else:
                if m == "DIG_GLOBAL":
                    row += f"{sr:6.3f},{med_steps:6.1f},{med_ticks:7.1f},    -   ".ljust(34)
                else:
                    row += f"{sr:6.3f},{med_steps:6.1f},{med_ticks:7.1f},{extra:8.1f}".ljust(34)
        print(row)
    print("")


# -------------------------
# CLI
# -------------------------
def main(argv: List[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--seed", type=int, default=0)

    ap.add_argument("--task", type=str, default="local", choices=["local", "parity"])
    ap.add_argument("--dim", type=int, default=256)
    ap.add_argument("--block", type=int, default=32)

    # Plant
    ap.add_argument("--lam", type=float, default=0.5)
    ap.add_argument("--dt", type=float, default=0.05)
    ap.add_argument("--beta_max", type=float, default=0.0)
    ap.add_argument("--noise_p", type=float, default=0.0)
    ap.add_argument("--noise_v", type=float, default=0.0)
    ap.add_argument("--bias_std", type=float, default=0.0)

    # Delays
    ap.add_argument("--u_delay", type=int, default=0)
    ap.add_argument("--obs_delay", type=int, default=0)

    # Goal / success
    ap.add_argument("--goal_range", type=float, default=1.0)
    ap.add_argument("--success_eps", type=float, default=0.05)
    ap.add_argument("--amp_min", type=float, default=0.2)

    # Budgets
    ap.add_argument("--ticks", type=str, default="1,2,5,10")
    ap.add_argument("--episodes", type=int, default=30)
    ap.add_argument("--horizon", type=int, default=700)

    # PD
    ap.add_argument("--pd_kp", type=float, default=6.0)
    ap.add_argument("--pd_kd", type=float, default=2.0)
    ap.add_argument("--action_limit", type=float, default=3.0)

    # PC
    ap.add_argument("--gamma", type=float, default=0.2)
    ap.add_argument("--beta_hat", type=float, default=0.0)
    ap.add_argument("--lam_hat", type=float, default=None)
    ap.add_argument("--pc_use_pd_ref", type=int, default=0)
    ap.add_argument("--pc_goal_rate", type=float, default=1.0, help="rate toward goal (used via 1-exp(-rate*dt*H))")
    ap.add_argument("--pc_u_prior_w", type=float, default=0.0)
    ap.add_argument("--pc_v_target_mode", type=str, default="damp", choices=["zero", "damp"])

    args = ap.parse_args(argv)

    n = int(args.dim)
    ticks_list = parse_int_list(args.ticks)
    lam_hat = float(args.lam) if args.lam_hat is None else float(args.lam_hat)

    print(f"[RUN] task={args.task} dim={n} ticks={ticks_list} episodes={args.episodes} horizon={args.horizon}")
    print(
        f"[RUN] plant: dt={args.dt} lam={args.lam} beta_max={args.beta_max} noise_p={args.noise_p} noise_v={args.noise_v} bias_std={args.bias_std}"
    )
    print(f"[RUN] delays: u_delay={args.u_delay} obs_delay={args.obs_delay}")
    print(f"[RUN] ctrl: pd_kp={args.pd_kp} pd_kd={args.pd_kd} action_limit={args.action_limit}")
    print(
        f"[RUN] pc: gamma={args.gamma} beta_hat={args.beta_hat} lam_hat={lam_hat} "
        f"use_pd_ref={args.pc_use_pd_ref} goal_rate={args.pc_goal_rate} u_prior_w={args.pc_u_prior_w} v_tgt={args.pc_v_target_mode}"
    )
    if args.task == "parity":
        print(f"[RUN] parity: block={args.block} goal_range(amp)={args.goal_range} amp_min={args.amp_min}")
        print("[NOTE] Ω(B) preserved: DIG_LOCAL needs >= (B-1) ticks to propagate target+parity to block end.")
    else:
        print(f"[RUN] local: goal_range={args.goal_range} success_eps={args.success_eps}")
    print("")

    res = eval_sweep(args)
    print_results(args.task, res, ticks_list)
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))