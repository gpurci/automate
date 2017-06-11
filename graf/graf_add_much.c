/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graf_add_much.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:42:06 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/02 21:42:08 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				graf_add_much(t_muchie **much, t_nod *nod, char *nume, char *stare)
{
	if (*much)
		graf_back_muchie(much, nod, nume, stare);
	else
		*much = graf_cre_muchie(nod, nume, stare);
}
