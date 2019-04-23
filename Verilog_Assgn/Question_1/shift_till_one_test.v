`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:58:33 04/23/2019
// Design Name:   shift_till_one
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_1/shift_till_one_test.v
// Project Name:  Question_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift_till_one
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shift_till_one_test;

	// Inputs
	reg [7:0] dat;

	// Outputs
	wire [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	shift_till_one uut (
		.dat(dat), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		dat = 0;

		// Wait 100 ns for global reset to finish
		#60 dat=8'h 05;
		#60 dat=8'h 0A;
		#60 dat=8'h 10;
		#60 dat=8'h 16;
		#60 dat=8'h 20;
		#60 dat=8'h 40;
		#60 dat=8'h 45;
		// Add stimulus here

	end
      
endmodule

