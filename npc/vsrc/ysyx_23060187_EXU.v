module ysyx_23060187_EXU(
    input clk,
    input rst,
    input IDU_EXU_oprate_num_1_select,
    input [1:0] IDU_EXU_oprate_num_2_select,
    input [31:0] IDU_EXU_imm,
    input [31:0] MEM_EXU_pc,
    input [31:0] REG_EXU_src_1,
    input [31:0] REG_EXU_src_2,
    input [31:0] REG_EXU_waddr,
    input IDU_EXU_wdata_select,
    input [31:0] IDU_EXU_wen,
    input [3:0] IDU_EXU_ALU_ctrl,
    input IDU_EXU_valid,
    input WBU_EXU_valid,
    output reg EXU_IDU_ready,
    output reg WBU_IDU_valid,
    output EXU_WBU_wen,
    output reg [31:0] EXU_WBU_wdata,
    output reg [31:0] EXU_WBU_waddr
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
                if (WBU_EXU_valid == 0) begin:
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

    wire [31:0] operate_num_1;
    wire [31:0] operate_num_2;
    wire [4:0] IDU_EXU_imm_4_0;
    
    assign IDU_EXU_imm_4_0 = IDU_EXU_imm[4:0];
    assign operate_num_1 = IDU_EXU_oprate_num_1_select ? MEM_EXU_pc : REG_EXU_src_1;
    assign oprate_num_2 = (IDU_EXU_oprate_num_2_select == 2'b10) ? IDU_EXU_imm :
                            (IDU_EXU_oprate_num_2_select == 2'b01) ? REG_EXU_src_2 :
                            (IDU_EXU_oprate_num_2_select == 2'b00) ? {{27{1'b0}}, IDU_EXU_imm_4_0} : 32'b4;

    
    reg [31:0] EXU_WBU_wdata_reg;
    reg [31:0] EXU_WBU_waddr_reg;
    reg EXU_WBU_wen_reg; 

    // output declaration of module ysyx_23060187_ALU
    wire [31:0] result;
    wire zero;
    wire cout;
    wire overflow;
    
    ysyx_23060187_ALU u_ysyx_23060187_ALU(
        .ALUctrl  	(IDU_EXU_ALU_ctrl   ),
        .opnum1   	(operate_num_1    ),
        .opnum2   	(operate_num_2    ),
        .result   	(result    ),
        .zero     	(zero      ),
        .cout     	(cout      ),
        .overflow 	(overflow  )
    );
    
    wire wdata_operate_compare_select_1;
    wire wdata_operate_compare_select_2;

    assign wdata_operate_compare_select_1 = (operate_num_1[31] > operate_num_2[31]) || (result[31] == 1);
    assign wdata_operate_compare_select_2 = (operate_num_1 < operate_num_2);

endmodule