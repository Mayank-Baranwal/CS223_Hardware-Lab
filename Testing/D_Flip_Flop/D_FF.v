`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:31:48 04/26/2019 
// Design Name: 
// Module Name:    D_FF 
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
module D_FF(input data, input clk, output ans);

	reg ans;
	reg op;

	always @(posedge clk)
	begin
		op<=data;
		ans <=op;
	end
	//assign ans=op;
endmodule
