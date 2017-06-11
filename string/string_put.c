/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:38:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:23:54 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void			string_put(t_mealy *mealy, char key)
{
	*(mealy->string.c + mealy->string.i) = key;
	*(mealy->string.c + mealy->string.i + 1) = 0;
	set_color_txt_t_graphics_mlx(0xFFFFFF);
	clearAriaMlx(mealy->string.init.x, mealy->string.init.y, mealy->mlw.sizeX, mealy->string.init.y + 22);
	string_t_graphics_mlx(mealy->string.init.x, mealy->string.init.y, mealy->string.c);
}
