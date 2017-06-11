module Pr_Verilog (clk, res, x, t1, t2);
	input clk, res, x;
	output t1, t2;
	reg [2:0]D;
	wire clk, res, x, t1, t2, zt, zd, zu, zo;
	assign zo = ~D[0] & ~D[1];
	assign zu = D[0] & ~D[1];
	assign zd = ~D[0] & D[1];
	assign zt = D[0] & D[1];
	assign t1 = zo & x | zo & ~x | zd & x | zd & ~x;
	assign t2 = zo & ~x | zu & x | zd & x | zt & ~x;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
		end
		else if (clk)
		begin
			D[0] = zo & x | zd & ~x | zo & ~x | zd & x;
			D[1] = zu & x | zt & ~x | zo & ~x | zd & x;
		end
endmodule
