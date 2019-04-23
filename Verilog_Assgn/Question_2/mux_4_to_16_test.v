`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:20:30 04/23/2019
// Design Name:   mux_4_to_16
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_2/mux_4_to_16_test.v
// Project Name:  Question_2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_4_to_16
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_4_to_16_test;

	// Inputs
	reg [15:0] inp;
	reg [3:0] sel;

	// Outputs
	wire fin;

	// Instantiate the Unit Under Test (UUT)
	mux_4_to_16 uut (
		.inp(inp), 
		.sel(sel), 
		.fin(fin)
	);

	initial begin
		// Initialize Inputs
		inp = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#50 inp=16'h789A; sel=4'hA;
		#50 inp=16'h789A; sel=4'h1;
		#50 inp=16'h789A; sel=4'h3;
		#50 inp=16'h789A; sel=4'h9;
		#50 inp=16'h789A; sel=4'h5;
		#50 inp=16'h789A; sel=4'hC;

		#50 inp=16'h5392; sel=4'hA;
		#50 inp=16'h5392; sel=4'h1;
		#50 inp=16'h5392; sel=4'h3;
		#50 inp=16'h5392; sel=4'h9;
		#50 inp=16'h5392; sel=4'h5;
		#50 inp=16'h5392; sel=4'hC;
        
		// Add stimulus here

	end
      
endmodule

