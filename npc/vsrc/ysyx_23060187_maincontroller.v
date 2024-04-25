module ysyx_23060187_maincontroller(
    input [2:0]fun3,
    input [6:0]opcode,
    output [3:0]ALUctrl,
    output addi,
    output auipc,
    output jal,
    output jalr,
    output lui
);

    assign auipc = (opcode == 7'b0010111);
    assign jal = (opcode == 7'b1101111);
    assign jalr = (opcode == 7'b1100111) && (fun3 == 3'b000);
    assign addi = (opcode == 7'b0010011) && (fun3 == 3'b000);
    assign lui = (opcode == 7'b0110111);

    assign ALUctrl = auipc ? 2 : jal ? 2 : 2;
    

endmodule