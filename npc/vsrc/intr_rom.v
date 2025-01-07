module intr_rom(
        input  wire [31:0] raddr,
        input  valid,
        output reg [31:0] rdata
    );

    reg[32-1:0] cpu_instr_rom[255:0];
    integer i;
    initial begin
        $readmemh("bubblesort_intr.txt",cpu_instr_rom);
    end
    

    always @(*) begin
        if(valid) begin
            rdata = cpu_instr_rom[raddr[11:2]];
        end        
    end

endmodule
