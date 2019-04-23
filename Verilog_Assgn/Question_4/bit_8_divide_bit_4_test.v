`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:55:09 04/23/2019
// Design Name:   bit_8_divide_bit_4
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_4/bit_8_divide_bit_4_test.v
// Project Name:  Question_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bit_8_divide_bit_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bit_8_divide_bit_4_test;

	// Inputs
	reg [7:0] dividend;
	reg [3:0] divisor;

	// Outputs
	wire [7:0] quotient;
	wire [3:0] remainder;

	// Instantiate the Unit Under Test (UUT)
	bit_8_divide_bit_4 uut (
		.dividend(dividend), 
		.divisor(divisor), 
		.quotient(quotient), 
		.remainder(remainder)
	);

	initial begin
		// Initialize Inputs
		dividend = 8'h FF;
		divisor = 4'h 1;

		// Wait 100 ns for global reset to finish
		#50 dividend = 8'hFF; divisor = 4'h4; 
		#50 dividend = 8'hFD; divisor = 4'h6; 
		#50 dividend = 8'h3F; divisor = 4'h8; 
		#50 dividend = 8'hA5; divisor = 4'h2; 
		#50 dividend = 8'h67; divisor = 4'h3; 
        
		// Add stimulus here

	end
      
endmodule

