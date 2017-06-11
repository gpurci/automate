module Pr_Verilog (clk, res, x, t1, t2);
	input clk, res, x;
	output t1, t2;
	reg [2:0]D;
	wire clk, res, x, t1, t2, zt, zd, zu, zo;
	assign zo = ~D[0] & ~D[1];
	assign zu = D[0] & ~D[1];
	assign zd = ~D[0] & D[1];
	assign zt = D[0] & D[1];
	assign t1 = zo | zd;
	assign t2 = ~x & (zt | zo) | x & (zd | zu);
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
		end
		else if (clk)
		begin
			D[0] = zo | zd;
			D[1] = x & (zd | zu) | ~x & (zo | zt);
		end
endmodule
