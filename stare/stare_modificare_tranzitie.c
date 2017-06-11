/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_modificare_tranzitie.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:29:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 18:29:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_modificare_tranzitie(t_mealy *mealy)
{
	t_muchie		*nucleu;
	t_muchie		*prev;
	t_muchie		*gm;

	printf("sterge_nod==========================\n");
	nucleu = mealy->graf.nucleu;
	gm = 0;
	mealy->sterge = 0;
	while (nucleu)
	{
		gm = (t_muchie*)nucleu->nd->much;
		if ((gm = cautare_coord_much(gm, &prev, &nucleu->nd->coord, &mealy->string.coord)))
			break ;
		nucleu = nucleu->dr;
	}
	if (!gm)
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y, "Nu exista tranzitie");
		return ;
	}
	stare_modificare_nume_stare(mealy, &mealy->string, &gm->nume);
	mealy->stare = 9;
	printf("sfirsit sterge_nod++++++++++++\n");
}
