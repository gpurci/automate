/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_scriere_verilog_program.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 14:32:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/28 14:32:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_scriere_verilog_program(t_mealy *mealy)
{
	printf("stare_scriere_verilog_program\n");
	stringGraphicsMlx(100, 100, "Nume fisier .v");
	mealy->stare = 7;
	printf("sfirsit stare_scriere_verilog_program\n");
}
