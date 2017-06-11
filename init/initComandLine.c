/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initComandLine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 18:01:33 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 18:01:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				initComandLine(t_button_func *comand)
{
	comand[0].f = &sterge_graf;
	// comand[1].f = &salveaza;
	// comand[2].f = &deschide;
	// comand[3].f = &deplaseaza;
	// comand[4].f = &modifica;
	// comand[5].f = &nou;
}
