/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:45:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 20:07:58 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				ft_strisdigit(char *nbr)
{
	if (!nbr)
		return (0);
	while (*nbr)
	{
		if (!ft_isdigit(*nbr))
			return (0);
		nbr++;
	}
	return (1);
}

int					main(int ac, char **av)
{
	t_mealy			mealy;

	if (ac != 3 && ac != 1)
		return (0);
	if (ac == 3)
	{
		if (!ft_strisdigit(av[1]) || !ft_strisdigit(av[2]))
		{
			mealy.mlw.sizeX = 1000;
			mealy.mlw.sizeY = 1000;
		}
		else
		{
			mealy.mlw.sizeX = ft_atoi(av[1]);
			mealy.mlw.sizeY = ft_atoi(av[2]);
		}
	}
	else if (ac == 1)
	{
		mealy.mlw.sizeX = 1000;
		mealy.mlw.sizeY = 1000;
	}
	printf("inceput main\n");
	init_t_mealy(&mealy);
	init_graphic_mlx(&mealy.mlw, mealy.mlw.sizeX, mealy.mlw.sizeY, "gpurci");
	mealy.string.init.x = 100;
	mealy.string.init.y = mealy.mlw.sizeY - 80;
	set_standart_graphics_mlx();
	mlx_hook(mealy.mlw.win, KEY_PRESS, KEY_PRESS_MASK, &key_pres, &mealy);
	mlx_hook(mealy.mlw.win, MOUSE_PRESS, MOUSE_PRESS_MASK, &mouse_pres, &mealy);
	mlx_hook(mealy.mlw.win, MOTION_NOTIFY, PTR_MOTION, &mouse_motion, &mealy);
	mlx_key_hook(mealy.mlw.win, &my_key_fun, &mealy);
	mlx_mouse_hook(mealy.mlw.win, &my_mouse_fun, &mealy);
	//mlx_loop_hook(mealy.mlw.mlx, &my_loop_hook_fun, &mealy);
	mlx_loop(mealy.mlw.mlx);
	printf("sfirsit main\n");
	return (0);
}
