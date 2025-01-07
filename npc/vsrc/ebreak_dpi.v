module ebreak_dpi(input [31:0]inst, input [31:0]gpr10, input [31:0]pc);
    import "DPI-C" function bit is_ebreak(input int inst, input int gpr10);
               always @(*) begin
                   if(is_ebreak(inst, gpr10) == 1) begin
                       $display("\n\33[1;34mebreak! pc : 0x%08h $a0 : 0x%08h", pc , gpr10 );
                       $display("\33[0m\n");
                       //$display("EBREAK");
                       $finish;
                   end
                   else begin
                       //$display("pc : 0x%08x", pc);
                       //$display("NOT EBREAK");
                   end
               end
           endmodule
