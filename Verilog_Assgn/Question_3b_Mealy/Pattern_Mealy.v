`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:01:11 04/23/2019 
// Design Name: 
// Module Name:    Pattern_Mealy 
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
module Pattern_Mealy(
	input inp,
   input clk,
   output ans
   );

	reg [2:0] state;
	reg out_reg;

	initial
		 begin
			  state = 3'b000;
		 end

	always @(posedge clk)
	begin
		 //$display("Chirag : ", state, " : " , in_bit);
		 case (state)
			  3'b000:
			  begin
					if (inp == 1'b1)
						 begin
							  state = 3'b001;
							  out_reg = 0;
						 end

					else
						 begin
							  state = 3'b000;
							  out_reg = 0;
						 end
			  end

			  3'b001:
			  begin
					if (inp == 1'b1)
						 begin

							  state = 3'b001;
							  out_reg = 0;
						 end

					else
						 begin
							  state = 3'b010;
							  out_reg = 0;
						 end
			  end

			  3'b010:
			  begin
					if (inp == 1'b1)
						 begin
							  state = 3'b001;
							  out_reg = 0;
						 end

					else
						 begin
							  state = 3'b011;
							  out_reg = 0;
						 end
			  end

			  3'b011:
			  begin
					if (inp == 1'b1)
						 begin
							  state = 3'b100;
							  out_reg = 1;
						 end

					else
						 begin
							  state = 3'b000;
							  out_reg = 0;
						 end
			  end


			  3'b100:
			  begin
					if (inp == 1'b1)
						 begin
							  state = 3'b100;
							  out_reg = 1;
						 end

					else
						 begin
							  state = 3'b100;
							  out_reg = 1;
						 end
			  end

		 endcase
	end

	assign ans = out_reg;

endmodule

