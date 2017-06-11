/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilog_assign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 19:45:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/30 19:45:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				verilog_assign(char **standart, char **var, t_comand *comand, t_id *id)
{
	if (id->i < 5)
	{
		id->i = 0;
		return ;
	}
	while (*var[id->i] == '+')
	{
		if (!(standart[id->i] = verilog_txt(var[id->i] + 2, comand[id->j].init, comand[id->j].fin)))
		{
			id->i = 0;
			return ;
		}
		id->i++;
	}
	id->j++;
}
