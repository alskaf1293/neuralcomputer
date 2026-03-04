// ======================================================================
// tb_pc3_2_8_3_hidden_relu_net_mse.sv
//
// dims: top->hidden->bottom = 2 -> 8 -> 3
// K_LUT bottom->top = [3, 8, 2]
// hidden ReLU; top/bottom linear
//
// Teacher matches MATLAB:
//   B_gt(1,1)=1, B_gt(2,2)=1, rest 0   (here: rows 0 and 1)
//   A_gt(:,1:2) = [[ 1.00 -0.50], [-0.80 0.90], [0.60 0.75]], rest 0
//
// Dataset matches MATLAB:
//   x(:,s) = [ -1.2 + 2.4*(s-1)/(N-1) ; 1.1*sin(1.3*(s-1)) ]
// ======================================================================

`timescale 1ns/1ps
`default_nettype none

import "DPI-C" function int unsigned real_to_f32 (real r);
import "DPI-C" function real        f32_to_real (int unsigned bits);

module tb_pc3_hidden_relu_net_mse;
  `include "tb/tb_logger.sv"

  localparam int K0 = 3;
  localparam int K1 = 4;
  localparam int K2 = 2;

  localparam int NUM_LAYERS = 3;
  localparam int K_LUT[NUM_LAYERS] = '{K0, K1, K2};
  localparam int MAX_K = 8;

  localparam real ALPHA_R = 0.05;
  localparam real GAMMA_R = 0.10;

  localparam int INFER_TICKS_PER_SAMPLE = 200;
  localparam int LEARN_TICKS_PER_SAMPLE = 20;
  localparam int EVAL_SETTLE_TICKS      = 2000;
  localparam int EPOCHS                = 25;

  localparam int NUM_SAMPLES = 10;

  // clock/reset
  logic clk, rst_n;
  initial begin clk=0; forever #5 clk=~clk; end
  initial begin rst_n=0; #50 rst_n=1; end

  // DUT IO
  logic start_tick;
  logic busy_o, done_o;
  logic [31:0] alpha_ieee, gamma_ieee;

  logic [NUM_LAYERS-1:0][MAX_K-1:0]    x_set_en_all;
  logic [NUM_LAYERS-1:0][32*MAX_K-1:0] x_obs_flat_all;

  // hidden ReLU only (matches your working TB pattern)
  localparam act_kind_e ACT_PRESYN_LUT[NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_LINEAR};
  localparam act_kind_e ACT_STATE_LUT [NUM_LAYERS] = '{ACT_LINEAR, ACT_RELU,  ACT_LINEAR};

  pc_network_nlayer #(
    .NUM_LAYERS(NUM_LAYERS),
    .MAX_K(MAX_K),
    .K_LUT(K_LUT),
    .M0(0),
    .ACT_PRESYN_LUT(ACT_PRESYN_LUT),
    .ACT_STATE_LUT(ACT_STATE_LUT)
  ) uut (
    .clk(clk),
    .rst_n(rst_n),
    .start_tick(start_tick),
    .alpha_ieee(alpha_ieee),
    .gamma_ieee(gamma_ieee),
    .x_set_en_all(x_set_en_all),
    .x_obs_flat_all(x_obs_flat_all),
    .busy_o(busy_o),
    .done_o(done_o)
  );

  // DPI helpers
  function automatic [31:0] f2b(input real r); f2b = real_to_f32(r); endfunction
  function automatic real   b2f(input [31:0] b); int unsigned u; u=b; return f32_to_real(u); endfunction

  // Dataset + teacher
  real x2_samples[NUM_SAMPLES][K2];
  real y_targets [NUM_SAMPLES][K0];

  real B_gt[K1][K2];
  real A_gt[K0][K1];

  function automatic real relu_r(input real z);
    return (z > 0.0) ? z : 0.0;
  endfunction

  task automatic build_dataset();
    real x0, x1;
    real h[K1];
    int s;

    // zero everything
    for (int i=0;i<K1;i++) for (int j=0;j<K2;j++) B_gt[i][j]=0.0;
    for (int i=0;i<K0;i++) for (int j=0;j<K1;j++) A_gt[i][j]=0.0;

    // MATLAB teacher:
    // B_gt(1,1)=1; B_gt(2,2)=1;
    B_gt[0][0] = 1.0;
    B_gt[1][1] = 1.0;

    // A_gt(:,1:2) as given
    A_gt[0][0] =  1.00;  A_gt[0][1] = -0.50;
    A_gt[1][0] = -0.80;  A_gt[1][1] =  0.90;
    A_gt[2][0] =  0.60;  A_gt[2][1] =  0.75;

    for (s = 0; s < NUM_SAMPLES; s++) begin
      // MATLAB:
      // x2(:,s) = [ -1.2 + 2.4*(s-1)/(N-1) ; 1.1*sin(1.3*(s-1)) ]
      x0 = -1.2 + 2.4 * real'(s) / real'(NUM_SAMPLES-1);
      x1 =  1.1 * $sin(1.3 * real'(s));

      x2_samples[s][0] = x0;
      x2_samples[s][1] = x1;

      // h = ReLU(B_gt * x)
      for (int i=0;i<K1;i++) begin
        h[i] = relu_r(B_gt[i][0]*x0 + B_gt[i][1]*x1);
      end

      // y = A_gt * h
      for (int o=0;o<K0;o++) begin
        real acc = 0.0;
        for (int i=0;i<K1;i++) acc += A_gt[o][i]*h[i];
        y_targets[s][o] = acc;
      end
    end
  endtask

  // tick driver
  logic start_q, done_q, done_edge;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) start_q <= 0; else start_q <= start_tick;
  end
  wire start_edge_tb = start_tick & ~start_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin done_q<=0; done_edge<=0; end
    else begin
      if (start_edge_tb) done_edge <= 0;
      done_q <= done_o;
      if (done_o & ~done_q) done_edge <= 1;
    end
  end

  task automatic do_tick();
    int guard=0;
    @(posedge clk) start_tick <= 1;
    @(posedge clk) start_tick <= 0;
    while (!done_edge) begin
      @(posedge clk);
      guard++;
      if (guard>8192) $fatal("[TB] tick deadlock");
    end
  endtask

  // clamps
  task automatic clear_clamps();
    x_set_en_all   = '0;
    x_obs_flat_all = '0;
  endtask

  task automatic clamp_top_bottom(input int s);
    clear_clamps();

    // top clamp (layer 2)
    for (int i=0;i<K2;i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end

    // hidden free (layer 1)
    for (int i=0;i<K1;i++) begin
      x_set_en_all[1][i] = 1'b0;
      x_obs_flat_all[1][32*i +: 32] = 32'h0;
    end

    // bottom clamp (layer 0)
    for (int o=0;o<K0;o++) begin
      x_set_en_all[0][o] = 1'b1;
      x_obs_flat_all[0][32*o +: 32] = f2b(y_targets[s][o]);
    end
  endtask

  task automatic clamp_top_only(input int s);
    clear_clamps();

    for (int i=0;i<K2;i++) begin
      x_set_en_all[2][i] = 1'b1;
      x_obs_flat_all[2][32*i +: 32] = f2b(x2_samples[s][i]);
    end
  endtask

  // rates
  task automatic set_rates_infer();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  task automatic set_rates_learn();
    alpha_ieee = f2b(ALPHA_R);
    gamma_ieee = f2b(GAMMA_R);   // keep ON (stable, matches your working RTL behavior)
  endtask

  task automatic set_rates_eval();
    alpha_ieee = f2b(0.0);
    gamma_ieee = f2b(GAMMA_R);
  endtask

  // mse
  function automatic real mse_sample(input int sidx);
    real acc=0.0;
    for (int o=0;o<K0;o++) begin
      real pred = b2f(uut.x_state_global[0][o]);
      real d = pred - y_targets[sidx][o];
      acc += d*d;
    end
    return acc / real'(K0);
  endfunction

  function automatic real mse_dataset();
    real acc=0.0;
    set_rates_eval();
    for (int s=0;s<NUM_SAMPLES;s++) begin
      clamp_top_only(s);
      for (int t=0;t<EVAL_SETTLE_TICKS;t++) do_tick();
      acc += mse_sample(s);
    end
    return acc / real'(NUM_SAMPLES);
  endfunction

  // main
  initial begin
    real mse0, msep;
    start_tick = 0;
    clear_clamps();
    build_dataset();

    wait(rst_n);
    repeat (5) @(posedge clk);

    csv_open("runs/pc3_hidden_relu_train.csv", "epoch,mse");

    mse0 = mse_dataset();

    $display("[TB] Initial MSE = %f", mse0);
    $display("[TB] Train dims 2->8->3 hidden ReLU, MATLAB-matched teacher");

    csv_row($sformatf("%0d,%f", 0, mse0));

    for (int ep=0; ep<EPOCHS; ep++) begin
      for (int s=0; s<NUM_SAMPLES; s++) begin
        clamp_top_bottom(s);

        set_rates_infer();
        for (int t=0;t<INFER_TICKS_PER_SAMPLE;t++) do_tick();

        set_rates_learn();
        for (int t=0;t<LEARN_TICKS_PER_SAMPLE;t++) do_tick();
      end

      msep = mse_dataset();

      csv_row($sformatf("%0d,%f", ep+1, msep));
      $display("[TB] Epoch %0d  MSE = %f", ep, msep);
    end

    csv_close();
    $finish;
  end

endmodule

`default_nettype wire
