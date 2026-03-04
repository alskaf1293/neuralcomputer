// =====================================================================
// theta_init_pkg.sv (auto-generated)
// seed=0 scale=0.1
// Contains per-neuron theta presets as IEEE-754 float32 bit patterns.
// K_LUT (bottom->top) = [3, 8, 3]
// Each THETA_Li has shape [K_LUT[i]] x [K_LUT[i+1]]
// =====================================================================

package theta_init_pkg;

  localparam logic [31:0] THETA_L0 [0:2][0:7] = '{
    0: '{ 32'h3C4DFF13, 32'hBC5870CB, 32'h3D832897, 32'h3C2BDE4C, 32'hBD5B6902, 32'h3D141BFE, 32'h3E058794, 32'h3DC1F652 },
    1: '{ 32'hBD901FFF, 32'hBE019444, 32'hBD7F4B10, 32'h3B876ABF, 32'hBE6E154A, 32'hBCB33BF0, 32'hBDFF299F, 32'hBD95F7E7 },
    2: '{ 32'hBD5EEDB2, 32'hBD018E7A, 32'h3D289A97, 32'h3DD581BA, 32'hBC529758, 32'h3E0BED05, 32'hBD883B5C, 32'h3D0FFA81 }
  };


  localparam logic [31:0] THETA_L1 [0:7][0:2] = '{
    0: '{ 32'h3DB907DB, 32'h3C1A079E, 32'hBD9844C7 },
    1: '{ 32'hBDBCC4F5, 32'hBD3B7C08, 32'h3CB46244 },
    2: '{ 32'hBDCEC512, 32'hBCAB5B4C, 32'hBC826FE8 },
    3: '{ 32'h3D5D87C5, 32'h3CAFD948, 32'h3D118F87 },
    4: '{ 32'hBD85E773, 32'hBC545BE7, 32'h3DA08EE5 },
    5: '{ 32'h3E18ED67, 32'hBE00EDA6, 32'h3E1B069B },
    6: '{ 32'h3E09D151, 32'h3DA00338, 32'h3CD8A45D },
    7: '{ 32'hBD009532, 32'h3E154D23, 32'h3E48BAFF }
  };


endpackage : theta_init_pkg
