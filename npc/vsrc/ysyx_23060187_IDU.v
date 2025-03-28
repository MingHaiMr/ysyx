module ysyx_23060187_IDU(
    input clk,
    input rst,
    input [31:0] IFU_IDU_inst,
    input EXU_IDU_ready,
    input IFU_IDU_valid,
    output reg IDU_EXU_valid,
    output reg IDU_IFU_ready,
    output reg [31:0] imm,
    output reg [31:0] rs1,
    output reg [31:0] rs2,
    output reg [31:0] rd,
    output reg operate_num_1_select,
    output reg [1:0] operate_num_2_select,
    output reg [3:0] wdata_select,
    output reg register_wen,
    output reg memory_wen,
    output reg shift_amt_select,
    output reg [3:0] ALU_ctrl,
    output reg mul_select,
    output reg div_select,
    output reg rem_select
);


    wire U_type;
    wire I_type;
    wire J_type;
    wire B_type;
    wire R_type;
    wire S_type;
    wire [6:0] opcode;

    assign opcode = IFU_IDU_inst[6:0];
    assign U_type = (opcode == 7'b0010111) | (opcode == 7'b0110111);
    assign I_type = (opcode == 7'b0000011) | (opcode == 7'b0010011) | (opcode == 7'b1100111);
    assign J_type = (opcode == 7'b1101111);
    assign B_type = (opcode == 7'b1100011);
    assign R_type = (opcode == 7'b0110011);
    assign S_type = (opcode == 7'b0100011);

    wire [31:0] U_imm;
    wire [31:0] I_imm;
    wire [31:0] J_imm;
    wire [31:0] B_imm;
    wire [31:0] R_imm;
    wire [31:0] S_imm;

    assign U_imm = {IFU_IDU_inst[31:12], {12{1'b0}}};
    assign I_imm = {{20{IFU_IDU_inst[31]}}, IFU_IDU_inst[31:20]};
    assign J_imm = {{12{IFU_IDU_inst[31]}}, IFU_IDU_inst[19:12], IFU_IDU_inst[20], IFU_IDU_inst[30:21], {1'b0}};
    assign B_imm = {{19{IFU_IDU_inst[31]}}, IFU_IDU_inst[31], IFU_IDU_inst[7], IFU_IDU_inst[30:25], IFU_IDU_inst[11:8], {1'b0}};
    assign S_imm = {{20{IFU_IDU_inst[31]}}, IFU_IDU_inst[31:25], IFU_IDU_inst[11:7]};
    
    assign imm = I_type ? I_imm :
           U_type ? U_imm :
           J_type ? J_imm :
           B_type ? B_imm :
           S_imm;

    wire auipc;
    wire jal;
    wire jalr;
    wire addi;
    wire lui;
    wire sub;
    wire add;
    wire sltiu;
    wire sltu;
    wire bne;
    wire beq;
    wire sll;
    wire srl;
    wire and_;
    wire andi;
    wire or_;
    wire ori;
    wire xor_;
    wire xori;
    wire srli;
    wire slli;
    wire bge;
    wire bgeu;
    wire sra;
    wire srai;
    wire blt;
    wire bltu;
    wire slt;
    wire slti;
    wire mul;
    wire mulh;
    wire div;
    wire divu;
    wire rem;
    wire remu;
    wire lbu;
    wire sb;
    wire sw;
    wire lw;
    wire sh;
    wire lh;
    wire lhu;
 
    assign auipc = (opcode == 7'b0010111);
    assign jal = (opcode == 7'b1101111);
    assign jalr = (opcode == 7'b1100111) && (fun3 == 3'b000);
    assign addi = (opcode == 7'b0010011) && (fun3 == 3'b000);
    assign lui = (opcode == 7'b0110111);
    assign sub = (opcode == 7'b0110011) && (fun3 == 3'b000) && (fun7 == 7'b0100000);
    assign add = (opcode == 7'b0110011) && (fun3 == 3'b000) && (fun7 == 7'b0000000);
    assign sltiu = (opcode == 7'b0010011) && (fun3 == 3'b011);
    assign sltu = (opcode == 7'b0110011) && (fun3 == 3'b011);
    assign bne = (opcode == 7'b1100011) && (fun3 == 3'b001);
    assign beq = (opcode == 7'b1100011) && (fun3 == 3'b000);
    assign sll = (opcode == 7'b0110011) && (fun3 == 3'b001) && (fun7 == 7'b0000000);
    assign srl = (opcode == 7'b0110011) && (fun3 == 3'b101) && (fun7 == 7'b0000000);
    assign and_ = (opcode == 7'b0110011) && (fun3 == 3'b111) && (fun7 == 7'b0000000);
    assign andi = (opcode == 7'b0010011) && (fun3 == 3'b111);
    assign or_ = (opcode == 7'b0110011) && (fun3 == 3'b110) && (fun7 == 7'b0000000);
    assign ori = (opcode == 7'b0010011) && (fun3 == 3'b110);
    assign xor_ = (opcode == 7'b0110011) && (fun3 == 3'b100) && (fun7 == 7'b0000000);
    assign xori = (opcode == 7'b0010011) && (fun3 == 3'b100);
    assign srli = (opcode == 7'b0010011) && (fun3 == 3'b101) && (fun7 == 7'b0000000);
    assign slli = (opcode == 7'b0010011) && (fun3 == 3'b001) && (fun7 == 7'b0000000);
    assign bge = (opcode == 7'b1100011) && (fun3 == 3'b101);
    assign bgeu = (opcode == 7'b1100011) && (fun3 == 3'b111);
    assign sra = (opcode == 7'b0110011) && (fun3 == 3'b101) && (fun7 == 7'b0100000);
    assign srai = (opcode == 7'b0010011) && (fun3 == 3'b101) && (fun7 == 7'b0100000);
    assign blt = (opcode == 7'b1100011) && (fun3 == 3'b100);
    assign bltu = (opcode == 7'b1100011) && (fun3 == 3'b110);
    assign slt = (opcode == 7'b0110011) && (fun3 == 3'b010) && (fun7 == 7'b0000000);
    assign slti = (opcode == 7'b0010011) && (fun3 == 3'b010);
    assign mul = (opcode == 7'b0110011) && (fun3 == 3'b000) && (fun7 == 7'b0000001);
    assign mulh = (opcode == 7'b0110011) && (fun3 == 3'b001) && (fun7 == 7'b0000001);
    assign div = (opcode == 7'b0110011) && (fun3 == 3'b100) && (fun7 == 7'b0000001);
    assign divu = (opcode == 7'b0110011) && (fun3 == 3'b101) && (fun7 == 7'b0000001);
    assign rem = (opcode == 7'b0110011) && (fun3 == 3'b110) && (fun7 == 7'b0000001);
    assign remu = (opcode == 7'b0110011) && (fun3 == 3'b111) && (fun7 == 7'b0000001);
    assign lbu = (opcode == 7'b0000011) && (fun3 == 3'b100);
    assign sb = (opcode == 7'b0100011) && (fun3 == 3'b000);
    assign sw = (opcode == 7'b0100011) && (fun3 == 3'b010);
    assign lw = (opcode == 7'b0000011) && (fun3 == 3'b010);
    assign sh = (opcode == 7'b0100011) && (fun3 == 3'b001);
    assign lh = (opcode == 7'b0000011) && (fun3 == 3'b001);
    assign lhu = (opcode == 7'b0000011) && (fun3 == 3'b101);

    parameter IDLE = 0;
    parameter WAIT_READY = 1;

    reg current_state;
    reg next_state;

    reg operate_num_1_select_reg;
    reg [1:0] operate_num_2_select_reg;
    reg [31:0] rs1_reg;
    reg [31:0] rs2_reg;
    reg [31:0] rd_reg;
    reg [31:0] imm_reg;
    reg [3:0] wdata_select_reg;
    reg register_wen_reg;
    reg memory_wen_reg;
    reg [3:0] ALU_ctrl_reg;
    reg shift_amt_select_reg;
    reg mul_select_reg;
    reg div_select_reg;
    reg rem_select_reg;

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
                if (EXU_IDU_ready == 0) begin
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
            IDU_EXU_valid <= 0;
            IDU_IFU_ready <= 0;
            operate_num_1_select <= operate_num_1_select_reg;
            operate_num_2_select <= operate_num_2_select_reg;
            rs1 <= rs1_reg;
            rs2 <= rs2_reg;
            rd <= rd_reg;
            imm <= imm_reg;
            wdata_select <= wdata_select_reg;
            register_wen <= register_wen_reg;
            memory_wen <= memory_wen_reg;
            ALU_ctrl <= ALU_ctrl_reg;
            shift_amt_select <= shift_amt_select_reg;
            mul_select <= mul_select_reg;
            div_select <= div_select_reg;
            rem_select <= rem_select_reg;
        end else if (current_state == IDLE) begin
            IDU_EXU_valid <= 1;
            IDU_IFU_ready <= 0;
            operate_num_1_select <= operate_num_1_select_reg;
            operate_num_2_select <= operate_num_2_select_reg;
            rs1 <= rs1_reg;
            rs2 <= rs2_reg;
            rd <= rd_reg;
            imm <= imm_reg;
            wdata_select <= wdata_select_reg;
            register_wen <= register_wen_reg;
            memory_wen <= memory_wen_reg;
            ALU_ctrl <= ALU_ctrl_reg;
            shift_amt_select <= shift_amt_select_reg;
            mul_select <= mul_select_reg;
            div_select <= div_select_reg;
            rem_select <= rem_select_reg;
        end else if (current_state == WAIT_READY) begin
            IDU_EXU_valid <= 0;
            IDU_IFU_ready <= 1;
            operate_num_1_select <= operate_num_1_select_reg;
            operate_num_2_select <= operate_num_2_select_reg;
            rs1 <= rs1_reg;
            rs2 <= rs2_reg;
            rd <= rd_reg;
            imm <= imm_reg;
            wdata_select <= wdata_select_reg;
            memory_wen <= memory_wen_reg;
            register_wen <= register_wen_reg;
            ALU_ctrl <= ALU_ctrl_reg;
            shift_amt_select <= shift_amt_select_reg;
            mul_select <= mul_select_reg;
            div_select <= div_select_reg;
            rem_select <= rem_select_reg;
        end
    end

    always @(posedge clk or negedge rst) begin
        if(!rst) begin
            operate_num_1_select_reg <= 0;
            operate_num_2_select_reg <= 0;
            rs1_reg <= 0;
            rs2_reg <= 0;
            rd_reg <= 0;
            imm_reg <= 0;
            wdata_select_reg <= 0;
            register_wen_reg <= 0;
            memory_wen_reg <= 0;
            ALU_ctrl_reg <= 0;
            shift_amt_select_reg <= 0;
            mul_select_reg <= 0;
            div_select_reg <= 0;
            rem_select_reg <= 0;
        end
        else if(IDU_EXU_valid && EXU_IDU_ready) begin
            operate_num_1_select_reg <= auipc | jal | jalr;
            operate_num_2_select_reg <= (addi | auipc | sltiu | andi | ori | xori | slti) ? 2'b10 :
                                          (add | sltu | bne | beq | sll | srl | and_ | or_ | xor_ | bge | bgeu | blt | slt | sub | bltu) ? 2'b01 :
                                          (srli | slli) ? {{27{1'b0}}, imm_4_0} : 2'b00;
            rs1_reg <= IFU_IDU_inst[19:15];
            rs2_reg <= IFU_IDU_inst[24:20];
            rd_reg <= IFU_IDU_inst[11:7];
            imm_reg <= I_type ? I_imm :
                        U_type ? U_imm :
                        J_type ? J_imm :
                        B_type ? B_imm :
                        S_imm;
            wdata_select_reg <= lui ? 4'b0001 :
                               (slt | slti) ? 4'b0010 :
                               (sltiu | sltu) ? 4'b0011 :
                               (sra | srai) ? 4'b0100 :
                               (mul | mulh) ? 4'b0101 :
                               (div | divu) ? 4'b0110 :
                               (rem | remu) ? 4'b0111 :
                               (lbu) ? 4'b1000 :
                               (lw) ? 4'b1001 :
                               (lh) ? 4'b1010 :
                               (lhu) ? 4'b1011 :
                               4'b1100;
            register_wen_reg <= (sb | sw | sh | bne | beq | bge | bgeu | blt | bltu) ? 0 : 1; 
            memory_wen_reg <= (sb | sw | sh);
            ALU_ctrl_reg <= (sub | sltiu | sltu | bne | beq | bge | bgeu | blt | bltu | slt | slti) ? 4'd6 :
                            (and_ | andi) ? 4'd0 :
                            (or_ | ori) ? 4'd1 :
                            (xor_ | xori) ? 4'd5 :
                            (sll | slli) ? 4'd3 :
                            (sra | srai | srli | srl) ? 4'd4 : 
                            4'd2;
            shift_amt_select_reg <= sra;
            mul_select_reg <= mul;
            div_select_reg <= div;
            rem_select_reg <= rem;
        end
        else begin
            operate_num_1_select_reg <= operate_num_1_select_reg;
            operate_num_2_select_reg <= operate_num_2_select_reg;
            rs1_reg <= rs1_reg;
            rs2_reg <= rs2_reg;
            rd_reg <= rd_reg;
            imm_reg <= imm_reg;
            wdata_select_reg <= wdata_select_reg;
            register_wen_reg <= register_wen_reg;
            memory_wen_reg <= memory_wen_reg;
            ALU_ctrl_reg <= ALU_ctrl_reg;
            shift_amt_select_reg <= shift_amt_select_reg;
            mul_select_reg <= mul_select_reg;
            div_select_reg <= div_select_reg;
            rem_select_reg <= rem_select_reg;
        end
    end
endmodule