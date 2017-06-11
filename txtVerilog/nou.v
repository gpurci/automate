module Pr_Verilog (clk, res, x, y, Z, t4, t3, t1, t2, ta);
	input clk, res, x, y, Z;
	output t4, t3, t1, t2, ta;
	reg [3:0]D;
	wire clk, res, x, y, Z, t4, t3, t1, t2, ta, zo, z1, z2, z4, z3;
	assign z3 = ~D[0] & ~D[1] & ~D[2];
	assign z4 = D[0] & ~D[1] & ~D[2];
	assign z2 = ~D[0] & D[1] & ~D[2];
	assign z1 = D[0] & D[1] & ~D[2];
	assign zo = ~D[0] & ~D[1] & D[2];
	assign t4 = z4 & x & ~y | z2 & x | z1 & x & y | zo & x & Z | zo & x & y;
	assign t3 = z4 & x & ~y | z1 & x & y | zo & ~x | zo & x;
	assign t1 = z4 & ~x | z2 & x;
	assign t2 = zo & ~x | zo & x;
	assign ta = zo & x & y;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
			D[2] = 0;
		end
		else if (clk)
		begin
			D[0] = z2 & x | zo & x & Z | zo & x;
			D[1] = z1 & x & y | zo & ~x | zo & x;
			D[2] = z4 & ~x;
		end
endmodule
