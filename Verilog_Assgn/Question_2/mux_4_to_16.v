`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:08:37 04/23/2019 
// Design Name: 
// Module Name:    mux_4_to_16 
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
module mux_2_to_4(input [3:0] inp, input [1:0] sel, output ans);
	assign ans = inp[sel];
endmodule

module mux_4_to_16(input [15:0] inp, input [3:0] sel, output fin);
	wire [3:0] ans;
	mux_2_to_4 o1(inp[3:0], sel[1:0], ans[0]);
	mux_2_to_4 o2(inp[7:4], sel[1:0], ans[1]);
	mux_2_to_4 o3(inp[11:8], sel[1:0], ans[2]);
	mux_2_to_4 o4(inp[15:12], sel[1:0], ans[3]);
	mux_2_to_4 ofin(ans[3:0], sel[3:2], fin);

endmodule

