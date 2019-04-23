`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:35 04/23/2019 
// Design Name: 
// Module Name:    Pattern_Detector 
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



module Pattern_Detector(input inp,input clk,output out);

wire[3:0] D_w;
wire [3:0] Q_w;
wire i_n, Q_0_n, Q_1_n, Q_2_n;
wire w1, w2, w3, w4, w5, w6;

DFF F0(D_w[0], clk, Q_w[0]);
DFF F1(D_w[1], clk, Q_w[1]);
DFF F2(D_w[2], clk, Q_w[2]);

and (w1, Q_w[1], Q_w[0], inp);
or (D_w[2], Q_w[2], w1);

not (i_n, inp);
not (Q_0_n, Q_w[0]);
not (Q_1_n, Q_w[1]);
not (Q_2_n, Q_w[2]);

and (w2, Q_w[1], Q_0_n, i_n);
and (w3, Q_1_n, Q_w[0], i_n);
or (D_w[1], w2, w3);

and (w5, Q_w[1], Q_0_n);
and (w6, Q_2_n, Q_1_n, inp);
or (D_w[0], w5, w6);


and (out, Q_w[2], Q_1_n, Q_0_n);

endmodule

module DFF(input D, clk,output Q_temp);

    reg Q;

    initial 
	 begin
        Q = 1'b0;
    end

    always @(posedge clk)
    begin
        Q <= D;
    end
	 assign Q_temp=Q;

endmodule