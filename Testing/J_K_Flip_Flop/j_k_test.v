`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:06:42 04/26/2019
// Design Name:   J_K_Flip_Flop
// Module Name:   C:/CS223_Hardware_Lab/Testing/J_K_Flip_Flop/j_k_test.v
// Project Name:  J_K_Flip_Flop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: J_K_Flip_Flop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module j_k_test;

	// Inputs
	reg J;
	reg K;
	reg clk;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	J_K_Flip_Flop uut (
		.J(J), 
		.K(K), 
		.Q(Q), 
		.clk(clk)
	);

	always begin
		#10 clk=~clk;
	end
	
	initial begin
		// Initialize Inputs
		J = 0;
		K = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10 J=1;K=0;
		#10;
		#10 J=0;K=1;
		#10;
		#10 J=1;K=1;
		#10;
		#10 J=0;K=0;
		#10;
		#10 J=1;K=0;
        #10;
		// Add stimulus here

	end
      
endmodule

