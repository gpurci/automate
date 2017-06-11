/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitGraph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 16:05:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:34:27 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				exitGraph(t_mealy *mealy)
{
	printf("exit\n");
	del_graf(&mealy->graf.nucleu);
	printf("exit var addres = %p\n", mealy->twoDchar.var);
	ft_delDoubleChar(&mealy->twoDchar.var);
	printf("exit\n");
	printf("exit standart addres = %p\n", mealy->twoDchar.standart);
	ft_delDoubleChar(&mealy->twoDchar.standart);
	printf("exit\n");
	exit(0);
}
