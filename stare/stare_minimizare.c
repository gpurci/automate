/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_minimizare.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 02:26:00 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 02:26:02 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_minimizare(t_mealy *mealy)
{
	printf("stare_minimizare\n");
	stringGraphicsMlx(100, 100, "Nume fisier minimizat .v");
	mealy->stare = 10;
	printf("sfirsit stare_citire_fisier\n");
}
