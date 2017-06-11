module Pr_Verilog (clk, res, x, y, t1, t2, t4, t5, t9, t7, t8, t6, t3);
	input clk, res, x, y;
	output t1, t2, t4, t5, t9, t7, t8, t6, t3;
	reg [4:0]D;
	wire clk, res, x, y, t1, t2, t4, t5, t9, t7, t8, t6, t3, zp, zz, zn, zop, zsa, zs, zc, zo, zu, zd, zt;
	assign zt = ~D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zd = D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zu = ~D[0] & D[1] & ~D[2] & ~D[3];
	assign zo = D[0] & D[1] & ~D[2] & ~D[3];
	assign zc = ~D[0] & ~D[1] & D[2] & ~D[3];
	assign zs = D[0] & ~D[1] & D[2] & ~D[3];
	assign zsa = ~D[0] & D[1] & D[2] & ~D[3];
	assign zop = D[0] & D[1] & D[2] & ~D[3];
	assign zn = ~D[0] & ~D[1] & ~D[2] & D[3];
	assign zz = D[0] & ~D[1] & ~D[2] & D[3];
	assign zp = ~D[0] & D[1] & ~D[2] & D[3];
	assign t1 = zd & ~x | zd & x | zd & x | zo & ~x | zo & x | zc & ~x | zsa & x | zop | zop & x | zop & ~x & ~y | zn & y;
	assign t2 = zt & ~x | zd & x | zu & x | zo & ~x | zc & ~x | zop & ~x & ~y | zop | zop & x | zn & ~x | zn & y | zp & x;
	assign t4 = zc & x | zop | zn & y;
	assign t5 = zs & x | zop & ~x & ~y;
	assign t9 = zs & ~x | zop & ~x & ~y | zz & x;
	assign t7 = zsa & ~x & y;
	assign t8 = zsa & ~x & y;
	assign t6 = zop & ~x & ~y;
	assign t3 = zn & y;
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
			D[0] = zt & ~x | zu & x | zop & ~x & ~y | zn & ~x | zt & x | zu & ~x | zsa & ~x & y | zop | zz & x | zc & x | zsa & x | zop & ~x & ~y | zn & x;
			D[1] = zd & ~x | zo & x | zc & ~x | zn & y | zt & x | zu & ~x | zsa & ~x & y | zop | zz & x | zs & x | zsa & x | zd & x | zs & ~x;
			D[2] = zp & x | zc & x | zs & x | zsa & x;
			D[3] = zop & x | zop & ~x & ~y | zn & x | zd & x | zs & ~x;
		end
endmodule
