/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_tast_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 17:40:40 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 17:40:42 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				key_tast_function(t_mealy *mealy)
{
	int			key;

	printf("key_tast_function\n");
	key = mealy->key;
	// if (key == kVK_ANSI_W)
	// 	mealy->twoDchar.var = ft_ecuatie_create(mealy->graf.nucleu);
	// else if (key == kVK_ANSI_A)
	// 	afisareTwoDchar(mealy->twoDchar.var);
	// else if (key == kVK_ANSI_G)
	// 	stare_citire_fisier(mealy);
	// else if (key == kVK_ANSI_S)
	// 	stare_scriere_fisier(mealy);
	// else if (key == kVK_ANSI_N)
	// 	initTotal(mealy);
	// else if (key == kVK_ANSI_V)
	// 	verilog_program(mealy);
	printf("sfirsit key_tast_function key = %d\n", key);
}
