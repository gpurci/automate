/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comandLine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 17:32:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 17:32:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void					comandLine(t_mealy *mealy)
{
	printf("comandLine\n");
	//comenzi_cautare(char *comand);
	barMlx(0, mealy->mlw.sizeY - 100, mealy->mlw.sizeX, mealy->mlw.sizeY - 90, 0xFFFFFF);
	stringGraphicsMlx(100, 100, "comand line");
	printf("sfirsit comandLine\n");
}
