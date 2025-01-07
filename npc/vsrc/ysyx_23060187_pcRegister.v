module ysyx_23060187_pcRegister(
        input clk,
        input rst,
        input jal,
        input jalr,
        input bne,
        input beq,
        input bge,
        input bgeu,
        input blt,
        input bltu,
        input [31:0]imm,
        input [31:0]src1,
        input isjump,
        output reg [31:0]pc_out
    );

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc_out <= 32'h00000000;
        end
        else if(jal) begin
            //$display("\npc jump!\n");
            pc_out <= (pc_out + imm);
        end
        else if((bne || bge || bgeu) && !isjump) begin
            //$display("\npc jump!\n");
            pc_out <= (pc_out + imm);
        end
        else if((beq || blt || bltu) && isjump) begin
            //$display("\nblt! pc jump!\n");
            pc_out <= (pc_out + imm);
        end
        else if(jalr) begin
            //$display("\npc jump!\n");
            pc_out <= (src1 + imm);
        end
        else begin
            //$display("\npc not jump!\n");
            pc_out <= pc_out + 4;
        end
    end

endmodule




































































