/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mousePres_stare.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:45:14 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/21 15:45:16 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				init_mousePres_stare(t_button_func *stare)
{
	stare[0].f = &stare_zero_graf;
	stare[1].f = &stare_creare_nod;
	stare[2].f = &stare_creare_muchie;
	stare[3].f = &stare_comand_line;
}
