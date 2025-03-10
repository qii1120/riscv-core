`include "defines.v"

module rom  
    (
        input wire clk_i,
        input wire ce_i,
        input wire[`ADDR_WIDTH-1:0] addr_i,
        output reg[`DATA_WIDTH-1:0] inst_o
    );

    reg[7:0] mem[`MEM_SIZE-1:0];
    wire[`PART_ADDR_WIDTH-1:0] addr4;
    assign addr4 = {addr_i[`PART_ADDR_WIDTH-1:2],2'b0};
    
    always @(*)
        if (ce_i == 1'b0) begin
            inst_o = 32'h0;
        end else begin
            inst_o = {mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};
        end//if
    
    task writeByte;
    //不是單純的注釋 verilator分析到這句才會產生rom.v的相關檔案 沒有這一行，之後的make步驟會失敗
    /*verilator public*/ 
        input integer byte_addr;
        input [7:0] val;
        begin
            reg [`ADDR_WIDTH-1:0] t_addr;
            t_addr = byte_addr - `MEM_OFFSET;
            if (byte_addr >= `MEM_OFFSET &&  byte_addr < `MEM_OFFSET + `MEM_SIZE) 
            begin
                mem[t_addr[`PART_ADDR_WIDTH-1:0]] = val;
            end
        end
    endtask    
endmodule
