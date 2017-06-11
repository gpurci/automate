/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getGraphicMlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 17:07:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 17:07:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

int				getColorGraphicsMlx(void)
{
	return (graphics->color);
}

int				getScaleGraphicsMlx(void)
{
	return (graphics->scara);
}

int				getColorTxtGraphicsMlx(void)
{
	return (graphics->color_txt);
}

int				*getTxtColorScaleGraphicsMlx(int *i)
{
	i[0] = graphics->color_txt;
	i[1] = graphics->color;
	i[2] = graphics->scara;
	return (i);
}
