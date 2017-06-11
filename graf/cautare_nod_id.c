/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautare_nod_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 19:42:46 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 19:42:48 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

t_muchie				*cautare_nod_id(void *much, t_muchie **prev, char id)
{
	t_muchie			*beg;

	beg = (t_muchie*)much;
	*prev = 0;
	if (!beg)
		return (0);
	while (beg)
	{
		if (beg->nd->id == id)
			return (beg);
		*prev = beg;
		beg = beg->dr;
	}
	return (0);
}
