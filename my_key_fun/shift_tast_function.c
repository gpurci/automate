/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_tast_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 17:38:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 17:38:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				shift_tast_function(t_mealy *mealy)
{
	int			key;

	printf("shift_tast_function\n");
	key = mealy->key;
	// if (key == kVK_ANSI_S)
	// 	mealy->key = 1;
	// else if (key == kVK_ANSI_V)
	// 	stare_scriere_verilog_program(mealy);
	// else if (key == kVK_ANSI_I)
	// 	verilog_program(mealy);
	// else if (key == kVK_ANSI_T)
	// 	verilog_program(mealy);
	// else if (key == kVK_ANSI_N)
	// 	verilog_program(mealy);
	printf("sfirsit shift_tast_function key = %d\n", key);
}
