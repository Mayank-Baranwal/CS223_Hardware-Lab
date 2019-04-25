`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:31:11 04/26/2019 
// Design Name: 
// Module Name:    Booth_Mult 
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
module Booth_Mult(input signed[3:0]x, input signed[3:0]y, output signed[7:0]ans);

	reg signed [8:0]op;
	
	always @(x,y)
	begin
		op[0] = 0;
		op[4:1] = y;
		op[8:5] = 0;
		repeat(4)
		begin
			if (op[1:0] == 1)
				op[8:5] = op[8:5] + x;
			else if (op[1:0] == 2)
				op[8:5] = op[8:5] - x;
			op = op >>> 1;
		end
		if (x == 4'd8)
			op[8:1] = -op[8:1];
	end
	
	assign ans = op[8:1];

endmodule
