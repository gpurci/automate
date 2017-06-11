module Pr_Verilog (clk, res, , t1, t2);
	input clk, res, , t1, t2;
	output t1, t2;
	reg [2:0]D;
	wire clk, res, , t1, t2, zo, zu, zd, zt;
	assign zt = ~D[0] & ~D[1];
	assign zd = D[0] & ~D[1];
	assign zu = ~D[0] & D[1];
	assign zo = D[0] & D[1];
	assign t1 = zd & ~x | zd & x | zo & ~x | zo & x;
	assign t2 = zt & ~x | zd & x | zu & x | zo & ~x;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
		end
		else if (clk)
		begin
			D[0] = zt & ~x | zu & x | zt & x | zu & ~x;
			D[1] = zd & ~x | zo & x | zt & x | zu & ~x;
		end
endmodule
