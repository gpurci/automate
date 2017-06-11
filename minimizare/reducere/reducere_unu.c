/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_unu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:18:20 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/15 13:18:21 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_unu(char **reducere)
{
	char			*c;

	c = *reducere;
	while (*c)
	{
		if (*c == 4)
			ft_strClrDel(reducere);
		c++;
	}
}
