/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arc_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:48:54 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 20:43:49 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

void				arc_coord(int xo, int yo, int xu, int yu)
{
	int				s;
	int				r;
	int				x;
	int				y;
	double			alfa;
	double			beta;
	int				h;

	if (!(s = distanta_doua_puncte(xo, yo, xu, yu)))
		return ;
	h = s / 6;
	r = (h / 2) + (double)((s * s) / (8 * h));
	alfa = angle_point(xo, yo, xu, yu, s);
	x = xo + (double)(s / 2) * cos(alfa);
	y = yo + (double)(s / 2) * sin(alfa);
	x = x + (r - h) * cos(alfa + radian(90));
	y = y + (r - h) * sin(alfa + radian(90));
	beta = grade(angle_point(x, y, xu, yu, r));
	alfa = grade(angle_point(x, y, xo, yo, r));
	beta = beta < alfa ? beta + 360.0 - alfa : beta - alfa;
	arc(x, y, r, (int)(alfa), (int)(beta + 0.6));
}
