/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_zero_graf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:46:52 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:24:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_zero_graf(t_mealy *mealy)
{
	printf("stare_zero_graf\n");
	mealy->graf.nod1 = 0;
	mealy->stare = 0;
	stare_creare_muchie(mealy);
	printf("sfirsit stare_zero_graf\n");
}
