/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sterge_much.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 19:11:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 19:11:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				sterge_much(t_mealy *mealy)
{
	t_muchie		*nucleu;
	t_muchie		**much;
	t_muchie		*prev;
	t_muchie		*del;

	printf("sterge_much==========================\n");
	nucleu = mealy->graf.nucleu;
	mealy->sterge = 0;
	while (nucleu)
	{
		much = (t_muchie**)&nucleu->nd->much;
		if ((del = cautare_coord_much(*much, &prev, &nucleu->nd->coord, &mealy->string.coord)))
			break ;
		nucleu = nucleu->dr;
	}
	printf("sfirsit sterge_much++++++++++++\n");
	if (!del)
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Nu exista muchie");
		return ;
	}
	printf("sterge_much nod = $%s$ much = $%s$ destinatie = $%s$++++++++++++\n", nucleu->nd->nume, del->nume, del->nd->nume);
	if (!prev)
		*much = del->dr;
	else
		prev->dr = del->dr;
	del_one_much(&del);
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
	printf("sfirsit sterge_much++++++++++++\n");
}
