/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curb_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 23:06:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/04 23:06:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

void				curb_coord(int xo, int yo, int xu, int yu, int h)
{
	int				s;
	int				x;
	int				y;
	double			alfa;

	if (!(s = distanta_doua_puncte(xo, yo, xu, yu)))
		return ;
	//printf("xo, = %d yo, = %d xu, = %d yu, = %d h = %d\n", xo, yo, xu, yu, h);
	alfa = angle_point(xo, yo, xu, yu, s);
	x = xo + (s * 0.99) * cos(alfa);
	y = yo + (s * 0.99) * sin(alfa);
	x = x + h * cos(alfa + radian(270));
	y = y + h * sin(alfa + radian(270));
	xo = xo + 25 * cos(alfa + radian(270));
	yo = yo + 25 * sin(alfa + radian(270));
	xu = xu + 25 * cos(alfa + radian(270));
	yu = yu + 25 * sin(alfa + radian(270));
	//printf("xo, = %d yo, = %d xu, = %d yu, = %d x = %d y = %d\n", xo, yo, xu, yu, x, y);
	//circle(x, y, 5);
	circle(xu, yu, 4);
	circle(xu, yu, 5);
	bezierNou(xo, yo, x, y, xu, yu);
}
