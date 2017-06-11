/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creare_nod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:20:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:07:49 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				creare_nod(t_mealy *mealy)
{
	char			id;

	mealy->stare = 0;
	string_stare(mealy);
	id = numarNod(mealy->graf.nucleu) + 1;
	graf_back_muchie(&mealy->graf.nucleu, graf_cre_nod(&mealy->string.coord,
		mealy->string.nume, mealy->string.stare, id), 0, 0);
	init_graf(&mealy->graf);
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
}
	