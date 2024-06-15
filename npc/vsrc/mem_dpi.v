module mem_dpi(input valid, input wen, input [31:0]raddr1, output reg [31:0]rdata1, input [31:0]raddr2, output reg [31:0]rdata2, input [31:0]waddr, input [31:0]wdata, input [7:0]wmask);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
    always @(*) begin
        if(valid) begin
            rdata1 = pmem_read(raddr1);
            rdata2 = pmem_read(raddr2);    
            if(wen) begin
                pmem_write(waddr, wdata, wmask);
            end
        end
        else begin
            rdata1 = 32'd0;
            rdata2 = 32'd0;
        end
    end
endmodule