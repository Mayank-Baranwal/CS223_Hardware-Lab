`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:21:01 02/08/2019
// Design Name:   CLA
// Module Name:   C:/CS223_Hardware_Lab/CLA/TestBench_CLA.v
// Project Name:  CLA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CLA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestBench_CLA;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Cin;

	// Outputs
	wire [4:0] C;
	wire [3:0] S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	CLA uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.C(C), 
		.S(S),
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0000; B = 4'b0000; Cin = 0;
		#60 A = 4'b1111; B = 4'b0100; Cin = 0;
		#60 A = 4'b0010; B = 4'b1000; Cin = 0;		
		#60 A = 4'b0111; B = 4'b0110; Cin = 1;
		#60 A = 4'b1110; B = 4'b0110; Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

