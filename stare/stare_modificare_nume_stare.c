/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stare_modificare_nume_stare.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:13:02 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 18:13:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				stare_modificare_nume_stare(t_mealy *mealy, t_string *string, char **nume)
{
	clearAriaMlx(string->init.x, string->init.y, mealy->mlw.sizeX, string->init.y + 22);
	string_t_graphics_mlx(string->init.x, string->init.y, *nume);
	ft_strcpy(string->c, *nume);
	string->i = ft_strlen(*nume);
	mealy->q = (void**)&(*nume);
}
