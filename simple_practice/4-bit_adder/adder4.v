module adder4 ( input signed [3:0] a, input signed [3:0] b, input c_in, 
                output signed [3:0] sum, output c_out);
    wire [2:0] c;

    fulladder fa1(a[0],b[0], c_in, sum[0], c[0]) ;
    fulladder fa2(a[1],b[1], c[0], sum[1], c[1]) ;
    fulladder fa3(a[2],b[2], c[1], sum[2], c[2]) ;
    fulladder fa4(a[3],b[3], c[2], sum[3], c_out) ;
;

endmodule
module fulladder ( input a, b, c_in, output sum, c_out);
    wire s1, c1, c2;

    xor g1(s1, a, b);
    xor g2(sum, s1, c_in);
    and g3(c1, a,b);
    and g4(c2, s1, c_in) ;
    xor g5(c_out, c2, c1) ;
endmodule
