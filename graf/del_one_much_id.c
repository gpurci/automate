/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_one_much_id.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 20:57:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 20:57:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_one_much_id(void **much, char id)
{
	t_muchie			*prev;
	t_muchie			*del;

	if (!(del = cautare_nod_id(*much, &prev, id)))
		return ;
	if (!prev)
		*much = del->dr;
	else
		prev->dr = del->dr;
	del_one_much(&del);
}
