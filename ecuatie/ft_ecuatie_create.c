/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatie_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 18:43:59 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 17:17:32 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				*ft_ecuatie_all_nod(t_muchie *nucleu, char **ecuatii, int len)
{
	char			*wire;
	char			*del;
	size_t			k;

	k = 0;
	wire = 0;
	while (nucleu)
	{
		ecuatii[k] = ft_ecuatie_for_nod(nucleu->nd->nume, len, k);
		del = wire;
		wire = ft_str_three_concat(nucleu->nd->nume, ", ", del);
		ft_strClrDel(&del);
		nucleu = nucleu->dr;
		k++;
	}
	if (wire)
		wire[ft_strlen(wire) - 2] = 0;
	return (wire);
}

char 				ft_ecuatii_set_variabileIesire(char **ecuatii, char *c)
{
	size_t			i;
	size_t			j;
	size_t			k;
	size_t			size;
	char			*del;

	i = 0;
	k = 0;
	size = ft_strlen(c);
	while (i < size)
	{
		printf("++++++++++++________ecuatii_set_variabileIesire c = $%s$ i = %zu j = %zu k = %zu\n", &c[i], i, j, k);
		if ((del = ft_strsub(c, i, (j = ft_strlen_var(&c[i], ',')))))
			ecuatii[k] = ft_str_three_concat("+ ", del, " = ");
		else
			return (0);
		ft_strClrDel(&del);
		printf("ecuatii [%zu] = $%s$\n", k, ecuatii[k]);
		i += ++j;
		k++;
	}
	printf("ft_ecuatii_set_variabileIesire--------------------------\n");
	afisareTwoDchar(ecuatii);
	printf("ft_ecuatii_set_variabileIesire++++++++++++++++++++++++++\n");
	return (1);
}

char				**ft_ecuatie_create(t_muchie *nucleu)
{
	char			**ecuatii;
	char			*c;
	size_t			i;
	size_t			k;
	int				j;

	printf("Ecuatie_create\n");
	i = numarNod(nucleu);
	if (!(c = ft_ecuatii_variabile_de_iesire(nucleu)))
		return (0);
	k = i + 7 + (j = ft_count_char(c, ',')) + ft_round_log(log((double)i) / log(2));
	printf("k = %zu count = %d \n", k, ft_count_char(c, ','));
	if (!(ecuatii = ft_allocDoubleChar(k)))
		return (0);
	printf("ft_strswich_string======================\n");
	if (!(ecuatii[2] = ft_strswich_string(c, ",", ", ")))
		return (0);
	// printf("ecuatii[2] = |%s|\n", ecuatii[2]);
	// printf("Set variabile ieSire c = $%s$\n", c);
	// printf("Set variabile iesire--------------------------\n");
	// afisareTwoDchar(&ecuatii[i + 5]);
	// printf("Set variabile iesire++++++++++++++++++++++++++\n");
	if (!(ft_ecuatii_set_variabileIesire(&ecuatii[i + 5], c)))
		return (0);
	printf("DUPA       set variabile iesire c = $%s$\n", c);
	// printf("set variabile iesire--------------------------\n");
	// afisareTwoDchar(&ecuatii[i + 5]);
	// printf("set variabile iesire++++++++++++++++++++++++++\n");
	ft_strClrDel(&c);
	printf("dfd ecuatii[i + 5] = #%s#\n", ecuatii[i + 5]);
	if (!(ft_ecuatii_deIesire(nucleu, &ecuatii[i + 5], j + 1)))
		return (0);
	printf("ecuatii de iesire--------------------------\n");
	afisareTwoDchar(&ecuatii[i + 5]);
	printf("ecuatii de iesire++++++++++++++++++++++++++\n");
	printf("ecuatii[i + 5] = #%s#\n", ecuatii[i + 5]);
	k = ft_round_log(log((double)i) / log(2));
	j = k + 48;
	if (!(ecuatii[3] = ft_strdup((char*)&j)))
		return (0);
	printf("ecuatii[3] = |%s|\n", ecuatii[3]);
	if (!(ecuatii[1] = ft_ecuatii_variabile_de_tranzitie(nucleu)))
		return (0);
	printf("ecuatii[1] = |%s|\n", ecuatii[1]);
	if (!(ecuatii[0] = ft_str_three_concat(ecuatii[1], ", ", ecuatii[2])))
		return (0);
	printf("ecuatii[0] = |%s|\n", ecuatii[0]);
	if (!(c = ft_ecuatie_all_nod(nucleu, &ecuatii[5], k)))
		return (0);
	if (!(ecuatii[4] = ft_str_three_concat(ecuatii[0], ", ", c)))
		return (0);
	printf("ecuatii[4] = |%s|\n", ecuatii[4]);
	ft_strClrDel(&c);
	ft_ecuatiiControl(nucleu, &ecuatii[5], &ecuatii[i + 6 + ft_count_char(ecuatii[2], ',')], i);
	i = 0;
	while (ecuatii[i])
		i++;
	printf("ecuatie_create len = %zu addres ecuatii = %p\n", i, ecuatii);
	return (ecuatii);
}
