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
module four_bit_adder(input[3:0] A,B,input Cin,output [3:0] Z,output Cout);
	 
wire carry_0;
wire carry_1;
wire carry_2;

FullAdder_1 FA1(A[0],B[0],Cin,Z[0],carry_0);
FullAdder_1 FA2(A[1],B[1],carry_0,Z[1],carry_1);
FullAdder_1 FA3(A[2],B[2],carry_1,Z[2],carry_2);
FullAdder_1 FA4(A[3],B[3],carry_2,Z[3],Cout);

endmodule

module FullAdder_1(input A,B,Cin,output Z,Cout);
 assign Z = A^B^Cin ;
 assign Cout = A&B | B&Cin | A&Cin ;
endmodule