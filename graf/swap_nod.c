/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_nod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 04:47:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 04:47:26 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				swap_nod(t_nod *nod1, t_nod *nod2)
{
	t_nod			nod;

	nod.coord.x = nod1->coord.x;
	nod.coord.y = nod1->coord.y;
	nod.id = nod1->id;
	nod.nume = nod1->nume;
	nod.stare = nod1->stare;
	nod.much = nod1->much;
	nod1->coord.x = nod2->coord.x;
	nod1->coord.y = nod2->coord.y;
	nod1->id = nod2->id;
	nod1->nume = nod2->nume;
	nod1->stare = nod2->stare;
	nod1->much = nod2->much;
	nod2->coord.x = nod.coord.x;
	nod2->coord.y = nod.coord.y;
	nod2->id = nod.id;
	nod2->nume = nod.nume;
	nod2->stare = nod.stare;
	nod2->much = nod.much;
}
