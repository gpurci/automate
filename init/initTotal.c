/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initTotal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 00:54:53 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/27 00:54:55 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				initTotal(t_mealy *mealy)
{
	printf("exit\n");
	del_graf(&mealy->graf.nucleu);
	printf("exit\n");
	init_graf(&mealy->graf);
	clearMlx();
}
