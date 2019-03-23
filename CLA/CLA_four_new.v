`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:29:37 02/15/2019 
// Design Name: 
// Module Name:    CLA_four_new 
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
module CLA_four_new(input [4:1]p,g, input Cin, output [4:0]C, output [3:0]S, output Cout);

	
	assign C[0] = Cin;
	assign C[1] = (p[1]&C[0]) | g[1];
	assign C[2] = (p[2]&p[1]&C[0]) | (p[2]&g[1]) | g[2];
	assign C[3] = (p[3]&p[2]&p[1]&C[0]) | (p[3]&p[2]&g[1]) | (p[3]&g[2]) | g[3];
	assign C[4] = (p[4]&p[3]&p[2]&p[1]&C[0]) | (p[4]&p[3]&p[2]&g[1]) | (p[4]&p[3]&g[2]) | (p[4]&g[3]) | g[4];
	assign Cout = C[4];
	assign S = p^C[3:0];
	
endmodule
