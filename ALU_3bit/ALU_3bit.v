`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:04 03/22/2019 
// Design Name: 
// Module Name:    ALU_3bit 
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
module ALU_3bit(input [1:0] sel, input [2:0]A, B, output [5:0]op);

	reg [5:0]op2;
	
	always @(*)
	begin
		op2 = 6'b000000;
		if (sel[0] == 0)
		begin
			if (sel[1] == 0)
				op2 = A & B;
		end
		
		if (sel[0] == 1)
		begin
			if (sel[1] == 0)
				op2 = A * B;
		end
		
		if (sel[0] == 0)
		begin
			if (sel[1] == 1)
				op2 = ~(A & B);
				op2[5:3] = 3'b000;
		end
		
		if (sel[0] == 1)
		begin
			if (sel[1] == 1)
				op2 = A ^ B;
		end
	
	
	end
	assign op = op2;

endmodule
