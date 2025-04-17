module ysyx_23060187_EXU(
    input clk,
    input rst,

    input IDU_EXU_oprate_num_1_select,
    input [1:0] IDU_EXU_oprate_num_2_select,
    input [31:0] IDU_EXU_imm,

    input [31:0] REG_EXU_src_1,
    input [31:0] REG_EXU_src_2,
    input [3:0] IDU_EXU_ALU_ctrl,
    input [31:0] IDU_EXU_rd,

    input IDU_EXU_wdata_select,
    input IDU_EXU_register_wen,
    input IDU_EXU_memory_wen,

    input IDU_EXU_shift_amt,
    input IDU_EXU_mul_select,
    input IDU_EXU_div_select,
    input IDU_EXU_rem_select,

    input IDU_EXU_valid,
    input WBU_EXU_ready,
    output reg EXU_IDU_ready,
    output reg EXU_WBU_valid,

    input [31:0] MEM_EXU_read_data,
    
    output EXU_WBU_register_wen,
    output reg [31:0] EXU_WBU_register_waddr,
    output reg [31:0] EXU_WBU_register_wdata,

    output EXU_WBU_memory_wen,
    output reg [31:0] EXU_WBU_memory_waddr,
    output reg [31:0] EXU_WBU_memory_wdata
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
                if (WBU_EXU_ready == 0) begin:
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


    // output declaration of module ysyx_23060187_ALU
    wire [31:0] ALU_result;
    wire zero;
    wire cout;
    wire overflow;
    
    ysyx_23060187_ALU u_ysyx_23060187_ALU(
        .ALUctrl  	(IDU_EXU_ALU_ctrl   ),
        .opnum1   	(operate_num_1    ),
        .opnum2   	(operate_num_2    ),
        .result   	(ALU_result    ),
        .zero     	(zero      ),
        .cout     	(cout      ),
        .overflow 	(overflow  )
    );
    
    wire wdata_operate_compare_select_1;
    wire wdata_operate_compare_select_2;

    assign wdata_operate_compare_select_1 = (operate_num_1[31] > operate_num_2[31]) || (result[31] == 1);
    assign wdata_operate_compare_select_2 = (operate_num_1 < operate_num_2);

    wire [31:0] sra_mask;
    wire [31:0] shift_res;
    wire [63:0] unsigned_prod;
    wire [63:0] signed_prod;
    wire [31:0] unsigned_div_res;
    wire [31:0] signed_div_res;
    wire [31:0] unsigned_rem_res;
    wire [31:0] signed_rem_res;

    assign shift_res = REG_EXU_src_1 >> shift_amt;
    assign sra_mask = ~(32'hffffffff >> shift_amt);
    assign sra_res = ({32{REG_EXU_src_1[31]}} & sra_mask) | shift_res;
    assign unsigned_prod = (REG_EXU_src_1 * REG_EXU_src_2);
    assign signed_prod = $signed(REG_EXU_src_1) * $signed(REG_EXU_src_2);
    assign unsigned_div_res = REG_EXU_src_1 / REG_EXU_src_2;
    assign signed_div_res = $(signed(REG_EXU_src_1) / $signed(REG_EXU_src_2));
    assign unsigned_rem_res = REG_EXU_src_1 % REG_EXU_src_2;
    assign signed_rem_res = $(signed)REG_EXU_src_1 % $signed(REG_EXU_src_2);

    wire [31:0] register_wdata_value;
    reg [31:0] EXU_WBU_register_wdata_reg;
    reg [31:0] EXU_WBU_register_waddr_reg;
    reg EXU_WBU_register_wen_reg;

    wire [31:0] memory_wdata_value;
    reg [31:0] EXU_WBU_memory_wdata_reg;
    reg [31:0] EXU_WBU_memory_waddr_reg;
    reg EXU_WBU_memory_wen_reg;

    assign register_wdata_value = (IDU_EXU_wdata_select == 4'b0001) ?  IDU_EXU_imm :
                         (IDU_EXU_wdata_select == 4'b0010) ? (wdata_operate_compare_select_1 ? : 32'd1 : 32'd0) :
                         (IDU_EXU_wdata_select == 4'b0011) ? (wdata_operate_compare_select_2 ? 32'd1 : 32'd0) :
                         (IDU_EXU_wdata_select == 4'b0100) ? sra_res :
                         (IDU_EXU_wdata_select == 4'b0101) ? (IDU_EXU_mul_select ? unsigned_prod[31:0] : signed_prod[63:32]) :
                         (IDU_EXU_wdata_select == 4'b0110) ? (IDU_EXU_div_select ? signed_div_res : unsigned_div_res) :
                         (IDU_EXU_wdata_select == 4'b0111) ? (IDU_EXU_rem_select ? signed_rem_res : unsigned_rem_res) :
                         (IDU_EXU_wdata_select == 4'b1000) ? {24'b0, MEM_EXU_read_data[7:0]} :
                         (IDU_EXU_wdata_select == 4'b1001) ? MEM_EXU_read_data :
                         (IDU_EXU_wdaya_select == 4'b1010) ? {{16{MEM_EXU_read_data[15]}}, MEM_EXU_read_data[15:0]} :
                         (IDU_EXU_wdata_select == 4'b1011) ? {16'b0, MEM_EXU_read_data[15:0]} :
                         ALU_result;

    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            EXU_WBU_register_wen_reg <= 0;
            EXU_WBU_register_wdata_reg <= 0;
            EXU_WBU_register_waddr_reg <= 0;
            EXU_WBU_memory_wen_reg <= 0;
            EXU_WBU_memory_waddr_reg <= 0;
            EXU_WBU_memory_wdata_reg <= 0;
        end
        else if(EXU_WBU_valid && WBU_EXU_ready) begin
            EXU_WBU_register_wen_reg <= IDU_EXU_register_wen;
            EXU_WBU_register_wdata_reg <= register_wdata_value;
            EXU_WBU_register_waddr_reg <= IDU_EXU_rd;
            EXU_WBU_memory_wen_reg <= IDU_EXU_memory_wen;
            EXU_WBU_memory_waddr_reg <= REG_EXU_src_1 + IDU_EXU_imm;
            EXU_WBU_memory_wdata_reg <= REG_EXU_src_2;
        end
        else begin
            EXU_WBU_register_wen_reg <= EXU_WBU_register_wen_reg;
            EXU_WBU_register_wdata_reg <= EXU_WBU_register_wdata_reg;
            EXU_WBU_register_waddr_reg <= EXU_WBU_register_waddr_reg;
            EXU_WBU_memory_wen_reg <= EXU_WBU_memory_wen_reg;
            EXU_WBU_memory_waddr_reg <= EXU_WBU_memory_waddr_reg;
            EXU_WBU_memory_wdata_reg <= EXU_WBU_memory_wdata_reg;
        end
    end

    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            EXU_IDU_ready <= 0;
            EXU_WBU_valid <= 0;
            EXU_WBU_register_wen <= EXU_WBU_register_wen_reg;
            EXU_WBU_register_waddr <= EXU_WBU_register_waddr_reg;
            EXU_WBU_register_wdata <= EXU_WBU_register_wdata_reg;
            EXU_WBU_memory_wen <= EXU_WBU_memory_wen_reg;
            EXU_WBU_memory_waddr <= EXU_WBU_memory_waddr_reg;
            EXU_WBU_memory_wdata <= EXU_WBU_memory_wdata_reg;
        end
        else if(current_state == IDLE) begin
            EXU_IDU_ready <= 1;
            EXU_WBU_valid <= 0;
            EXU_WBU_register_wen <= EXU_WBU_register_wen_reg;
            EXU_WBU_register_waddr <= EXU_WBU_register_waddr_reg;
            EXU_WBU_register_wdata <= EXU_WBU_register_wdata_reg;
            EXU_WBU_memory_wen <= EXU_WBU_memory_wen_reg;
            EXU_WBU_memory_waddr <= EXU_WBU_memory_waddr_reg;
            EXU_WBU_memory_wdata <= EXU_WBU_memory_wdata_reg;
        end
        else if(current_state == WAIT_READY) begin
            EXU_IDU_ready <= 0;
            EXU_WBU_valid <= 1;
            EXU_WBU_register_wen <= EXU_WBU_register_wen_reg;
            EXU_WBU_register_waddr <= EXU_WBU_register_waddr_reg;
            EXU_WBU_register_wdata <= EXU_WBU_register_wdata_reg;
            EXU_WBU_memory_wen <= EXU_WBU_memory_wen_reg;
            EXU_WBU_memory_waddr <= EXU_WBU_memory_waddr_reg;
            EXU_WBU_memory_wdata <= EXU_WBU_memory_wdata_reg;
        end
    end
endmodule