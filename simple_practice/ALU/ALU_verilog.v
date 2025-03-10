module ALU_1 (input [7:0]accum, input [7:0]data, input [2:0]opcode, input [1:0]sel, input clk, input reset, output zero, output [7:0]alu_out);
    wire out_0, out_1, out_2;
    assign out_0 = a & b;
    assign out_1 = a | b;
    fulladder add(a, b, c_in, out_2, c_out);
    mux_case mux(out_0, out_1, out_2, sel, result);
endmodule
