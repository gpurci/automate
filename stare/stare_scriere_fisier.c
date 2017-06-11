/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_scriere_fisier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:41:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:11:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_scriere_fisier(t_mealy *mealy)
{
	printf("stare_scriere_fisier\n");
	stringGraphicsMlx(100, 100, "Nume fisier .ig");
	mealy->stare = 6;
	printf("sfirsit stare_scriere_fisier\n");
}
