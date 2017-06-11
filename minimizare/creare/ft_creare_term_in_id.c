/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creare_term_in_id.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:34:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 15:34:08 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

static int				creare_term(t_nume_id *term, char *ecuatie, int ord, int (*f)(int, int), int len)
{
	int				j;
	int				i;
	int				k;

	k = ft_strlen(ecuatie);
	i = 0;
	while (i < k)
	{
		if (!*ecuatie)
			return (ord);
		if (f((j = ft_strlen_var(ecuatie, ',')), len))
		{
			term[ord - 1].id = ord;
			ft_strncpy(term[ord - 1].nume, ecuatie, j);
			term[ord - 1].nume[j] = 0;
			printf("+++++ecuatie = $%s$ j = %d ord = %d\n", term[ord - 1].nume, j, ord);
			ord++;
		}
		printf("j = %d\n", j);
		ecuatie += j + 2;
		i += j + 2;
		//printf("ecuatie = $%s$ j = %d ord = %d\n", ecuatie, j, ord);
	}
	return (ord);
}

void				ft_creare_term_in_id(t_nume_id **term, char **ecuatie)
{
	char			*del;
	char			*c;
	int				i;
	int				j;
	int				k;

	printf("ft_creare_term_in_id-----------------------------------\n");
	del = ft_strswich_string(ecuatie[2], *ecuatie, "");
	c = del;
	del = ft_strswich_string(del, " ,", "");
	ft_strClrDel(&c);
	i = ft_count_char(del, ',') + 9;
	*term = 0;
	if (i > 126)
		return ;
	if (!((*term) = (t_nume_id*)malloc(sizeof(t_nume_id) * i)))
		return ;
	printf("ft_creare_term_in_id-----del = $%s$ IIIII = %d\n", del, i);
	(*term)[i - 1].id = -1;
	init_term_in_id_logic(*term);
	//printf("ft_creare_term_in_id func = %d func = %d\n", ft_func_if_egall(2, 1), ft_func_if_egall(1, 1));
	k = 1;
	j = 8;
	while (i > j)
	{
		j = creare_term(*term, del, j, &ft_func_if_egall, k);
		k++;
	}
	printf("sfirsit ft_creare_term_in_id++++++++IIIIIII = %d\n", i);
	(*term)[i - 1].id = -1;
	ft_strClrDel(&del);
}
