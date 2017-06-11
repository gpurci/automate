module Pr_Verilog (clk, res, x, y, t2, t9, t3, t4, t1);
	input clk, res, x, y;
	output t2, t9, t3, t4, t1;
	reg [4:0]D;
	wire clk, res, x, y, t2, t9, t3, t4, t1, zt, zd, zu, zo, zc, zs, zn, zz, zp;
	assign zp = ~D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zz = D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zn = ~D[0] & D[1] & ~D[2] & ~D[3];
	assign zs = D[0] & D[1] & ~D[2] & ~D[3];
	assign zc = ~D[0] & ~D[1] & D[2] & ~D[3];
	assign zo = D[0] & ~D[1] & D[2] & ~D[3];
	assign zu = ~D[0] & D[1] & D[2] & ~D[3];
	assign zd = D[0] & D[1] & D[2] & ~D[3];
	assign zt = ~D[0] & ~D[1] & ~D[2] & D[3];
	assign t2 = zp & x | zn & y | zn & ~x | zo & ~x | zu & x | zd & x | zt & ~x;
	assign t9 = zz & x | zs & ~x;
	assign t3 = zn & y;
	assign t4 = zn & y | zc & x;
	assign t1 = zn & y | zo & x | zo & ~x | zd & x | zd & x | zd & ~x;
	always @ (posedge res or posedge clk)
		if (res)
		begin
			D[0] = 0;
			D[1] = 0;
			D[2] = 0;
			D[3] = 0;
		end
		else if (clk)
		begin
			D[0] = zn & x | zc & x | zz & x | zu & ~x | zt & x | zn & ~x | zu & x | zt & ~x;
			D[1] = zc & x | zn & y | zo & x | zd & ~x | zn & ~x | zu & x | zt & ~x;
			D[2] = zp & x | zz & x | zu & ~x | zt & x | zn & y | zo & x | zd & ~x | zn & ~x | zu & x | zt & ~x;
			D[3] = zo & ~x | zd & x;
		end
endmodule
