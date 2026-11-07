module pc_network_222 (
    input  logic clk,
    input  logic rst_n,
    input  logic start_tick,
    input  logic learn_en,

    input  logic [2:0][1:0]  x_set_en_all,
    input  logic [2:0][63:0] x_obs_flat_all,

    output logic busy_o,
    output logic done_o
);

    localparam int NUM_LAYERS = 3;
    localparam int MAX_K = 2;
    localparam int K_LUT[NUM_LAYERS] = '{2, 2, 2};

    pc_network_nlayer #(
        .NUM_LAYERS(NUM_LAYERS),
        .MAX_K(MAX_K),
        .K_LUT(K_LUT),
        .M0(0)
    ) u_network (
        .clk(clk),
        .rst_n(rst_n),
        .start_tick(start_tick),
        .learn_en(learn_en),
        .x_set_en_all(x_set_en_all),
        .x_obs_flat_all(x_obs_flat_all),
        .busy_o(busy_o),
        .done_o(done_o)
    );

endmodule