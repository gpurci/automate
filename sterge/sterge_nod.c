/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sterge_nod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 18:36:22 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 18:36:33 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				sterge_nod(t_mealy *mealy)
{
	t_nod			*del;

	printf("sterge_nod==========================\n");
	mealy->sterge = 0;
	if (!(del = cautare_coord_nod(mealy->graf.nucleu, mealy->string.coord.x, mealy->string.coord.y)))
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Nu exista nod");
		return ;
	}
	printf("sterge nod nume = $%s$ id = %d\n", del->nume, del->id);
	del_nod_id(&mealy->graf.nucleu, del->id);
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
	printf("sfirsit sterge_nod++++++++++++\n");
}
