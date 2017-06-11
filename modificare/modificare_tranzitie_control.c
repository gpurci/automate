/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modificare_tranzitie_control.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:00:41 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 17:00:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				modificare_tranzitie_control(t_mealy *mealy)
{
	char			**iesire;

	iesire = (char**)mealy->q;
	if (**iesire != '-')
		ft_strClrDel(iesire);
	*iesire = ((mealy->string.i > 0) ? ft_strdup(mealy->string.c) : "-");
	mealy->stare = 0;
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
}
