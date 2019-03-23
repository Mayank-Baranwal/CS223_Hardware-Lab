`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:45 03/22/2019
// Design Name:   Booth_Mul
// Module Name:   C:/CS223_Hardware_Lab/Booth_Multiplier/Booth_TestBench.v
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

module Booth_TestBench;

	// Inputs
	reg [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	Booth_Mul uut (
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		Q = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

