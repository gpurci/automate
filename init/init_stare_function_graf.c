/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stare_function_graf.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:24:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:14:12 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				init_stare_function_graf(t_button_func *stare)
{
	stare[0].f = &string_nume;
	stare[1].f = &creare_nod;
	stare[2].f = &string_nume;
	stare[3].f = &creare_muchie;
	stare[4].f = &openGraf;
	stare[5].f = &writeGraf;
	stare[6].f = &verilogWrite;
	stare[7].f = &modifica_iesire;
	stare[8].f = &modificare_tranzitie_control;
	stare[9].f = &verilogWriteMinimizare;
}
