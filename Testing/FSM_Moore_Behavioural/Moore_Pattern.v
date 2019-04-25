`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:20 04/25/2019 
// Design Name: 
// Module Name:    Moore_Pattern 
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
module Moore_Pattern(input inbit, input clk, output ans);

	reg [2:0] state;
	reg outbit;
	reg num;
	
	initial
	begin
		state = 0;
	end

	always @(posedge clk)
	begin
		num = inbit;
		if (num == 0)
		begin
			case(state)
				0: state=0;
				1: state=2;
				2: state=3;
				3: state=0;
				4: state=4;			
			endcase
		end
		else
		begin
			case(state)
				0: state=1;
				1: state=1;
				2: state=1;
				3: state=4;
				4: state=4;			
			endcase
		end
		case(state)
			0: outbit=0;
			1: outbit=0;
			2: outbit=0;
			3: outbit=0;
			4: outbit=1;
		endcase 
	end
	
	assign ans = outbit;


endmodule
