/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearMlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 17:37:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 17:38:00 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

extern t_mlx_frame				*graphics;

void				clearMlx(void)
{
	mlx_clear_window(graphics->mlx, graphics->win);
}
