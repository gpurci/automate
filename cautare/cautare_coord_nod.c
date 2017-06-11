/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautare_coord_nod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 18:13:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 18:13:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

t_nod				*cautare_coord_nod(t_muchie *nucleu, int x, int y)
{
	t_coordonate	*coord;

	printf("cautare_coord_nod x = %d y = %d\n", x, y);
	while (nucleu)
	{
		coord = &nucleu->nd->coord;
		printf("Coordonate noduri x = %d y = %d\n++++++++++++++++++++\n", coord->x, coord->y);
		if (coord->x - 25 < x && coord->y - 25 < y && coord->x + 25 > x && coord->y + 25 > y)
		{
			printf("nod gasit nume = $%s$\n", nucleu->nd->nume);
			return (nucleu->nd);
		}
		nucleu = nucleu->dr;
	}
	printf("sfirsit cautare_coord_nod\n");
	return (0);
}
