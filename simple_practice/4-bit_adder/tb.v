module tb;
    reg [3:0]a;
    reg [3:0]b;
    reg c_in;
    wire [3:0]sum;
    wire c_out;
    adder4 adder0(.a(a), .b(b), .c_in(c_in), .sum(sum), .c_out(c_out));

    initial begin
        a <= 0;
        b <= 0;
        c_in <=0;

        $monitor("a = 0x%0h b = 0x%0h c_in = 0x%0h sum = 0x%0h c_out = 0x%0h", a, b, c_in, sum, c_out);

        for(integer i=0; i<5; i=i+1)
        begin
            #5  a<=$random;
                b<=$random;
                c_in<=$random;
        end
    end
    initial begin
        $dumpfile("adder4.vcd");
        $dumpvars(0, tb);
    end
endmodule