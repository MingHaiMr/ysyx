module mem_dpi(
    input valid1, 
    input valid2, 
    input wen, 
    input [31:0] mem_rlen, 
    input [31:0] raddr1, 
    output reg [31:0] rdata1, 
    input [31:0] raddr2, 
    output reg [31:0] rdata2, 
    input [31:0] waddr, 
    input [31:0] wdata, 
    input [7:0] wmask
);
    import "DPI-C" function int pmem_read(input int raddr, input int len);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    always @(*) begin
        if (valid1) begin
            if (raddr1 != 32'd0) begin
                rdata1 = pmem_read(raddr1, 4);
                //$display("inst : %0x08x", rdata1);
            end else begin
                rdata1 = 32'd0;
            end
        end else begin
            rdata1 = 32'd0;
        end
    end

    always @(*) begin
        if (valid2 && (raddr2 != 0)) begin
            $display("read address : 0x%08x read data : 0x%08x read len : %d\n", raddr2, rdata2, mem_rlen);
            if (mem_rlen == 32'd1) begin
                rdata2 = pmem_read(raddr2, 1);
            end else if (mem_rlen == 32'd2) begin
                rdata2 = pmem_read(raddr2, 2);
            end else begin
                rdata2 = pmem_read(raddr2, 4);
            end
        end else begin
            rdata2 = 32'd0;
        end
    end

    always @(*) begin
        if (wen) begin
            pmem_write(waddr, wdata, wmask);
        end
    end
endmodule
