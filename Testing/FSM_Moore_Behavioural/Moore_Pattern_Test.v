`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:46:53 04/25/2019
// Design Name:   Moore_Pattern
// Module Name:   C:/CS223_Hardware_Lab/Testing/FSM_Moore_Behavioural/Moore_Pattern_Test.v
// Project Name:  FSM_Moore_Behavioural
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Moore_Pattern
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Moore_Pattern_Test;

	// Inputs
	reg inbit;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	Moore_Pattern uut (
		.inbit(inbit), 
		.clk(clk), 
		.ans(ans)
	);


	always begin
		#50 clk=~clk;
	end

	initial begin
		// Initialize Inputs
		inbit = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#50 inbit=0;
		#50;
		#50 inbit=1;
		#50;
		#50 inbit=0;
		#50;
		#50 inbit=1;
		#50;
		#50 inbit=0;
		#50;
		#50 inbit=0;
		#50;
		#50 inbit=1;
		#50;
		#50 inbit=1;
		#50;
      
		
		
		// Add stimulus here

	end
      
endmodule

