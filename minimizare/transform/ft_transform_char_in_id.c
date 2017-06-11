/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_char_in_id.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 19:24:43 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 19:24:45 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ft_transform_char_in_id(char **ecuatie, char *id)
{
	int				i;
	int				k;
	char			c;

	if (**ecuatie > -1)
		return (id);
	c = **ecuatie;
	i = ft_strlen(id);
	k = ((i / 10) + 1) * 10;
	while (**ecuatie > -1)
	{
		if (c != **ecuatie)
		{
			id[i] = c & 0x7F;
			i++;
			if (i == k)
			{
				id = ft_realloc_str(&id, k);
				k = ((i / 10) + 1) * 10;
			}
			c = **ecuatie;
		}
		(*ecuatie)++;
	}
	id[i] = 0;
	return (id);
}
