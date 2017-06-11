/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cautareIesireInDoubleChar.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 13:59:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 17:10:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int					ft_cautareIesireInDoubleChar(char **ecuatii, char *find,
	int len)
{
	int				i;

	i = 0;
	printf("cautare find = |%s| len = %d\n", find, len);
	while (i < len)
	{
		printf("cautare ecuatii[i = %d] = |%s|\n", i, &ecuatii[i][2]);
		if (!(ft_memcmp(&ecuatii[i][2], find, ft_strlen_var(find, ','))))
			return (i);
		i++;
	}
	return (0);
}
