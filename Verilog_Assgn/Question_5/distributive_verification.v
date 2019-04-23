`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:04:15 04/23/2019 
// Design Name: 
// Module Name:    distributive_verification 
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

module Booth4_4(input signed [3:0] X,input signed [3:0] Y,output signed [7:0] Ztemp);

	reg signed [7:0] Z;
	reg Y_1 ;
	integer i;

	always @ (X,Y)
	begin
		Z = 0;
		Y_1 = 0;
		for(i=0; i<4;i=i+1 )
		begin
			if(Y[i] == 0 && Y_1 == 1)
				Z[7:4] = Z[7:4] + X[3:0];
			else if(Y[i] == 1 && Y_1 == 0)
				Z[7:4] = Z[7:4] - X[3:0];
			Z=Z>>>1;
			Y_1=Y[i];
		end
		if (X == 4'd8)
			Z = - Z;
	end
	assign Ztemp=Z;

endmodule

module Booth5_4(input signed [4:0] X,input signed [3:0] Y,output signed [8:0] Ztemp);

	reg signed [8:0] Z;
	reg Y_1 ;
	integer i;


	always @ (X,Y)
	begin
		Z = 0;
		Y_1 = 0;
		for(i=0; i<4;i=i+1 )
		begin
			if(Y[i] == 0 && Y_1 == 1)
				Z[8:4] = Z[8:4] + X[4:0];
			else if(Y[i] == 1 && Y_1 == 0)
				Z[8:4] = Z[8:4] - X[4:0];
			Z=Z>>>1;
			Y_1=Y[i];
		end
		if (X == 5'd16)
			Z = - Z;	 
	end
	assign Ztemp=Z;

endmodule


module distributive_verification(input signed [3:0] in1,input signed [3:0] in2,input signed [3:0] in3,output signed [8:0] op1,output signed [8:0] op2,output Z);


// op1 = (in1+in2)*in3
wire signed [4:0] temp;
assign temp= in1+in2;
Booth5_4 b1(temp,in3,op1);

//op2 = in1*in3 + in2*in3
wire signed [7:0] temp1,temp2;
Booth4_4 b2(in1,in3,temp1);
Booth4_4 b3(in2,in3,temp2);
assign op2 = temp1+temp2;

assign Z = (op1==op2)?1'b0:1'b1;

endmodule


