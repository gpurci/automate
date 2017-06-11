module Pr_Verilog (clk, res, x, t2, t9, t1, t5, t4);
	input clk, res, x;
	output t2, t9, t1, t5, t4;
	reg [4:0]D;
	wire clk, res, x, t2, t9, t1, t5, t4, zt, zd, zu, zo, zc, zs, zsa, zop, zn, zz, zp;
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
	assign t2 = zp & x | zop & x | zo & ~x | zu & x | zd & x | zt & ~x;
	assign t9 = zz & x;
	assign t1 = zop & x | zsa & x | zo & x | zo & ~x | zd & x | zd & x | zd & ~x;
	assign t5 = zs & x;
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
			D[0] = zn & x | zz & x | zsa & x | zu & ~x | zt & x | zu & x | zt & ~x;
			D[1] = zop & x | zz & x | zsa & x | zu & ~x | zt & x | zp & x | zo & ~x | zd & x;
			D[2] = zs & x | zc & x | zp & x;
			D[3] = zo & x | zd & ~x | zu & x | zt & ~x | zo & ~x | zd & x;
		end
endmodule
