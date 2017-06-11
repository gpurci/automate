/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:36:17 by gpurci            #+#    #+#             */
/*   Updated: 2017/02/10 13:26:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

t_mlx_frame				*graphics;

void					init_graphic_mlx(t_mlx_frame *mlw, int x, int y, char *name)
{
	mlw->mlx = mlx_init();
	mlw->win = mlx_new_window(mlw->mlx, x, y, name);
	mlw->color = 0xFF;
	mlw->scara = 1;
	mlw->sizeX = x;
	mlw->sizeY = y;
	graphics = mlw;
	printf("init addres mlw->mlx = %p mlw->win = %p\ncolor = %d scara = %d\n",
		mlw->mlx, mlw->win, mlw->color, mlw->scara);
	printf("init addres graphics->mlx = %p graphics->win = %p\ncolor = %d scara = %d\n",
		graphics->mlx, graphics->win, graphics->color, graphics->scara);
	printf("init addres Graphics = %p\n", graphics->mlx);
}