/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_muchie.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 04:41:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 04:41:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				swap_muchie(t_muchie *much1, t_muchie *much2)
{
	t_muchie		much;

	much.dr = much1->dr;
	much.nd = much1->nd;
	much.nume = much1->nume;
	much.stare = much1->stare;
	much1->dr = much2->dr;
	much1->nd = much2->nd;
	much1->nume = much2->nume;
	much1->stare = much2->stare;
	much2->dr = much.dr;
	much2->nd = much.nd;
	much2->nume = much.nume;
	much2->stare = much.stare;
}
