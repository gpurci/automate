/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_key_fun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:03:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:50:39 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int				my_key_fun(int key, void *q)
{
	t_mealy		*mealy;
	char		c[2];

	mealy = (t_mealy*)q;
	printf("Key_fun\n");
	printf("key = %d stare = %d\n", key, mealy->stare);
	printf("tasta = %d shift = %d ctrl = %d stare = %d\n", mealy->tasta, mealy->shift, mealy->ctrl, mealy->stare);
	mealy->key = key;
	mealy->buton = ascii_caracter(mealy->tasta, key);
	if (!key_tast_special(mealy, key, 0))
		return (0);
	printf("tasta = %d\n", mealy->tasta);
	printf("key = %d stare = %d\n", key, mealy->stare);
	if (key == kVK_Escape)
		exitGraph(mealy);
	else if (mealy->stare > 0)
		string(mealy, key);
	else if (mealy->shift)
		shift_tast_function(mealy);
	
	#ifdef LINUX
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
	else if (key == kVK_ANSI_V)//////////////schimbari
		stare_scriere_verilog_program(mealy);
	else if (key == kVK_ANSI_V)
		stare_scriere_verilog_program(mealy);
	else if (key == kVK_ANSI_V)
		stare_scriere_verilog_program(mealy);
	#endif
	c[0] = mealy->buton;
	printf("keyy key = %c value = %d\n", c[0], c[0]);
	c[1] = 0;
	//stringGraphicsMlx(500, 200, c);
	printf("sfirsit my_key_fun\n");
	return (0);
}
