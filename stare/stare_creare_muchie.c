/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_creare_muchie.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:54:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:04:02 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_creare_muchie(t_mealy *mealy)
{
	t_nod			*nod;

	printf("stare_creare_muchie Nucleu++++++++++++++++++++\n");
	if (!(nod = cautare_coord_nod(mealy->graf.nucleu, mealy->string.coord.x, mealy->string.coord.y)))
	{
		mealy->graf.nod1 = 0;
		printf("nu este nod\n");
		return ;
	}
	printf("adauga_stare = |%s|\n", nod->nume);
	if (mealy->graf.nod1)
	{
		printf("nod2 stare creare \n");
		mealy->graf.nod2 = nod;
		mealy->stare = 3;
		stringGraphicsMlx(100, 200, "Nume muchie");
		return ;
	}
	printf("nod1 stare creare \n");
	mealy->graf.nod1 = nod;
	printf("sfirsit stare_creare_muchie\n");
}
