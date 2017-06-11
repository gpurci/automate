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
	assign t2 = ~x & (zt | zo | zn) | x & (zd | zop | zp);
	assign t9 = x & zz | zs & ~x;
	assign t1 = ~x & (zo | zop & ~y) | x & (zd | zsa | zop);
	assign t5 = zop & ~y & ~x | x & zs;
	assign t6 = zop & ~y & ~x;
	assign t7 = y & zsa & ~x;
	assign t8 = y & zsa & ~x;
	assign t4 = x & zc;
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
			D[0] = ~x & (zo | zop & ~y | y & zsa) | x & (zd | zt | zsa | zn | zz);
			D[1] = x & (zp | zt | zsa | zop | zz) | y & zsa & ~x;
			D[2] = x & (zp | zc | zs);
			D[3] = ~x & (zo | zt | zn) | x & zd;
		end
endmodule
