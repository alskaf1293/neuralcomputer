package theta_init_pkg;

  // L0: 3*8*32 = 768 bits
  localparam logic [767:0] THETA_L0_PACKED = {
    // i=2, j=7..0
    32'h3D0FFA81, 32'hBD883B5C, 32'h3E0BED05, 32'hBC529758,
    32'h3DD581BA, 32'h3D289A97, 32'hBD018E7A, 32'hBD5EEDB2,
    // i=1, j=7..0
    32'hBD95F7E7, 32'hBDFF299F, 32'hBCB33BF0, 32'hBE6E154A,
    32'h3B876ABF, 32'hBD7F4B10, 32'hBE019444, 32'hBD901FFF,
    // i=0, j=7..0
    32'h3DC1F652, 32'h3E058794, 32'h3D141BFE, 32'hBD5B6902,
    32'h3C2BDE4C, 32'h3D832897, 32'hBC5870CB, 32'h3C4DFF13
  };

  // L1: 8*3*32 = 768 bits
  localparam logic [767:0] THETA_L1_PACKED = {
    // i=7..0, j=2..0
    32'h3E48BAFF, 32'h3E154D23, 32'hBD009532,
    32'h3CD8A45D, 32'h3DA00338, 32'h3E09D151,
    32'h3E1B069B, 32'hBE00EDA6, 32'h3E18ED67,
    32'h3DA08EE5, 32'hBC545BE7, 32'hBD85E773,
    32'h3D118F87, 32'h3CAFD948, 32'h3D5D87C5,
    32'hBC826FE8, 32'hBCAB5B4C, 32'hBDCEC512,
    32'h3CB46244, 32'hBD3B7C08, 32'hBDBCC4F5,
    32'hBD9844C7, 32'h3C1A079E, 32'h3DB907DB
  };

  // L2: 2*2*32 = 128 bits
  localparam logic [127:0] THETA_L2_PACKED = {
    32'h3D4CCCCD, 32'h3D99999A,
    32'hBD4CCCCD, 32'h3DCCCCCD
  };

  // Return word at linear index idx (0 = first element in row-major order).
  function automatic logic [31:0] theta_word_768(input logic [767:0] tbl, input integer idx);
    logic [767:0] sh;
    begin
      sh = tbl >> (32*idx);
      theta_word_768 = sh[31:0];
    end
  endfunction

  function automatic logic [31:0] theta_l0(input int i, input int j);
    begin
      theta_l0 = theta_word_768(THETA_L0_PACKED, i*8 + j);
    end
  endfunction

  function automatic logic [31:0] theta_l1(input int i, input int j);
    begin
      theta_l1 = theta_word_768(THETA_L1_PACKED, i*3 + j);
    end
  endfunction

  function automatic logic [31:0] theta_l2(input int i, input int j);
    logic [127:0] sh;
    int idx;
    begin
      idx = i*2 + j;
      sh = THETA_L2_PACKED >> (32*idx);
      theta_l2 = sh[31:0];
    end
  endfunction

endpackage : theta_init_pkg
