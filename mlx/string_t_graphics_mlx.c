/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_t_graphics_mlx.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:57:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 15:57:10 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void				string_t_graphics_mlx(int x, int y, char *txt)
{
	mlx_string_put(graphics->mlx, graphics->win, x, y, graphics->color_txt, txt);
}
