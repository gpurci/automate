/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilog_program.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 14:00:40 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/28 14:00:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				verilog_program(t_mealy *mealy)//////afiseaza prigramul in terminal
{
	mealy->twoDchar.var = ft_ecuatie_create(mealy->graf.nucleu);
	mealy->twoDchar.standart = verilog_tablou(mealy->twoDchar.var);
	printf("Verilog program+++++++++++++++++++++++++++++++++++++++++++++\n");
	afisareTwoDchar(mealy->twoDchar.standart);
	printf("sfirsit Verilog program+++++++++++++++++++++++++++++++++++++++++++++\n");
}
