/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_value_muchie.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 14:30:15 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 18:10:54 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_value_muchie(t_muchie *much)
{
	if (*much->nume != '-')
		ft_strClrDel(&much->nume);
	if (much->stare[1] != '-')
		ft_strClrDel(&much->stare);
	much->nd = 0;
	much->dr = 0;
}
