/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nume.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 20:44:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:32:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				string_nume(t_mealy *mealy)
{
	mealy->string.nume = ((mealy->string.i > 0) ? ft_strdup(mealy->string.c) : "-");
	stringGraphicsMlx(100, 200, "Nume stare");
	mealy->stare++;
}
