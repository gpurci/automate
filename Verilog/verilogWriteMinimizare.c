/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilogWriteMinimizare.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 02:30:49 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 02:30:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				verilogWriteMinimizare(t_mealy *mealy)
{
	char			*line;
	int				fd;

	mealy->stare = 0;
	printf("verilogWrite+++++++++++++++++++++++++++++++++++++++++\n");
	mealy->twoDchar.var = ft_ecuatie_create(mealy->graf.nucleu);
	if (!mealy->twoDchar.var)
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Nu exista graf");
	printf("VAR++++++++++++++++++++++++++++++++++++++\n");
	afisareTwoDchar(mealy->twoDchar.var);
	printf("____________________________________________\n");
	mealy->twoDchar.standart = verilog_tablou(mealy->twoDchar.var);
	printf("STANDART++++++++++++++++++++++++++++++++++++++\n");
	afisareTwoDchar(mealy->twoDchar.standart);
	printf("____________________________________________\n");
	line = ft_str_three_concat("txtVerilog/", mealy->string.c, ".v");
	fd = open(line, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);
	ft_strClrDel(&line);
	printf("line = $%s$ fd = %d\n", line, fd);
	if (fd == -1)
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Eroare la creare fisier");
		return ;
	}
	printf("fisier disponibil\n");
	ft_putstrDoubleChar_fd(mealy->twoDchar.standart, fd);
	printf("stergere informatie\n");
	ft_delDoubleChar(&mealy->twoDchar.standart);
	//------------------------------
	line = ft_str_three_concat("txtVerilog/", mealy->string.c, "_Min.v");
	fd = open(line, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);
	printf("line = $%s$ fd = %d\n", line, fd);
	ft_strClrDel(&line);
	if (fd == -1)
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Eroare la creare fisier");
		return ;
	}
	minimizare(&mealy->twoDchar.var[2]);
	mealy->twoDchar.standart = verilog_tablou(mealy->twoDchar.var);
	ft_putstrDoubleChar_fd(mealy->twoDchar.standart, fd);
	ft_delDoubleChar(&mealy->twoDchar.standart);
	ft_delDoubleChar(&mealy->twoDchar.var);
	// clearMlx();
	// graphicGraph(mealy->graf.nucleu);
	close(fd);
}
