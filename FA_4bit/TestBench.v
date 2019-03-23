`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:40:51 02/08/2019
// Design Name:   Practice_1
// Module Name:   C:/CS223_Hardware_Lab/FA_4bit/TestBench.v
// Project Name:  FA_4bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Practice_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestBench;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Cin;

	// Outputs
	wire [3:0] Z;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	four_bit_adder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Z(Z), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0000; B=4'b0000; Cin = 0;
		#60 A = 4'b0000; B=4'b0000; Cin = 0;
		#60 A = 4'b1000; B=4'b0111; Cin = 0;
		#60 A = 4'b1000; B=4'b0111; Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

