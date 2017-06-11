/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_one_much_name.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 14:14:53 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 14:14:55 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_one_much_name(void **much, char *nume)
{
	t_muchie			*prev;
	t_muchie			*del;

	if (!(del = cautare_much_name(*much, &prev, nume)))
		return ;
	if (!prev)
		*much = del->dr;
	else
		prev->dr = del->dr;
	del_value_muchie(del);
	free(del);
}
