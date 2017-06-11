module Pr_Verilog (clk, res, x, y, t1, t2, t3);
	input clk, res, x, y;
	output t1, t2, t3;
	reg [3:0]D;
	wire clk, res, x, y, t1, t2, t3, z4, z3, z2, z1, z0;
	assign z0 = ~D[0] & ~D[1] & ~D[2];
	assign z1 = D[0] & ~D[1] & ~D[2];
	assign z2 = ~D[0] & D[1] & ~D[2];
	assign z3 = D[0] & D[1] & ~D[2];
	assign z4 = ~D[0] & ~D[1] & D[2];
	assign t1 = z0 & x | z1 & x | z2 & x | z4 & x | z4 & y;
	assign t2 = z0 & ~x | z1 & x | z2 & x;
	assign t3 = z0 & ~x | z3 & x | z4 & x;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
			D[2] = 0;
		end
		else if (clk)
		begin
			D[0] = z0 & x | z4 & ~x | z0 & ~x | z2 & x;
			D[1] = z1 & x | z4 & y | z0 & ~x | z2 & x;
			D[2] = z3 & x;
		end
endmodule
