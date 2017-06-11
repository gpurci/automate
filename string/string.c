/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:51:58 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 20:25:16 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void			string(t_mealy *mealy, int key)
{
	printf("STRing = %d shift = %d\n", key, mealy->shift);
	key = ascii_caracter(mealy->shift, key);
	printf("STRing = %d shift = %d\n", key, mealy->shift);
	if (key == 10 || mealy->string.i < 0 || mealy->string.i > 48)
	{
		clearMlx();
		graphicGraph(mealy->graf.nucleu);
		creare_nume_stare(mealy);
		return ;
	}
	if (key == 8)
		string_bakspace(mealy, &key);
	string_put(mealy, key);
	if (key != 0)
		mealy->string.i++;
}
