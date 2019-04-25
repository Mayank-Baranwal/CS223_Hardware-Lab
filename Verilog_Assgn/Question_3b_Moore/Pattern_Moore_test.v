`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:40:01 04/23/2019
// Design Name:   Pattern_Moore
// Module Name:   C:/CS223_Hardware_Lab/Verilog_Assgn/Question_3b_Moore/Pattern_Moore_test.v
// Project Name:  Question_3b_Moore
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Pattern_Moore
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Pattern_Moore_test;
    reg bin;
    reg clkk;
    reg reset2;
    wire bout;

    Pattern_Moore sequence_instance(.in(bin), .out(bout), .clk(clkk), .reset(reset2));

    initial
    begin
        clkk = 1;
        reset2 = 1;
        #10 reset2 = 0;
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
        #10;
    end

    always
        #10 clkk = ~clkk;


endmodule


