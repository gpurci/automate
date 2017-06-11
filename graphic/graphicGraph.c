/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphicGraph.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:39:09 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 20:48:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				graphicGraph(t_muchie *nucleu)
{
	t_muchie		*much;
	t_coord			init;
	t_coord			final;
	t_coord			coord;
	int				s;
	double			angle;

	set_standart_graphics_mlx();
	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		init.x = nucleu->nd->coord.x;
		init.y = nucleu->nd->coord.y;
		circle(init.x, init.y, 25);
		circle(init.x, init.y, 26);
		#ifdef MAC
		string_t_graphics_mlx(init.x - 18, init.y - 20, nucleu->nd->nume);
		string_t_graphics_mlx(init.x - 18, init.y - 5, nucleu->nd->stare);
		#endif
		#ifdef LINUX
		string_t_graphics_mlx(init.x - 18, init.y, nucleu->nd->nume);
		string_t_graphics_mlx(init.x - 18, init.y + 15, nucleu->nd->stare);
		#endif
		while (much)
		{
			final.x = much->nd->coord.x;
			final.y = much->nd->coord.y;
			if (much->nd->id != nucleu->nd->id)
			{
				curb_coord(init.x, init.y, final.x, final.y, 110);
				set_color_txt_t_graphics_mlx(0xFF0000);
				angle = angle_point(init.x, init.y, final.x, final.y,
					(s = distanta_doua_puncte(init.x, init.y, final.x, final.y)));
				coord.x = init.x + (s / 3) * cos(angle);
				coord.y = init.y + (s / 3) * sin(angle);
				string_t_graphics_mlx(coord.x, coord.y, much->nume);
				string_t_graphics_mlx(coord.x, coord.y + 13, much->stare);
				set_color_txt_t_graphics_mlx(0xFFFFFF);
			}
			else
			{
				curb_one_point(init.x, init.y, 110);
				set_color_txt_t_graphics_mlx(0xFF0000);
				coord.x = init.x + 65 * cos(radian(270));
				coord.y = init.y + 65 * sin(radian(270));
				string_t_graphics_mlx(coord.x, coord.y, much->nume);
				string_t_graphics_mlx(coord.x, coord.y + 13, much->stare);
				set_color_txt_t_graphics_mlx(0xFFFFFF);
			}
			much = much->dr;
		}
		nucleu = nucleu->dr;
	}
}
