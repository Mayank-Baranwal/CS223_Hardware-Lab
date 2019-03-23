`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:09 02/15/2019
// Design Name:   sixteen_bit_CLA
// Module Name:   C:/CS223_Hardware_Lab/CLA/CLA_16bit_Test.v
// Project Name:  CLA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sixteen_bit_CLA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CLA_16bit_Test;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg Cin;

	// Outputs
	wire [15:0] Z;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	sixteen_bit_CLA uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Z(Z), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 16'b0101010111011111; 	B = 16'b0101010111011111; Cin = 0;
		#60 A = 16'b1111111111111111; 	B = 16'b1111111111111111; Cin = 0;
		#60 A = 16'b0100010110110101; 	B = 16'b1010010101111111; Cin = 0;
		#60 A = 16'b1111110011011111; 	B = 16'b0101010111011111; Cin = 0;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

