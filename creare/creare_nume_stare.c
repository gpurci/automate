/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creare_nume_stare.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:11:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:32:21 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				creare_nume_stare(t_mealy *mealy)
{
	t_button_func	stare[11];

	init_stare_function_graf(stare);
	stare[mealy->stare - 1].f(mealy);
	mealy->string.i = 0;
}
