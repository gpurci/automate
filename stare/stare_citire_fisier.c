/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_citire_fisier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:41:41 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:11:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_citire_fisier(t_mealy *mealy)
{
	printf("stare_citire_fisier\n");
	stringGraphicsMlx(100, 100, "Nume fisier *.ig");
	mealy->stare = 5;
	printf("sfirsit stare_citire_fisier\n");
}
