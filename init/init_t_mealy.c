/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_mealy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:46:13 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:56:24 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				init_t_mealy(t_mealy *mealy)
{
	initTypeGraf(&mealy->graf);
	initTypeString(&mealy->string);
	initTypeMlx(&mealy->mlw);
	initTypeTwoDchar(&mealy->twoDchar);
	mealy->buton = 0;
	mealy->tasta = 0;
	mealy->q = 0;
	mealy->key = 0;
	mealy->buton = 0;
	mealy->sterge = 0;
	mealy->stare = 0;
	mealy->tasta = 0;
	mealy->shift = 0;
	mealy->capslock = 0;
	mealy->ctrl = 0;
}
