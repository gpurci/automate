/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sterge_graf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 19:07:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 19:07:23 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				sterge_graf(t_mealy *mealy)
{
	printf("sterge_graf++++++++++++\n");
	mealy->sterge = 0;
	del_graf(&mealy->graf.nucleu);
	init_graf(&mealy->graf);
	clearMlx();
	printf("sfirsit sterge_graf++++++++++++\n");
}
