import numpy as np
import struct
from pathlib import Path
from typing import List

def f32_to_u32_hex(x: float) -> str:
    u = struct.unpack(">I", struct.pack(">f", np.float32(x)))[0]
    return f"32'h{u:08X}"

def emit_2d_array(name: str, a: np.ndarray) -> str:
    assert a.ndim == 2
    K, N = a.shape
    row_inits = []
    for i in range(K):
        vals = ", ".join(f32_to_u32_hex(v) for v in a[i])
        # index-based pattern for each row
        row_inits.append(f"    {i}: '{{ {vals} }}")
    body = ",\n".join(row_inits)
    return (
        f"  localparam logic [31:0] {name} [0:{K-1}][0:{N-1}] = '{{\n"
        f"{body}\n"
        f"  }};\n"
    )


def main() -> None:
    # ---- set your network here (bottom -> top) ----
    # 3 layers: K0=1 (output), K1=2 (hidden), K2=2 (input)
    K_LUT: List[int] = [8, 16, 8]
    # ----------------------------------------------

    seed  = 0
    scale = 0.1
    rng = np.random.default_rng(seed)

    num_layers = len(K_LUT)
    assert num_layers >= 2

    out = []
    out.append("// =====================================================================")
    out.append("// theta_init_pkg.sv (auto-generated)")
    out.append(f"// seed={seed} scale={scale}")
    out.append("// Contains per-neuron theta presets as IEEE-754 float32 bit patterns.")
    out.append("// K_LUT (bottom->top) = " + str(K_LUT))
    out.append("// Each THETA_Li has shape [K_LUT[i]] x [K_LUT[i+1]]")
    out.append("// =====================================================================\n")
    out.append("package theta_init_pkg;\n")

    # Emit THETA_L0..THETA_L{L-2}
    for ul in range(num_layers - 1):
        K_cur = K_LUT[ul]
        N_cur = K_LUT[ul + 1]
        theta = (rng.standard_normal((K_cur, N_cur)).astype(np.float32) * scale)
        out.append(emit_2d_array(f"THETA_L{ul}", theta))
        out.append("")

    out.append("endpackage : theta_init_pkg\n")

    out_path = Path("rtl/includes/theta_init_pkg.sv")
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text("\n".join(out), encoding="utf-8")
    print(f"Wrote {out_path}")

if __name__ == "__main__":
    main()
