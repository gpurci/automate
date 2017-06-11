module Pr_Verilog (clk, res, xu, xo, xd, ta, tb, tc, td);
	input clk, res, xu, xo, xd;
	output ta, tb, tc, td;
	reg [2:0]D;
	wire clk, res, xu, xo, xd, ta, tb, tc, td, zd, zo, zu;
	assign zu = ~D[0] & ~D[1];
	assign zo = D[0] & ~D[1];
	assign zd = ~D[0] & D[1];
	assign ta = zu & xu | zu & xu | zo & xo | zd & xd;
	assign tb = zu & xu | zu & xu | zo & xo | zd & xd;
	assign tc = zu & xu | zd & xd;
	assign td = zd & xd;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
		end
		else if (clk)
		begin
			D[0] = zu & xu;
			D[1] = zo & xo;
		end
endmodule
