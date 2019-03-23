`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:17:40 03/22/2019
// Design Name:   ALU_3bit
// Module Name:   C:/CS223_Hardware_Lab/ALU_3bit/ALU_Test.v
// Project Name:  ALU_3bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_3bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_Test;

	// Inputs
	reg [1:0] sel;
	reg [2:0] A;
	reg [2:0] B;

	// Outputs
	wire [5:0] op;

	// Instantiate the Unit Under Test (UUT)
	ALU_3bit uut (
		.sel(sel), 
		.A(A), 
		.B(B), 
		.op(op)
	);

	initial begin
		// Initialize Inputs
		sel = 0;
		A = 3'b010;
		B = 3'b111;

		#30 sel=2'b00;
		#30 sel=2'b01;
		#30 sel=2'b10;
		#30 sel=2'b11;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

