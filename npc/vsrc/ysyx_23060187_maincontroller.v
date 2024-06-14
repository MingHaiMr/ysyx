module ysyx_23060187_maincontroller(
    input [2:0]fun3,
    input [6:0]fun7,
    input [6:0]opcode,
    output [3:0]ALUctrl,
    output addi,
    output auipc,
    output jal,
    output jalr,
    output lui,
    output add,
    output sub,
    output sltiu,
    output sltu,
    output bne,
    output beq,
    output sll,
    output srl,
    output and_,
    output andi,
    output or_,
    output ori,
    output xor_,
    output xori,
    output srli,
    output slli,
    output bge,
    output bgeu
);

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
    assign bgeu = (opcode == 7'b0010011) && (fun3 == 3'b111);


    assign ALUctrl = (sub | sltiu | sltu) ? 6: (sll | slli) ? 3 : (srl | srli) ? 4 : (and_ | andi) ? 0: (or_ | ori) ? 1 : (xor_ | xori) ? 5 : 2;
    

endmodule