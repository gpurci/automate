/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautare_nod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 14:19:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 14:19:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

t_muchie				*cautare_nod(void *much, t_muchie **find, char *nume)
{
	t_muchie			*beg;

	beg = (t_muchie*)much;
	*find = 0;
	if (!beg)
		return (0);
	if (!ft_strcmp(beg->nd->nume, nume))
	{
		*find = beg;
		return (0);
	}
	while (beg->dr)
	{
		if (!ft_strcmp(beg->nd->nume, nume))
		{
			*find = beg->dr;
			return (beg);
		}
		beg = beg->dr;
	}
	return (0);
}
