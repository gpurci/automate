/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_graphics.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 14:33:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 14:33:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void				set_color_t_graphics_mlx(int color)
{
	graphics->color = color;
}

void				set_scale_t_graphics_mlx(int scara)
{
	graphics->scara = scara;
}

void				set_color_txt_t_graphics_mlx(int color)
{
	graphics->color_txt = color;
}

void				set_standart_graphics_mlx()
{
	graphics->color_txt = 0xFFFFFF;
	graphics->color = 0xFFFFFF;
	graphics->scara = 0;
}

void				set_TxtColorScale_graphics_mlx(int txt, int color,
	int scara)
{
	graphics->color_txt = txt;
	graphics->color = color;
	graphics->scara = scara;
}
