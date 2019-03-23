`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:03:36 03/22/2019
// Design Name:   Booth_Mul
// Module Name:   C:/CS223_Hardware_Lab/Booth_Multiplier/Booth_Test.v
// Project Name:  Booth_Multiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Booth_Mul
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Booth_Test;

	// Inputs
	reg [3:0] P;
	reg [3:0] M;

	// Outputs
	wire [6:0] op;

	// Instantiate the Unit Under Test (UUT)
	Booth_Mul uut (
		.P(P), 
		.M(M), 
		.op(op)
	);

	initial begin
		// Initialize Inputs
		P = 0;
		M = 0;
		#30 P=4'b1110; M=4'b0101;
		#30 P=4'b0110; M=4'b0111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

