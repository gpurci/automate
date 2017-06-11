/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautare_much_name.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 19:42:16 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 19:42:18 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

t_muchie				*cautare_much_name(void *much, t_muchie **prev, char *nume)
{
	t_muchie			*beg;

	beg = (t_muchie*)much;
	*prev = 0;
	if (!beg)
		return (0);
	while (beg)
	{
		if (!ft_strcmp(beg->nd->nume, nume))
			return (beg);
		*prev = beg;
		beg = beg->dr;
	}
	return (0);
}
