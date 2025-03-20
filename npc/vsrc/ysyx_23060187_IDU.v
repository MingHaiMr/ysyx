module ysyx_23060187_IDU(
    input clk,
    input rst,
    input [31:0] IFU_inst,
    input EXU_IDU_ready,
    input IFU_IDU_valid,
    output reg IDU_EXU_valid,
    output reg IDU_IFU_ready,
    output reg [31:0] waddr,
    output reg [31:0] wdata,
    output [31:0] imm,
    output [31:0] rs1,
    output [31:0] rs2,
    output [31:0] rd
);

    assign rs1 = IFU_inst[19:15];
    assign rs2 = IFU_inst[24:20];
    assign rd = IFU_inst[11:7];

    wire U_type;
    wire I_type;
    wire J_type;
    wire B_type;
    wire R_type;
    wire S_type;

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

    assign U_imm = {IFU_inst[31:12], {12{1'b0}}};
    assign I_imm = {{20{IFU_inst[31]}}, IFU_inst[31:20]};
    assign J_imm = {{12{IFU_inst[31]}}, IFU_inst[19:12], IFU_inst[20], IFU_inst[30:21], {1'b0}};
    assign B_imm = {{19{IFU_inst[31]}}, IFU_inst[31], IFU_inst[7], IFU_inst[30:25], IFU_inst[11:8], {1'b0}};
    assign S_imm = {{20{IFU_inst[31]}}, IFU_inst[31:25], IFU_inst[11:7]};
    
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

    wire branch_signal;
    assign branch_signal = bne | beq | bge | bgeu | blt | bltu;
    wire mem_signal;
    assign mem_signal = lbu | lw | sb | sw | sh | lh | lhu;
    wire alu_signal;
    assign alu_signal = addi | lui | jalr | add | sub | sltiu | sltu | sll | srl | and_ | andi | or_ | ori | xor_ | xori | srli | slli | sra | srai | slt | slti;
    wire mul_signal;
    assign mul_signal = mul | mulh | div | divu | rem | remu;
    wire jal_signal;
    assign jal_signal = jal | jalr;

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
            waddr <= 0;
            wdata <= 0;  //???
        end else if (current_state == IDLE) begin
            IDU_EXU_valid <= 1;
            IDU_IFU_ready <= 0;
            waddr <= rd;  //???
            wdata <= IFU_inst; //???
        end else if (current_state == WAIT_READY) begin
            IDU_EXU_valid <= 0;
            IDU_IFU_ready <= 1;
            waddr <= rd;
            wdata <= IFU_inst; //???
        end
    end



endmodule