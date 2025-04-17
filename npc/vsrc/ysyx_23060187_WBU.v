module ysyx_23060187_WBU(
    input clk,
    input rst,
    input EXU_WBU_valid,
    output WBU_EXU_ready,
    
    input EXU_WBU_register_wen,
    input [31:0] EXU_WBU_register_waddr,
    input [31:0] EXU_WBU_register_wdata,
    
    input EXU_WBU_memory_wen,
    input [31:0] EXU_WBU_memory_waddr,
    input [31:0] EXU_WBU_memory_wdata
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

    
   
endmodule
