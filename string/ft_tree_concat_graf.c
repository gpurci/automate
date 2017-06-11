/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_concat_graf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 19:59:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/26 19:59:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				*ft_tree_concat_graf(char *init, char *var,
	char *fin, char no)
{
	char			*del;
	char			*find;
	
	del = init;
	if (*var != no)
	{
		find = ft_strstr(init, var);
		if (!find || *(find - 1) != ',')
		{	
			if (!(init = ft_str_three_concat(del, var, fin)))
			{
				ft_strClrDel(&del);
				return (0);
			}
			ft_strClrDel(&del);
		}
	}
	return (init);
}
