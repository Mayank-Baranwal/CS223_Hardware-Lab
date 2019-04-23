`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:30:19 04/23/2019 
// Design Name: 
// Module Name:    bit_8_divide_bit_4 
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
module bit_8_divide_bit_4(input signed [7:0] dividend, input signed [3:0] divisor, output signed [7:0] quotient, output [3:0] remainder);
	
	reg signed [7:0] ans;
	reg [3:0] rem;
	reg [7:0] temp;
	reg signed [7:0] divd;
	reg signed [7:0] divd_help;
	reg signed [3:0] divs;
	reg [1:0] neg;

	always @(dividend or divisor)
	begin
		temp=0;
		ans=0;
		
		divd[7:0] = dividend[7:0];
		divs[3:0] = divisor[3:0];
		neg[1] = divd[7];
		neg[0] = divs[3];
		
		if(divd[7] == 1)
			divd = -divd;
		if(divs[3] == 1)
			divs = -divs;
			
		divd_help=divd;

		repeat(8)
		begin
			ans=ans<<1;
			temp[0] = divd[7];
			divd = divd<<1;
			if(divs[3:0]<=temp[7:0])
			begin
				temp[7:0]=temp[7:0]-divs[3:0];
				ans[0]=1;
			end
			else
			begin
				ans[0]=0;
			end
			temp=temp<<1;
		end
		rem[3:0] = divd_help[7:0]-(ans[7:0]*divs[3:0]);
		
		if(!(rem==0))
		begin
			case (neg)
				1: ans = -ans;  
				2: begin
					ans=(ans+1); 
					ans=-ans; 
					rem[3:0]=divs[3:0]-rem[3:0]; 
					end 
				3: begin 
					ans=ans+1; 
					rem[3:0]=divs[3:0]-rem[3:0]; 
					end
			endcase
		end
		else
		begin
			case (neg)
				1: ans = -ans;  
				2: ans= -ans;
			endcase
		end
	end
	assign quotient=ans;
	assign remainder=rem;

endmodule
