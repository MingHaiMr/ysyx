module ysyx_23060187_EXU(
    input clk,
    input rst,
    input [31:0] IDU_EXU_imm,
    input [31:0] IDU_EXU_rs1,
    input [31:0] IDU_EXU_rs2,
    input [31:0] IDU_EXU_waddr,
    input IDU_EXU_valid,
    input WBU_EXU_valid,
    output reg EXU_IDU_ready,
    output reg WBU_IDU_valid,
    output reg [31:0] EXU_IDU_waddr,
    output reg [31:0] EXU_IDU_wdata
);

    parameter IDLE = 0;
    parameter WAIT_READY = 1;

    reg current_state;
    reg next_state;

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    always @(*) begin
        case (current_state)
            IDLE: begin
                if (IDU_EXU_valid == 0) begin
                    next_state = IDLE;
                end else begin
                    next_state = WAIT_READY;
                end
            end
            WAIT_READY: begin
                if (WBU_EXU_valid == 0) begin
                    next_state = WAIT_READY;
                end else begin
                    next_state = IDLE;
                end
            end
            default: begin
                next_state = IDLE;
            end        
        endcase
    end

    


endmodule