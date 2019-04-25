`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:00:36 04/26/2019 
// Design Name: 
// Module Name:    D_Flip_Flop 
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
module J_K_Flip_Flop(input J,input K,output Q,input clk);
	
	reg op;
	reg Q;
	always @(posedge clk)
	begin
		op<=Q;
		if(J==1 && K==1)
			op<=~op;
		else if(J==1 && K==0)
			op<=1;
		else if(J==0 && K==1)
			op<=0;
		else
			op<=op;
		Q<=op;
	end

endmodule
