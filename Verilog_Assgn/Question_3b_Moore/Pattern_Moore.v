`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:49 04/23/2019 
// Design Name: 
// Module Name:    Pattern_Moore 
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
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:49 04/23/2019 
// Design Name: 
// Module Name:    Pattern_Moore 
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
module Pattern_Moore(input in,input clk,input reset,output out);

reg [2:0] c_s, ns;
reg o_reg;

always @(posedge clk, posedge reset)
begin
 if(reset==1)
    c_s <= 3'b000;
 else
    c_s <= ns;
end

always @(c_s, in)
begin
    case (c_s)
        3'b000:
        begin
            if (in == 1'b1)
                begin
                    ns <= 3'b001;
                end

            else
                begin
                    ns <= 3'b000;
                end
        end

        3'b001:
        begin
            if (in == 1'b1)
                begin

                    ns <= 3'b001;
                end

            else
                begin
                    ns <= 3'b010;
                end
        end

        3'b010:
        begin
            if (in == 1'b1)
                begin
                    ns <= 3'b001;
                end

            else
                begin
                    ns <= 3'b011;
                end
        end

        3'b011:
        begin
            if (in == 1'b1)
                begin
                    ns <= 3'b100;
                end

            else
                begin
                    ns <= 3'b000;
                end
        end


        3'b100:
        begin
            if (in == 1'b1)
                begin
                    ns <= 3'b100;
                end

            else
                begin
                    ns <= 3'b100;
                end
        end

        default: ns <= 3'b000;
    endcase
end

assign out = o_reg;

always @(c_s)
begin
 case(c_s)
 3'b000:   o_reg <= 0;
 3'b001:   o_reg <= 0;
 3'b010:  o_reg <= 0;
 3'b011:  o_reg <= 0;
 3'b100:  o_reg <= 1;
 default:  o_reg <= 0;
 endcase
end

endmodule

