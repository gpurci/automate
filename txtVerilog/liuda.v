module Pr_Verilog (clk, res, x, y, t2, t9, t1, t5, t6, t7, t8, t4);
	input clk, res, x, y;
	output t2, t9, t1, t5, t6, t7, t8, t4;
	reg [4:0]D;
	wire clk, res, x, y, t2, t9, t1, t5, t6, t7, t8, t4, zt, zd, zo, zc, zs, zsa, zop, zn, zz, zp;
	assign zp = ~D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zz = D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zn = ~D[0] & D[1] & ~D[2] & ~D[3];
	assign zop = D[0] & D[1] & ~D[2] & ~D[3];
	assign zsa = ~D[0] & ~D[1] & D[2] & ~D[3];
	assign zs = D[0] & ~D[1] & D[2] & ~D[3];
	assign zc = ~D[0] & D[1] & D[2] & ~D[3];
	assign zo = D[0] & D[1] & D[2] & ~D[3];
	assign zd = ~D[0] & ~D[1] & ~D[2] & D[3];
	assign zt = D[0] & ~D[1] & ~D[2] & D[3];
	assign t2 = zp & x | zn & ~x | zop & x | zo & ~x | zd & x | zt & ~x;
	assign t9 = zz & x | zs & ~x;
	assign t1 = zop & ~x & ~y | zop & x | zsa & x | zo & ~x | zd & x | zd & x;
	assign t5 = zop & ~x & ~y | zs & x;
	assign t6 = zop & ~x & ~y;
	assign t7 = zsa & ~x & y;
	assign t8 = zsa & ~x & y;
	assign t4 = zc & x;
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
			D[0] = zn & x | zop & ~x & ~y | zz & x | zsa & ~x & y | zsa & x | zt & x | zo & ~x | zd & x;
			D[1] = zop & x | zz & x | zsa & ~x & y | zsa & x | zt & x | zp & x;
			D[2] = zs & x | zc & x | zp & x;
			D[3] = zn & ~x | zt & ~x | zo & ~x | zd & x;
		end
endmodule
