`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:40:51 04/26/2019
// Design Name:   D_FF
// Module Name:   C:/CS223_Hardware_Lab/Testing/D_Flip_Flop/D_FF_test.v
// Project Name:  D_Flip_Flop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: D_FF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module D_FF_test;

	// Inputs
	reg data;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	D_FF uut (
		.data(data), 
		.clk(clk), 
		.ans(ans)
	);

	always begin
		#25 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		data = 0;
		clk = 1;

		// Wait 100 ns for global reset to finish
		#50 data=0;
		#50 data=1;
		#50 data=1;
		#50 data=0;
		#50 data=0;
		#50 data=1;
		#50 data=0;
		
        
		// Add stimulus here

	end
      
endmodule

