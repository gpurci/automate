/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatii_deIesire.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 21:12:50 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 15:41:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				ft_ecuatii_deIesire(t_muchie *nucleu, char **ecuatii, int len)
{
	t_muchie		*much;
	char			*intern;
	int				k;

	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		intern = nucleu->nd->nume;//denumirea lui Z;
		printf("addres ecuatii_deIesire nod = $%s$much = %p\n", nucleu->nd->nume, much);
		while (much)
		{
			if (!(ft_ecuatii_iesire(ecuatii, intern, much->nume, &much->stare[1], len)))
				return (0);
			if (!(ft_ecuatii_iesire(ecuatii, intern, much->nume, &much->nd->stare[1], len)))
				return (0);
			much = much->dr;
		}
		printf("addres ecuatii_deIesire much = %p\n", much);
		nucleu = nucleu->dr;
	}
	k = 0;
	while (k < len)
	{
		intern = ecuatii[k];
		if (intern[ft_strlen(intern) - 2] == '=')
		{
			ecuatii[k] = ft_strjoin(intern, "0");
			ft_strClrDel(&intern);
		}
		else
			intern[ft_strlen(intern) - 3] = 0;
		k++;
	}
	return (1);
}
