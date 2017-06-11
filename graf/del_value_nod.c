/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_value_nod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 13:47:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 18:10:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_value_nod(t_nod *nd)
{
	if (nd->stare[1] != '-')
		ft_strClrDel(&nd->stare);
	if (*nd->nume != '-')
		ft_strClrDel(&nd->nume);
	nd->id = 0;
	nd->coord.x = 0;
	nd->coord.y = 0;
	nd->much = 0;
}
