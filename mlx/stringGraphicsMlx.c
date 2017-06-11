/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringGraphicsMlx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:55:52 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:04:02 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"				

void				stringGraphicsMlx(int x, int y, char *txt)
{
	int				i;

	i = 0;
	while (txt[i])
	{
		i++;
	}
	i = i * 10 + x + 10;
	#ifdef MAC
	#endif
	#ifdef LINUX
	//printf("stringGraphicsMlx y = %d\\\\\\\\\n", y);
	//y += 35;
	//printf("stringGraphicsMlx y = %d\\\\\\\\\n", y);
	#endif
	clearAriaMlx(x, y, i, y + 22);
	string_t_graphics_mlx(x, y, txt);
}
