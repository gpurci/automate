/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creare_muchie.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 14:26:57 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:07:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				creare_muchie(t_mealy *mealy)
{
	void		**much;

	mealy->stare = 0;
	much = &mealy->graf.nod1->much;
	printf("creare_muchie +++++++++++++++++++\n");
	printf("nod1 = |%s| nod2 = |%s|\n", mealy->graf.nod1->nume, mealy->graf.nod2->nume);
	printf("creare_muchie ---------------------\n");
	string_stare(mealy);
	graf_back_muchie((t_muchie**)much, mealy->graf.nod2,
		mealy->string.nume, mealy->string.stare);
	//printf("creare_muchie = %s\n", (t_muchie)(*much)->nd->nume);
	printf("creare_muchie ---------------------\n");
	printf("+++++++++++++++++++++++++++++\n");
	print_graf(mealy->graf.nucleu);
	printf("+++++++++++++++++++++++++++++\n");
	init_graf(&mealy->graf);
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
}
