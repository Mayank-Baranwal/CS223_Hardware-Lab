`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:15:25 03/22/2019 
// Design Name: 
// Module Name:    Booth_Mul 
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
module Booth_Mul(input [3:0]P, M, output [6:0]op);
	//reg [3:0]A;
	
	reg [5:0]B;	
	reg [6:0]op2;
	reg [2:0]Q;
	reg Q_1;
	
	//assign Q[4:1] = P;
	always @(P,M) begin
		op2 = 7'b0000000;
		Q = P[2:0];
		Q_1 = 0;
		B = 6'b000000;
		B[2:0] = M[2:0];

		repeat(3) begin
			if (Q[0] == 0)
			begin 
				if (Q_1 == 1)
					//op = 8'b00110011;
					op2[5:0] = op2[5:0] + B;
			end
			
			if (Q[0] == 1)
			begin 
				if (Q_1 == 0)
					//op = 8'b00110011;
					op2[5:0] = op2[5:0] - B;
			end
			B = B << 1;
			Q_1 = Q[0];
			Q = Q >> 1;
		end
		
		if (P[3] == 0)
		begin
			if (M[3] == 1)
				op2[6] = 1;
		end
		
		if (P[3] == 1)
		begin
			if (M[3] == 0)
				op2[6] = 1;
		end
	end
	
	assign op = op2;
	
	

endmodule
