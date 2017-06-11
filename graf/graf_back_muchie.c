/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graf_back_muchie.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:38:12 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/02 21:38:14 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				graf_back_muchie(t_muchie **much, t_nod *nod, char *nume, char *stare)
{
	t_muchie		*beg;

	if ((beg = graf_cre_muchie(nod, nume, stare)))
	{
		beg->dr = *much;
		*much = beg;
	}
}
