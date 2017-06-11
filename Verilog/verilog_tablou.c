/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilog_tablou.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 18:38:27 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/29 18:38:29 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

size_t				len_bidimensional_matrix(char **c)
{
	size_t			i;
	size_t			j;

	i = 0;
	printf("len_bidimensional_matrix\n");
	while(c[i])
		i++;
	printf("len i = %zu\n", i);
	j = i;
	i--;
	while(c[i][0] != '+')
		i--;
	printf("sf ++__ len_bidimensional_matrix i = %zu\n", i);
	return ((j - i) + j);
}

char				**verilog_tablou(char **var)
{
	char			**standart;
	t_comand		comand[16];
	t_id			id;

	if (!var)
		return (0);
	printf("verilog_tablou\n");
	if (!(standart = ft_allocDoubleChar((id.i = len_bidimensional_matrix(var) + 9))))
		return (0);
	printf("verilog_tablou id.i = %d\n", id.i);
	printf("alocare reusita __ verilog_tablou\n");
	init_comenzi_verilog(comand);
	printf("comand reusit __ verilog_tablou\n");
	id.i = 0;
	while ((standart[id.i] = verilog_txt(var[id.i], comand[id.i].init, comand[id.i].fin)) && id.i < 4)
		id.i++;
	printf("assign __ verilog_tablou\n");
	id.j = ++id.i;
	verilog_assign(standart, var, comand, &id);
	printf("always __ verilog_tablou\n");
	verilog_always(standart, var, comand, &id);
	if (!id.i)
		free(*standart);
	printf("sfirsit __ verilog_tablou\n");
	return (standart);
}
