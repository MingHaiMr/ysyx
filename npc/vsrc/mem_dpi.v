module mem_dpi(input valid, input wen, input [31:0]raddr, output reg [31:0]rdata, input [31:0]waddr, input [31:0]wdata, input [7:0]wmask);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
    always @(*) begin
        if(valid) begin
            rdata = pmem_read(raddr);
            if(wen) begin
                pmem_write(waddr, wdata, wmask);
            end
        end
        else begin
            rdata = 0;
        end
    end
endmodule