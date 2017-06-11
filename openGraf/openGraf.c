/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openGraf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:37:24 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:06:56 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void					openGraf(t_mealy *mealy)
{
	char			*nume;
	t_muchie		*nucleu;

printf("openGraf++++++++++++++++++++++++++++++++++++++++\n");
	mealy->stare = 0;
	if (!(standartNumeFisierGraf(mealy->string.c)))
		return ;
	printf("standart SF++++++++++++++++++++++++++++++++++++++++\n");
	nume = ft_strjoin("txtGraf/", mealy->string.c);
	if (!(nucleu = readGraf(nume)))
	{
		stringGraphicsMlx(100, 100, "Error name");
		return ;
	}
	del_graf(&mealy->graf.nucleu);
	mealy->graf.nucleu = nucleu;
	printf("init graf open +++++++++++++++++++++++++++++++++++++++\n");
	printf("ft_strClrDel addres = %p\n", nume);
	ft_strClrDel(&nume);
	printf("strClrDel+++++++++++++++++++++++++++++++++++++++\n");
	clearMlx();
	graphicGraph(mealy->graf.nucleu);
}
