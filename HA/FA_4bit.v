`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:57:45 02/08/2019 
// Design Name: 
// Module Name:    Practice_1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Practice_1(
	input[3:0] A,B,
	output [3:0] Z,
	output Cout
    );
	 
wire zero=0;
wire carry_0;
wire carry_1;
wire carry_2;

FullAdder_1 FA1(
	.A(A[0]),
	.B(B[0]),
	.Cin(zero),
	.Z(Z[0]),
	.Cout(carry_0)
);
FullAdder_1 FA2(
	.A(A[1]),
	.B(B[1]),
	.Cin(carry_0),
	.Z(Z[1]),
	.Cout(carry_1)
);
FullAdder_1 FA3(
	.A(A[2]),
	.B(B[2]),
	.Cin(carry_1),
	.Z(Z[2]),
	.Cout(carry_2)
);

FullAdder_1 FA4(
	.A(A[3]),
	.B(B[3]),
	.Cin(carry_2),
	.Z(Z[3]),
	.Cout(Cout)
);

endmodule

module FullAdder_1(
	input A,B,Cin,
	output Z,Cout
);
 assign Z = A^B^Cin ;
 assign Cout = A&B | B&Cin | A&Cin ;

endmodule