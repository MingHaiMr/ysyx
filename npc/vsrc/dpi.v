module dpi(input [31:0]inst, input clk);
import "DPI-C" function bit is_ebreak(input int inst);
always @(posedge clk) begin
    if(is_ebreak(inst) == 1) begin
        $display("EBREAK");
        $finish;
    end else begin
        //$display("NOT EBREAK");
    end
end
endmodule
