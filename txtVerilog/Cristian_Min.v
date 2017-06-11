module Pr_Verilog (clk, res, x, y, t2, t9, t3, t4, t1, t5, t6, t7, t8);
	input clk, res, x, y;
	output t2, t9, t3, t4, t1, t5, t6, t7, t8;
	reg [4:0]D;
	wire clk, res, x, y, t2, t9, t3, t4, t1, t5, t6, t7, t8, zt, zd, zu, zo, zc, zs, zsa, zop, zn, zz, zp;
	assign zp = ~D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zz = D[0] & ~D[1] & ~D[2] & ~D[3];
	assign zn = ~D[0] & D[1] & ~D[2] & ~D[3];
	assign zop = D[0] & D[1] & ~D[2] & ~D[3];
	assign zsa = ~D[0] & ~D[1] & D[2] & ~D[3];
	assign zs = D[0] & ~D[1] & D[2] & ~D[3];
	assign zc = ~D[0] & D[1] & D[2] & ~D[3];
	assign zo = D[0] & D[1] & D[2] & ~D[3];
	assign zu = ~D[0] & ~D[1] & ~D[2] & D[3];
	assign zd = D[0] & ~D[1] & ~D[2] & D[3];
	assign zt = ~D[0] & D[1] & ~D[2] & D[3];
	assign t2 = ~x & (zt | zo | zn) | x & (zd | zu | zop | zp) | y & zn;
	assign t9 = x & zz | zs & ~x;
	assign t3 = y & zn;
	assign t4 = y & zn | x & zc;
	assign t1 = zop & (x | ~y & ~x) | y & zn | x & zsa | zo | zd;
	assign t5 = zop & ~y & ~x | x & zs;
	assign t6 = zop & ~y & ~x;
	assign t7 = y & zsa & ~x;
	assign t8 = y & zsa & ~x;
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
			D[0] = x & (zsa | zz) | ~x & (zop & ~y | y & zsa) | zn | zu | zt;
			D[1] = ~x & (zo | zu | y & zsa) | x & (zd | zp | zt | zsa | zop | zz);
			D[2] = x & (zp | zc | zs);
			D[3] = zn & (~x | y) | x & zu | zt & ~x | zo | zd;
		end
endmodule
