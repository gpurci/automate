/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_modificare_control.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:39:54 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 18:39:55 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_modificare_control(t_mealy *mealy)
{
	t_nod			*gasit;

	mealy->sterge = 0;
	printf("stare_modificare_control==========================\n");
	if (!(gasit = cautare_coord_nod(mealy->graf.nucleu, mealy->string.coord.x, mealy->string.coord.y)))
	{
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y, "Nu exista nod");
		return ;
	}
	stare_modificare_nume_stare(mealy, &mealy->string, &gasit->nume);
	mealy->stare = 9;
	printf("sfirsit stare_modificare_control++++++++++++\n");
}
