module Pr_Verilog (clk, res, x, t1, t2);
	input clk, res, x;
	output t1, t2;
	reg [3:0]D;
	wire clk, res, x, t1, t2, zp, zo, zu, zd, zt;
	assign zt = ~D[0] & ~D[1] & ~D[2];
	assign zd = D[0] & ~D[1] & ~D[2];
	assign zu = ~D[0] & D[1] & ~D[2];
	assign zo = D[0] & D[1] & ~D[2];
	assign zp = ~D[0] & ~D[1] & D[2];
	assign t1 = zd & ~x | zd & x | zo & ~x | zo & x | zo & x | zp & x;
	assign t2 = zt & ~x | zd & x | zu & x | zo & ~x;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
			D[2] = 0;
		end
		else if (clk)
		begin
			D[0] = zt & ~x | zu & x | zt & x | zu & ~x;
			D[1] = zd & ~x | zo & x | zp & x | zt & x | zu & ~x;
			D[2] = zo & x;
		end
endmodule
