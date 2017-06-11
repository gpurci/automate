/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_pres.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:51:20 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 16:51:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int				mouse_pres(int k, int x, int y, void *q)
{
	t_mealy		*mealy;

	mealy = (t_mealy*)q;
	printf("pres addres Q = |%p| pres =%d x = %d y = %d\n", q, k, x, y);
	printf("mouse_pres x = %d y = %d pres = %d\n", x, y, k);
	char		button;
	#ifdef MAC
	button = 2;
	#endif
	#ifdef LINUX
	button = 3;
	#endif
	if (k == button)
	{
		mealy->buton = 0;
		mealy->graf.nod1 = 0;
	}
	printf("SF_PRES\n");
	return (0);
}
