module data_ram(
        input clk,
        input wen,
        input valid,
        input[31:0] mem_rlen,
        input[31:0] raddr,
        input[31:0] waddr,
        input[31:0] wdata,
        output reg [31:0]rdata,
        //display 8 numbers in the data ram
        output[31:0] num1,
        output[31:0] num2,
        output[31:0] num3,
        output[31:0] num4,
        output[31:0] num5,
        output[31:0] num6,
        output[31:0] num7,
        output[31:0] num8
    );
    integer i;
    reg[31:0] dram[1023:0];
    initial begin
        $readmemb("array.txt",dram);
    end
    //initial begin
    //    for(i=0; i<8; i=i+1)
    //        $display("%d: %h\n", i, dram[i]);
    //end
    always @(*) begin
        if(valid) begin
            if(mem_rlen == 32'd1) begin
                rdata = {24'd0,dram[raddr[11:2]][7:0]};
            end
            else if(mem_rlen == 32'd2) begin
                rdata = {16'd0,dram[raddr[11:2]][15:0]};
            end
            else begin
                rdata = dram[raddr[11:2]];
            end
        end
        else begin
            rdata = 32'h0;
        end
    end

    always @(posedge clk) begin
        //for(i=0; i<8; i=i+1)
        //    $display("%d: 0x%08h\n", i, dram[i]);
        if(wen) begin
            if(waddr[28] != 1) begin
                dram[waddr[11:2]] <= wdata;
            end
        end
    end
    assign num1 = dram[0];
    assign num2 = dram[1];
    assign num3 = dram[2];
    assign num4 = dram[3];
    assign num5 = dram[4];
    assign num6 = dram[5];
    assign num7 = dram[6];
    assign num8 = dram[7];
endmodule
