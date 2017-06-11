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
	assign t2 = ~x & (zt | zo | zn) | x & (zd | zu | zp) | y & zn;
	assign t9 = x & zz | zs & ~x;
	assign t3 = y & zn;
	assign t4 = y & zn | x & zc;
	assign t1 = y & zn | zo | zd;
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
			D[0] = x & (zz | zc) | zn | zu | zt;
			D[1] = ~x & (zt | zn | zd) | x & (zu | zo | zc) | y & zn;
			D[2] = zn & (~x | y) | x & (zo | zz | zp) | zd & ~x | zu | zt;
			D[3] = zo & ~x | x & zd;
		end
endmodule
