/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_comand_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 17:20:34 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 17:20:38 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_comand_line(t_mealy *mealy)
{
	printf("stare_comand_line\n");
	stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Nume comenzi");
	mealy->stare = 8;
	printf("sfirsit stare_comand_line\n");
}
