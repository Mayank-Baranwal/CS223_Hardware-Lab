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
module adder_subt(
	input[2:0] A,B,
	input D,
	output [2:0] Z,
	output Cout
    );
	 
wire carry_0;
wire carry_1;
//wire carry_2;

FullAdder_1 FA1(
	.A(A[0]),
	.B(B[0]),
	.D(D),
	.Cin(D),
	.Z(Z[0]),
	.Cout(carry_0)
);
FullAdder_1 FA2(
	.A(A[1]),
	.B(B[1]),
	.D(D),
	.Cin(carry_0),
	.Z(Z[1]),
	.Cout(carry_1)
);
FullAdder_1 FA3(
	.A(A[2]),
	.B(B[2]),
	.D(D),
	.Cin(carry_1),
	.Z(Z[2]),
	.Cout(Cout)
);


endmodule

module FullAdder_1(
	input A,B,D,Cin,
	output Z,Cout
);
 wire temp;
 
 assign temp = B^D ;
 assign Z = A^temp^Cin ;
 assign Cout = A&temp | temp&Cin | A&Cin ;

endmodule