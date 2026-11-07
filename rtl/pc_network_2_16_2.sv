module pc_network_2162 (
    input logic clk,
    input logic rst_n,
    input logic start_tick,
    input logic learn_en,

    input logic [2:0][1:0] x_set_en_all,
    input logic [2:0][63:0] x_obs_flat_all,

    output logic busy_o,
    output logic done_o
);

    localparam int NUM_LAYERS = 3;
    localparam int MAX_K = 16;
    localparam int K_LUT[NUM_LAYERS] = '{2, 16, 2};

    logic [NUM_LAYERS-1:0][MAX_K-1:0] clamp_en;
    logic [NUM_LAYERS-1:0][32*MAX_K-1:0] observations;

    always_comb begin
        clamp_en = '0;
        observations = '0;

        clamp_en[0][1:0] = x_set_en_all[0];
        clamp_en[2][1:0] = x_set_en_all[2];

        observations[0][63:0] = x_obs_flat_all[0];
        observations[2][63:0] = x_obs_flat_all[2];
    end

    pc_network_nlayer #(
        .NUM_LAYERS(NUM_LAYERS),
        .MAX_K(MAX_K),
        .K_LUT(K_LUT),
        .M0(0),
        .MACRO_J(16),
        .MACRO_K(16)
    ) u_network (
        .clk(clk),
        .rst_n(rst_n),
        .start_tick(start_tick),
        .learn_en(learn_en),
        .x_set_en_all(clamp_en),
        .x_obs_flat_all(observations),
        .busy_o(busy_o),
        .done_o(done_o)
    );

endmodule