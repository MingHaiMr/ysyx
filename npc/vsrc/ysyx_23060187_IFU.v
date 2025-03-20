module ysyx_23060187_IFU(
    input clk,
    input rst,
    input [31:0] inst_in,
    input mem_IFU_valid,
    output reg IFU_mem_ready,
    output reg [31:0] inst_out,
    input IDU_IFU_ready,
    output reg IFU_IDU_valid
);

    parameter IDLE = 0;
    parameter WAIT_READY = 1;

    reg current_state;
    reg next_state;
    reg [31:0] inst_reg;
    
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
                if (IFU_IDU_valid == 0) begin
                    next_state = IDLE;
                end else begin
                    next_state = WAIT_READY;
                end
            end
            WAIT_READY: begin
                if (IDU_IFU_ready == 0) begin
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

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            IFU_mem_ready <= 0;
            IFU_IDU_valid <= 0;
            inst_out <= inst_reg;
        end else if (current_state == IDLE) begin
            IFU_mem_ready <= 1;
            IFU_IDU_valid <= 0;
            inst_out <= inst_reg;
        end else if (current_state == WAIT_READY) begin
            IFU_mem_ready <= 0;
            IFU_IDU_valid <= 1;
            inst_out <= inst_reg;
        end
    end

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            inst_reg <= 0;
        end else if (mem_IFU_valid && IFU_mem_ready) begin
            inst_reg <= inst_in;
        end
    end
    
endmodule
