/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_motion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:57:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 16:57:35 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int				mouse_motion(int x, int y, void *q)
{
	t_mealy		*mealy;
	char		button;
	#ifdef MAC
	button = 2;
	#endif
	#ifdef LINUX
	button = 3;
	#endif
	//printf("mouse_motion x = %d y = %d\n", x, y);
	mealy = (t_mealy*)q;
	if (mealy->buton == button)
	{
		mealy->graf.nod1->coord.x = x;
		mealy->graf.nod1->coord.y = y;
		clearMlx();
		graphicGraph(mealy->graf.nucleu);
	}
	return (0);
}
