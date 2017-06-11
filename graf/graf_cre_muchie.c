/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graf_cre_muchie.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 16:13:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 16:13:53 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

t_muchie			*graf_cre_muchie(t_nod *nod, char *nume, char *stare)
{
	t_muchie		*much;

	if (!(much = (t_muchie*)malloc(sizeof(t_muchie))))
		return (0);
	much->dr = 0;
	much->nume = nume;
	much->stare = stare;
	much->nd = nod;
	return (much);
}
