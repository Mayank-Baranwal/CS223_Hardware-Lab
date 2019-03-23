`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:22:29 02/15/2019 
// Design Name: 
// Module Name:    sixteen_bit_CLA 
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

module generate_p(input p1,p2,p3,p4, output P);
	assign P = p1&p2&p3&p4 ;
endmodule

module generate_g(input p1,p2,p3,p4,g1,g2,g3,g4, output g);
	assign g = (p4&p3&p2&g1) | (p4&p3&g2) | (p4&g3) | (g4);
endmodule

module sixteen_bit_CLA(input [15:0]A,B,input Cin, output [15:0]Z, output Cout);

wire [15:0]p,g ;
wire [3:0] P,G;
wire [4:0] C;

assign p = A^B;
assign g = A&B;

generate_p x1(p[0],p[1],p[2],p[3],P[0]);
generate_p x2(p[4],p[5],p[6],p[7],P[1]);
generate_p x3(p[8],p[9],p[10],p[11],P[2]);
generate_p x4(p[12],p[13],p[14],p[15],P[3]);

generate_g y1(p[0],p[1],p[2],p[3],g[0],g[1],g[2],g[3],G[0]);
generate_g y2(p[4],p[5],p[6],p[7],g[4],g[5],g[6],g[7],G[1]);
generate_g y3(p[8],p[9],p[10],p[11],g[8],g[9],g[10],g[11],G[2]);
generate_g y4(p[12],p[13],p[14],p[15],g[12],g[13],g[14],g[15],G[3]);

CLA_four_new z0(P,G,Cin,C,,Cout);

CLA_four_new z1(p[3:0],g[3:0],C[0],,Z[3:0],);
CLA_four_new z2(p[7:4],g[7:4],C[1],,Z[7:4],);
CLA_four_new z3(p[11:8],g[11:8],C[2],,Z[11:8],);
CLA_four_new z4(p[15:12],g[15:12],C[3],,Z[15:12],);






endmodule
