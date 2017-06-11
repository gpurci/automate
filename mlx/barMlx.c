/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   barMlx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 17:46:05 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 17:46:06 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void					barMlx(int xo, int yo, int xu, int yu, int color)
{
	int					x;
	int					y;

	y = yo;
	while (y < yu)
	{
		x = xo;
		while (x < xu)
		{
			mlx_pixel_put(graphics->mlx, graphics->win, x, y, color);
			x++;
		}
		y++;
	}
}
