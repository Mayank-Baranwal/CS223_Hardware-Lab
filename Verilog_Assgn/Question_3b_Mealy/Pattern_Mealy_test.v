`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:10:47 04/23/2019
// Design Name:   Pattern_Mealy
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_3b_Mealy/Pattern_Mealy_test.v
// Project Name:  Question_3b_Mealy
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Pattern_Mealy
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pattern_Mealy_test;

	// Inputs
	reg inp;
	reg clk;

	// Outputs
	wire ans;

	// Instantiate the Unit Under Test (UUT)
	Pattern_Mealy uut (
		.inp(inp), 
		.clk(clk), 
		.ans(ans)
	);
	
	
	
	always begin 
		#10 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		inp = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10 inp=1;
		#10;
		#10 inp=0;
		#10;
		#10 inp=1;
		#10;
		#10 inp=0;
		#10;
		#10 inp=0;
		#10;
		#10 inp=1;
		#10;
		#10 inp=1;
		#10;
		
        
		// Add stimulus here

	end
      
endmodule

