module SSC(
    operand1,
    operand2,
    result
);
input [7:0] operand1, operand2;
output reg result;

wire a0EQb0, a1EQb1, a2EQb2, a3EQb3, a4EQb4, a5EQb5, a6EQb6;
wire NOTb0, NOTb1, NOTb2, NOTb3, NOTb4, NOTb5, NOTb6, NOTb7;
wire a0ANDNb0, a1ANDNb1, a2ANDNb2, a3ANDNb3, a4ANDNb4, a5EANDNb5, a6ANDNb6, a7ANDNb7;
wire EQ67, EQ567, EQ4567, EQ34567, EQ234567, EQ1234567;

// xnor xnor0(a0EQb0, operand1[0], operand2[0]);
xnor xnor1(a1EQb1, operand1[1], operand2[1]);
xnor xnor2(a2EQb2, operand1[2], operand2[2]);
xnor xnor3(a3EQb3, operand1[3], operand2[3]);
xnor xnor4(a4EQb4, operand1[4], operand2[4]);
xnor xnor5(a5EQb5, operand1[5], operand2[5]);
xnor xnor6(a6EQb6, operand1[6], operand2[6]);
xnor xnor7(a7EQb7, operand1[7], operand2[7]);

assign NOTb0 = ~operand2[0];
assign NOTb1 = ~operand2[1];
assign NOTb2 = ~operand2[2];
assign NOTb3 = ~operand2[3];
assign NOTb4 = ~operand2[4];
assign NOTb5 = ~operand2[5];
assign NOTb6 = ~operand2[6];
assign NOTb7 = ~operand2[7];

assign EQ67 = a6EQb6 & a7EQb7;
assign EQ567 = a5EQb5 & EQ67;
assign EQ4567 = a4EQb4 & EQ567;
assign EQ34567 = a3EQb3 & EQ4567;
assign EQ234567 = a2EQb2 & EQ34567;
assign EQ1234567 = a1EQb1 & EQ234567;

assign a0ANDNb0 = operand1[0] & NOTb0 & EQ1234567;
assign a1ANDNb1 = (operand1[1] & NOTb1) & EQ234567;
assign a2ANDNb2 = (operand1[2] & NOTb2) & EQ34567;
assign a3ANDNb3 = (operand1[3] & NOTb3) & EQ4567;
assign a4ANDNb4 = (operand1[4] & NOTb4) & EQ567;
assign a5ANDNb5 = (operand1[5] & NOTb5) & EQ67;
assign a6ANDNb6 = (operand1[6] & NOTb6) & a7EQb7;
assign a7ANDNb7 = (operand1[7] & NOTb7);

    always@(*) begin
        casez({a0ANDNb0, a1ANDNb1, a2ANDNb2, a3ANDNb3, a4ANDNb4, a5ANDNb5, a6ANDNb6, a7ANDNb7})
            8'b???????1, 8'b??????10, 8'b?????100, 8'b????1000, 8'b???10000, 8'b??100000, 8'b?1000000, 8'b10000000: result = 1'b1;
            default: result = 1'b0;
        endcase
        $display("%b", {a0ANDNb0, a1ANDNb1, a2ANDNb2, a3ANDNb3, a4ANDNb4, a5ANDNb5, a6ANDNb6, a7ANDNb7});
    end

endmodule