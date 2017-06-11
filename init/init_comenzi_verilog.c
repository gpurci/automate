/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_comenzi_verilog.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 20:34:25 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/29 20:34:30 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				init_comenzi_verilog(t_comand *comand)
{
	comand[0].init = "module Pr_Verilog (clk, res, ";
	comand[0].fin = ");\n";
	comand[1].init = "	input clk, res, ";
	comand[1].fin = ";\n";
	comand[2].init = "	output ";
	comand[2].fin = comand[1].fin;
	comand[3].init = "	reg [";
	comand[3].fin = ":0]D;\n";
	comand[4].init = "	wire clk, res, ";
	comand[4].fin = comand[1].fin;
	comand[5].init = "	assign ";
	comand[5].fin = comand[1].fin;
	comand[6].init = "	always @ (posedge res or posedge clk)";
	comand[6].fin = "\n";
	comand[7].init = "		if (res)";
	comand[7].fin = comand[6].fin;
	comand[8].init = "		begin";
	comand[8].fin = comand[6].fin;
	comand[9].init = "			";
	comand[9].fin = "= 0;\n";
	comand[10].init = "		end";
	comand[10].fin = comand[6].fin;
	comand[11].init = "		else if (clk)";
	comand[11].fin = comand[6].fin;
	comand[12].init = comand[8].init;
	comand[12].fin = comand[6].fin;
	comand[13].init = comand[9].init;
	comand[13].fin = comand[1].fin;
	comand[14].init = comand[10].init;
	comand[14].fin = comand[6].fin;
	comand[15].init = "endmodule";
	comand[15].fin = comand[6].fin;
}
