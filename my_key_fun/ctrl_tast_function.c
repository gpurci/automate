/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_tast_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 17:37:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 17:37:59 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				ctrl_tast_function(t_mealy *mealy)
{
	int			key;

	printf("ctrl_tast_function==================================\n");
	key = mealy->key;
	printf("key = %d\n", key);
	if (key == kVK_ANSI_N)
		mealy->sterge = 1;
	else if (key == kVK_ANSI_M)
		mealy->sterge = 2;
	else if (key == kVK_ANSI_I)
		mealy->sterge = 3;
	else if (key == kVK_ANSI_T)
		mealy->sterge = 4;
	else if (key == kVK_ANSI_Z)
		mealy->sterge = 5;
	else if (key == kVK_ANSI_A)
		afisareTwoDchar(mealy->twoDchar.var);/////////////Ajutor nerezolvat
	else if (key == kVK_ANSI_S)
		stare_scriere_fisier(mealy);
	else if (key == kVK_ANSI_V)
		stare_scriere_verilog_program(mealy);
	else if (key == kVK_ANSI_D)
		sterge_graf(mealy);
	else if (key == kVK_ANSI_G)
		stare_citire_fisier(mealy);
	else if (key == kVK_ANSI_O)
		stare_minimizare(mealy);
	else if (key == kVK_ANSI_V)//////////////schimbari
		stare_scriere_verilog_program(mealy);
	else if (key == kVK_ANSI_V)
		stare_scriere_verilog_program(mealy);
	else if (key == kVK_ANSI_V)
		stare_scriere_verilog_program(mealy);
	printf("sfirsit ctrl_tast_function++++++++++++++++++++++++++++++++++++++++++\n");
}
