/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bezierNou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 01:12:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/05 01:12:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void					bezierNou(int xo, int yo, int xv, int yv, int xu, int yu)
{
	int					x;
	int					y;
	double				t;
	double				k;

	mlx_pixel_put(graphics->mlx, graphics->win, xo, yo, graphics->color);
	printf("xo = %d yo = %d xv = %d yv = %d xu = %d yu = %d\n", xo, yo, xv, yv, xu, yu);
	// circle(xo, yo, 5);
	// circle(xu, yu, 5);
	// circle(xv, yv, 5);
	k = 1.0 / (3 * distanta_doua_puncte(xo, yo, xu, yu));
	t = 0;
	while (t < 1)
	{
		x = (1 - t) * ((1 - t) * xo + t * xv) + t * ((1 - t) * xv + t * xu);
		y = (1 - t) * ((1 - t) * yo + t * yv) + t * ((1 - t) * yv + t * yu);
		mlx_pixel_put(graphics->mlx, graphics->win, x, y, graphics->color);
		t += k;
	}
}
