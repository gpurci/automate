/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curb_one_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 01:52:30 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 01:52:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

void				curb_one_point(int xo, int yo, int h)
{
	int				xu;
	int				yu;
	int				y;

	//printf("xo, = %d yo, = %d xu, = %d yu, = %d h = %d\n", xo, yo, xu, yu, h);
	y = yo;
	xu = xo + 25 * cos(radian(200));
	yu = yo + 25 * sin(radian(200));
	xo = xo + 25 * cos(radian(320));
	yo = yo + 25 * sin(radian(320));
	//printf("xo, = %d yo, = %d xu, = %d yu, = %d x = %d y = %d\n", xo, yo, xu, yu, x, y);
	//circle(x, y, 5);
	circle(xu, yu, 4);
	circle(xu, yu, 5);
	bezierNou(xo, yo, xo, y - 25 - h, xu, yu);
}
