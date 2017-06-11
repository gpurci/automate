/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comenzi_cautare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 18:23:12 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 18:23:13 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int					comenzi_cautare(char *comand)
{
	char			*nume[CL];
	int 			k;

	k = 1;
	init_Comand_name(nume);
	printf("comenzi_cautare\n");
	while (k < CL)
	{
		if (!ft_strcmp(nume[k], comand))
			return (k);
		k++;
	}
	return (0);
	printf("sfirsit comenzi_cautare\n");
}
