/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pres.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 20:37:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/28 20:37:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int				key_pres(int k, void *q)
{
	t_mealy		*mealy;

	mealy = (t_mealy*)q;
	printf("pres addres Q = |%p| pres =%d ctrl = %d\n", q, k, mealy->ctrl);
	mealy->key = k;
	key_tast_special(mealy, k, k);
	if (mealy->ctrl)
		ctrl_tast_function(mealy);
	printf("SF_PRES\n");
	return (0);
}
