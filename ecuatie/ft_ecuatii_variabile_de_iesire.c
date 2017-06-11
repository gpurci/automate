/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatii_variabile_de_iesire.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:14:14 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 18:57:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				*ft_ecuatii_variabile_de_iesire(t_muchie *nucleu)
{
	t_muchie		*much;
	char			*c;

	c = 0;
	printf("Ecuatie_valori_de_stare\n");
	while (nucleu)
	{
		if (!(ft_str_three_concat_varDifNo(&c, &nucleu->nd->stare[1], ",", '-')))
			return (0);
		much = (t_muchie*)nucleu->nd->much;
		printf("nucleu +++++++++++++++++++++++++++++++++++\n");
		while (much)
		{
			printf("Much+++++++++++++++++++++++++++++++++++\n");
			if (!(ft_str_three_concat_varDifNo(&c, &much->stare[1], ",", '-')))
				return (0);
			much = much->dr;
		}
		nucleu = nucleu->dr;
	}
	printf("Ecuatie_valori_de_stare sfirsit+++++++++++++++++++++++++++++++++++\n");
	printf("c valori_de_iesire = $%s$\n", c);
	if (!(c = ft_str_trim_repeat_until_char(c, ',')))
		return (0);
	printf("c valori_de_iesire = $%s$\n", c);
	return (c);
}
