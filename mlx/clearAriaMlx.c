/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearAriaMlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 17:40:19 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 17:40:21 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void				clearAriaMlx(int xo, int yo, int xu, int yu)
{
	int					x;
	int					y;
	
	printf("clear AREA\\\\\\\\\n");
	#ifdef MAC
	#endif
	#ifdef LINUX
	yo -= 20;
	yu -= 20;
	printf("clear AREA\\\\\\\\\n");
	#endif
	y = yo;
	while (y < yu)
	{
		x = xo;
		while (x < xu)
		{
			mlx_pixel_put(graphics->mlx, graphics->win, x, y, 0);
			x++;
		}
		y++;
	}
	
}
