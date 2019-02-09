`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:23 02/08/2019 
// Design Name: 
// Module Name:    Test1 
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
module Test1(D,CLK,Q);

input D, CLK;

output Q;

reg Q;

always @ (D or CLK)

if(CLK)

Q = D;

endmodule
