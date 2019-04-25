`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:04:04 04/26/2019
// Design Name:   Booth_Mult
// Module Name:   C:/CS223_Hardware_Lab/Testing/Booth_Multiplier/Booth_Mult_test.v
// Project Name:  Booth_Multiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Booth_Mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Booth_Mult_test;

	// Inputs
	reg [3:0] x;
	reg [3:0] y;

	// Outputs
	wire [7:0] ans;

	// Instantiate the Unit Under Test (UUT)
	Booth_Mult uut (
		.x(x), 
		.y(y), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;

		// Wait 100 ns for global reset to finish
		#10 x=3; y=5;
		#10 x=8; y=2;
		
        
		// Add stimulus here

	end
      
endmodule

