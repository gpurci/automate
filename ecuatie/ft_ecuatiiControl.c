/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatiiControl.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 17:35:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/26 17:35:29 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				**init_rind_intern(char **control, int size)
{
	char			**del;
	int				k;

	if (!(del = (char**)malloc(sizeof(char*) * size)))
		return (0);
	k = 0;
	while (k < size)
	{
		if (!(del[k] = ft_strsub(control[k], 0, ft_strlen_var(control[k], '=') + 1)))
			return (0);
		k++;
	}
	return (del);
}

void				init_control(char **control, int size)
{
	char 			d[] = "D[0] = " ;
	int 			k;

	k = 0;
	while (k < size)
	{
		if (!(control[k] = ft_strdup(d)))
			return ;
		d[2]++;
		k++;
	}
}

void				init_ecuatie_iesire_control(t_muchie *nucleu, char **del, int size)
{
	t_muchie		*much;
	char			*intern;
	int				k;

printf("init_ecuatie_iesire_control\n");
	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		intern = nucleu->nd->nume;//denumirea lui Z;
		while (much)
		{
			if (!(ft_ecuatii_iesire(del, intern, much->nume, much->nd->nume, size)))
				return ;
			much = much->dr;
		}
		nucleu = nucleu->dr;
	}
	printf("init_ecuatie_iesire_control taiere\n");
	k = 0;
	while (k < size)
	{
		if (del[k][ft_strlen(del[k]) - 1] != '=')
			del[k][ft_strlen(del[k]) - 3] = 0;
		k++;
	}
	printf("sfirsit init_ecuatie_iesire_control\n");
}

void				ft_ecuatiiControl(t_muchie *nucleu, char **intern,
	char **control, int size)
{
	char			**del;
	char			*find;
	char			*del1;
	int				k;
	int				i;

	afisareTwoDchar(intern);
	if (!(del = init_rind_intern(intern, size)))
		return ;
	init_control(control, ft_round_log(ld(size)));
	init_ecuatie_iesire_control(nucleu, del, size);
	k = 0;
	while (k < size)
	{
		printf("del[%d] = |%s|\n", k, del[k]);
		k++;
	}
	printf("ft_ecuatiiControl\n");
	k = 0;
	while (k < size)
	{
		i = 0;
		find = intern[k];
		printf("intern[%d] = |%s|\n", k, intern[k]);
		while ((find = ft_strchr(find, 'D')) && del[k][ft_strlen(del[k]) - 1] != '=')
		{
			printf("inceput control[%d] = $%s$ find = $%s$\n", i, control[i], find);
			if (*(++find - 2) != '~' )
			{
				del1 = control[i];
				if (!(control[i] = ft_str_three_concat(control[i], ft_strchr(del[k], '=') + 1, " | ")))
					return ;
				ft_strClrDel(&del1);
			}
			printf("sfirsit control[%d] = $%s$ find = $%s$\n", i, control[i], find);
			i++;
		}
		k++;
	}
	printf("ft_ecuatiiControl\n");
	afisareTwoDchar(control);
	printf("ft_ecuatiiControl\n");
	k = 0;
	i = ft_round_log(ld(size));
	while (k < i)
	{
		del1 = control[k];
		if (del1[ft_strlen(del1) - 2] == '=')
		{
			control[k] = ft_strjoin(del1, "0");
			ft_strClrDel(&del1);
		}
		else
			del1[ft_strlen(del1) - 3] = 0;
		printf("controlul = $%s$\n", control[k]);
		k++;
	}
	ft_delDoubleChar(&del);
}














