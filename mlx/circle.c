/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:36:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/10 13:26:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void			circle(int xo, int yo, int r)
{
	int			x;
	int			y;
	long double	arc;
	int			len;
	long double	init;
	int			i = 0;

	init = 0;
	len = round(PI * r * 2) + 1;
	arc = 1.0 / (long double)(r);
	mlx_pixel_put(graphics->mlx, graphics->win, xo + r, yo, graphics->color);
	while (i < len)
	{
		x = xo + r * cos(init);
		y = yo + r * sin(init);
		init += arc;
		mlx_pixel_put(graphics->mlx, graphics->win, x, y, graphics->color);
		i++;
	}
}
