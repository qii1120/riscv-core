module Binary_to_Grey (din, dout);
    input [4-1:0] din;
    output [4-1:0] dout;

    assign dout =  {1'b0, din[4-1:1]} ^ din;

endmodule
