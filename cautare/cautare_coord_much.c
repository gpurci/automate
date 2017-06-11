/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautare_coord_much->c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 20:25:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 20:25:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

t_muchie				*cautare_coord_much(t_muchie *much, t_muchie **prev,
	t_coordonate *init, t_coordonate *coord)
{
	t_coord			final;
	int				s;
	double			angle;
	int				x;
	int				y;

	*prev = 0;
	while (much)
	{
		final.x = much->nd->coord.x;
		final.y = much->nd->coord.y;
		angle = angle_point(init->x, init->y, final.x, final.y,
				(s = distanta_doua_puncte(init->x, init->y, final.x, final.y)));
		x = init->x + (s / 3) * cos(angle);
		y = init->y + (s / 3) * sin(angle);
		if (x - 10 < coord->x && y - 10 < coord->y && x + 40 > coord->x && y + 40 > coord->y)
		{
			printf("cautare_coord_much nume nod = $%s$ nume much = $%s$\n", much->nd->nume, much->nume);
			return (much);
		}
		*prev = much;
		much = much->dr;
	}
	return (0);
}
