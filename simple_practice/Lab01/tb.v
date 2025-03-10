// module tb;
//     reg [63:0] card_num;
//     reg [8:0] input_money;
//     reg [31:0] snack_num;
//     reg [31:0] price;
//     wire out_valid;
//     wire [8:0] out_change;
//     SSC SSC0(.card_num(card_num), .input_money(input_money), .snack_num(snack_num),
//              .price(price), .out_valid(out_valid), .out_change(out_change));

//     initial begin
//         card_num <= 64'h8341381622988710;
//         input_money <= 9'd506;
//         snack_num <= 32'h81e4699f;
//         price <= 32'h4e188b23;

//         $monitor("card_num = 0x%0h input_money = 0x%0h out_valid = 0x%0h out_change = 0x%0d", card_num, input_money, out_valid, out_change);
//     end
//     initial begin
//         $dumpfile("adder4.vcd");
//         $dumpvars(0, tb);
//     end
// endmodule

module tb;
    reg [7:0] op1, op2;
    wire result;
    SSC SSC0(.operand1(op1), .operand2(op2), .result(result));

    initial begin
        op1 <= 8'b11001101;
        op2 <= 8'b11001100;

        $monitor("op1 = 0x%b op2 = 0x%b result = 0x%b", op1, op2, result);

        for(integer i=0; i<5; i=i+1)
        begin
            #5  op1<=$random;
                op2<=$random;
        end
    end
    initial begin
        $dumpfile("SSC.vcd");
        $dumpvars(0, tb);
    end
endmodule