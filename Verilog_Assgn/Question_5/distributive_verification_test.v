`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:23:09 04/23/2019
// Design Name:   distributive_verification
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_5/distributive_verification_test.v
// Project Name:  Question_5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: distributive_verification
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module distributive_verification_test;

	// Inputs
	reg [3:0] in1;
	reg [3:0] in2;
	reg [3:0] in3;

	// Outputs
	wire [8:0] op1;
	wire [8:0] op2;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	distributive_verification uut (
		.in1(in1), 
		.in2(in2), 
		.in3(in3), 
		.op1(op1), 
		.op2(op2), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		in1 = 0;
		in2 = 0;
		in3 = 0;

		// Wait 100 ns for global reset to finish
		#50 in1=4'h 3;in2=4'h 3;in3=4'h 1;
		#50 in1=4'h A;in2=4'h F;in3=4'h 9;
		#50 in1=4'h F;in2=4'h 2;in3=4'h 2;
		#50 in1=4'h 2;in2=4'h 8;in3=4'h B;
        
		// Add stimulus here

	end
      
endmodule

