/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_adauga_si.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 22:13:14 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/14 22:13:16 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*transform_adauga_si(char **string)
{
	char			nou[3];
	char			vechi[2];
	int				i;

	printf("transform_adauga_si+=+++++++---------------------\n");
	nou[2] = 0;
	vechi[1] = 0;
	i = 0;
	print_id_form(*string);
	while ((*string)[i])
	{
		//printf("string = %d i = %d\n", (*string)[i], i);
		if (((*string)[i] > 7 || (*string)[i] < 0) && ((*string)[i + 1] > 3 || (*string)[i + 1] < 0))
		{
			nou[0] = (*string)[i];
			vechi[0] = 127;
			(*string)[i] = 127;
			nou[1] = 6;
			ft_strswich_string_del(string, vechi, nou);
			i++;
		}
		//printf("c = %d i = %d\n", (*string)[i], i);
		i++;
	}
	print_id_form(*string);
	printf("transform_adauga_si+++++++++++++++++++++++\n");
	return ((*string));
}
