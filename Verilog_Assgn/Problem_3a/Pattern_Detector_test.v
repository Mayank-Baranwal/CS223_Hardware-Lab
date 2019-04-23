`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:21:18 04/23/2019
// Design Name:   Pattern_Detector
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Problem_3a/Pattern_Detector_test.v
// Project Name:  Problem_3a
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Pattern_Detector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pattern_Detector_test;
    reg bin;
    reg clkk;
    wire bout;

    Pattern_Detector sequence_instance(.inp(bin), .out(bout), .clk(clkk));

    initial
    begin
        clkk = 0;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b0;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
        #10 bin = 1'b1;
        #10 ;
		  end

    always
        #10 clkk = ~clkk;


endmodule

