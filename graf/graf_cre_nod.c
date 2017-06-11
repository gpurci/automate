/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graf_cre_nod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:06:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 16:06:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

t_nod				*graf_cre_nod(t_coordonate *coord, char *nume, char *stare, char id)
{
	t_nod			*nod;

	if (!(nod = (t_nod*)malloc(sizeof(t_nod))))
		return (0);
	nod->id = id;
	nod->nume = nume;
	nod->stare = stare;
	nod->coord.x = coord->x;
	nod->coord.y = coord->y;
	nod->much = 0;
	return (nod);
}
