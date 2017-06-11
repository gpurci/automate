/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_modificare_iesire.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 16:47:42 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 16:47:44 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_modificare_iesire(t_mealy *mealy)
{
	t_nod			*gasit;
	t_muchie		*nucleu;
	t_muchie		*prev;
	t_muchie		*gm;

	printf("sterge_nod==========================\n");
	mealy->sterge = 0;
	if ((gasit = cautare_coord_nod(mealy->graf.nucleu, mealy->string.coord.x, mealy->string.coord.y)))
	{
		stare_modificare_nume_stare(mealy, &mealy->string, &gasit->stare);
		mealy->stare = 8;
		return ;
	}
	nucleu = mealy->graf.nucleu;
	gm = 0;
	while (nucleu)
	{
		gm = (t_muchie*)nucleu->nd->much;
		if ((gm = cautare_coord_much(gm, &prev, &nucleu->nd->coord, &mealy->string.coord)))
			break ;
		nucleu = nucleu->dr;
	}
	if (!gm)
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y, "Nu exista iesire");
		return ;
	}
	stare_modificare_nume_stare(mealy, &mealy->string, &gm->stare);
	mealy->stare = 8;
	printf("sfirsit sterge_nod++++++++++++\n");
}
