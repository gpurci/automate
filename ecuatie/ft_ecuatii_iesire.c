/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatii_iesire.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 13:34:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:29:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				ft_ecuatii_iesire(char **ecuatii, char *intern,
	char *tranzitie, char *stare, int len)
{
	int				i;
	int				k;
	int				j;
	char 			*del;

	if (*stare == '-')
		return (1);
	i = ft_count_char(stare, ',') + 1;
	if (!(tranzitie = ft_strswich_string(ft_strdup(tranzitie), ",", " & ")))
		return (0);
	k = 0;
	while (k < i)
	{
		j = ft_cautareIesireInDoubleChar(ecuatii, stare, len);
		del = ecuatii[j];
		printf("ecuatii iesire +++++++++++ ecuatii[j] = |%s|\n", ecuatii[j]);
		if (*tranzitie == '-')
		{
			if (!(ecuatii[j] = ft_str_three_concat(ecuatii[j], intern, " | ")))
				return (0);
		}
		else
		{
			if (!(ecuatii[j] = ft_str_five_concat(ecuatii[j], intern, " & ", tranzitie, " | ")))
				return (0);
		}
		if (del != ecuatii[j])
			ft_strClrDel(&del);
		stare = ft_strchr(stare, ',') + 1;
		printf("iesire ecuatii[j] = |%s|\n", ecuatii[j]);
		k++;
	}
	printf("sfirsit iesire ecuatii[j]\n");
	return (1);
}
