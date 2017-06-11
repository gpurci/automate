/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_muchie.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 14:06:52 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 14:06:54 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_muchie(t_muchie **much)
{
	t_muchie			*tmp;

	while (*much)
	{
		tmp = (*much)->dr;
		del_value_muchie(*much);
		free(*much);
		*much = tmp;
	}
}
