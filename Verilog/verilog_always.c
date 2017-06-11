/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilog_always.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 20:01:30 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/30 20:01:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				verilog_endmodule(char **standart, char **var, t_comand *comand, t_id *id)
{
	id->i++;
	id->j++;
	while (var[id->k])
	{
		if (!(standart[id->i] = verilog_txt(var[id->k], comand[id->j].init, comand[id->j].fin)))
		{
			id->i = 0;
			return ;
		}
		id->i++;
		id->k++;
	}
	id->j++;
	if (!(standart[id->i] = verilog_txt("", comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return ;
	}
	id->i++;
	id->j++;
	if (!(standart[id->i] = verilog_txt("", comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return ;
	}
}

char				verilog_init_always(char **standart, t_comand *comand, t_id *id)
{
	char			*c;

	c = "";
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return (0);
	}
	id->i++;
	id->j++;
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return (0);
	}
	id->i++;
	id->j++;
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return (0);
	}
	id->i++;
	id->j++;
	return (1);
}

char				verilog_date_always(char **standart, char **var, t_comand *comand, t_id *id)
{
	int				i;
	char			*c;

	i = id->k;
	while (var[i])
	{
		c = ft_strsub(var[i], 0, ft_strlen_var(var[i], '='));
		if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
		{
			id->i = 0;
			return (0);
		}
		ft_str_clear_and_delete(c);
		id->i++;
		i++;
	}
	return (1);
}

void				verilog_always(char **standart, char **var, t_comand *comand, t_id *id)
{
	char			*c;

	c = "";
	if (id->i == 0)
		return ;
	id->k = id->i;
	if (!verilog_init_always(standart, comand, id))
		return ;
	if (!verilog_date_always(standart, var, comand, id))
		return ;
	id->j++;
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return ;
	}
	id->i++;
	id->j++;
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return ;
	}
	id->i++;
	id->j++;
	if (!(standart[id->i] = verilog_txt(c, comand[id->j].init, comand[id->j].fin)))
	{
		id->i = 0;
		return ;
	}
	verilog_endmodule(standart, var, comand, id);
}
