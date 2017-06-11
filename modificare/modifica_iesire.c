/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifica_iesire.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 16:29:59 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 16:30:01 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				modifica_iesire(t_mealy *mealy)
{
	char			**iesire;

printf("modifica_iesire======================\n");
	iesire = (char**)mealy->q;
	printf("modifica_iesire======================$%s$\n", *iesire);
	//printf("modifica_iesire======================$%s$\n", *iesire[1]);
	if ((*iesire)[1] != '-')
		ft_strClrDel(iesire);
	printf("modifica_iesire======================$%s$\n", *iesire);
	*iesire = ((mealy->string.i > 1) ?
		(*mealy->string.c != '/' ? ft_strjoin("/", mealy->string.c) : ft_strdup(mealy->string.c)) : "/-");
	mealy->stare = 0;
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
	printf("sfirsit modifica_iesire++++++++++++\n");
}
