// =====================================================================
// theta_init_pkg.sv (auto-generated)
// seed=0 scale=0.001
// Contains per-neuron theta presets as IEEE-754 float32 bit patterns.
// K_LUT (bottom->top) = [3, 8, 2]
// Each THETA_Li has shape [K_LUT[i]] x [K_LUT[i+1]]
// =====================================================================

package theta_init_pkg;

  localparam logic [31:0] THETA_L0 [0:2][0:7] = '{
    0: '{ 32'h3903D673, 32'hB90A85A1, 32'h3A27E20A, 32'h38DBFDD3, 32'hBA0C6C2A, 32'h39BD9478, 32'h3AAAEAFB, 32'h3A784588 },
    1: '{ 32'hBA387AE0, 32'hBAA5DC81, 32'hBA23633E, 32'h382D556F, 32'hBB185F8C, 32'hB9656B71, 32'hBAA34DD7, 32'hBA3FF5A2 },
    2: '{ 32'hBA0EAC9B, 32'hB9A5D517, 32'h39D7D01E, 32'h3A88A4F2, 32'hB906C743, 32'h3AB31AE8, 32'hBA2E6076, 32'h39B84AE3 }
  };


  localparam logic [31:0] THETA_L1 [0:7][0:1] = '{
    0: '{ 32'h3A6CD6DC, 32'h38C52878 },
    1: '{ 32'hBA42E765, 32'hBA719FF2 },
    2: '{ 32'hB9EFFAEC, 32'h3966E42F },
    3: '{ 32'hBA84552A, 32'hB95B5625 },
    4: '{ 32'hB926F5A4, 32'h3A0DC789 },
    5: '{ 32'h3961161F, 32'h39BA5151 },
    6: '{ 32'hBA2B65B3, 32'hB907E8E6 },
    7: '{ 32'h3A4D83B5, 32'h3AC3BF3C }
  };


endpackage : theta_init_pkg
