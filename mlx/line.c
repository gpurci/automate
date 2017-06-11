/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:36:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/10 13:26:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void				line(int xo, int yo, int xu, int yu)
{
	int v[6];
	int color;

	v[0] = abs(xu - xo);
	v[1] = xo < xu ? 1 : -1;
	v[2] = abs(yu - yo);
	v[3] = yo < yu ? 1 : -1;
	v[4] = (v[0] > v[2] ? v[0] : -v[2]) / 2;
	color = graphics->color;
	while (1)
	{
		mlx_pixel_put(graphics->mlx, graphics->win, xo, yo, graphics->color);
		color += graphics->scara;
		v[5] = v[4];
		if ((xo == xu) && (yo == yu))
			break ;
		if (v[5] > -v[0])
		{
			v[4] -= v[2];
			xo += v[1];
		}
		if (v[5] < v[2])
		{
			v[4] += v[0];
			yo += v[3];
		}
	}
}
