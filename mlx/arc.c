/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:36:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/10 13:26:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void			arc(int xo, int yo, int r, long double init, long double arc)
{
	int			x;
	int			y;
	int			len;
	int			i = 0;

	len = round(PI * r * arc / 180) + 1;
	init = init * PI / 180;
	arc = 1.0 / (long double)(r);
	while (i < len)
	{
		x = xo + r * cos(init);
		y = yo + r * sin(init);
		init += arc;
		mlx_pixel_put(graphics->mlx, graphics->win, x, y, graphics->color);
		i++;
	}
}