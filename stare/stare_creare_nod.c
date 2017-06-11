/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_creare_nod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:44:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:29:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_creare_nod(t_mealy *mealy)
{
	printf("stare_creare_nod\n");
	stringGraphicsMlx(100, 100, "Nume nod");
	mealy->stare = 1;
	printf("sfirsit stare_creare_nod\n");
}
