`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:27:56 04/23/2019 
// Design Name: 
// Module Name:    shift_till_one 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module shift_till_one(input [7:0] dat, output [3:0] cnt);

	reg [7:0] data;
	reg [3:0] count;
	
	always @(dat)
	begin
		data=dat;
		count=0;
		while (data[0]==0 && count < 8)
		begin
			//if(data[0]==1'b1)
				//break;
			data=(data>>1);
			count=count+1;
		end
	end
	assign cnt=count;

endmodule
