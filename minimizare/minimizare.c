/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimizare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 02:48:00 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/19 02:48:02 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void					minimizare(char **av)
{
	char				*c;
	char				*del1;
	char				*del2;
	int					size1;
	int					i;
	t_nume_id			*term;

	printf("minimizare\n");
	afisareTwoDchar(av);
	ft_creare_term_in_id(&term, av);
	printf("minimizare\n");
	ft_print_nume_id(term);
	printf("minimizare\n");
	i = 3;
	while (ft_strchr(av[i], 'D'))
		i++;
	printf("minimizare\n");
	while (av[i])
	{
		printf("av [%d] = $%s$\n", i, av[i]);
		del1 = ft_strsub(av[i], 0, (size1 = ft_strlen_var(av[i], '=') + 2));
		del2 = ft_strdup(av[i] + size1);
		ft_strClrDel(&av[i]);
		printf("del1 = $%s$\ndel2 = $%s$\n", del1, del2);
		c = ft_transform_term_in_id(&term[7], del2);
		ft_strClrDel(&del2);
		reducere(&c, 0);
		if (!c)
			av[i] = ft_strjoin(del1, "0");
		else
		{
			printf("av [%d] minimizare+++++++++++++++compactare++++++++++++++\n", i);
			c = ecuatie_compactare_total(&c);
			printf("++++++++++av [%d] minimizare+++++++++++++++compactare++++++++++++++\n", i);
			if (!c)
				av[i] = ft_strjoin(del1, "1");
			else
			{
				transform_adauga_si(&c);
				del2 = transform_id_in_str(term, c);
				av[i] = ft_strjoin(del1, del2);
				ft_strClrDel(&c);
				ft_strClrDel(&del2);
			}
		}
		ft_strClrDel(&del1);
		printf("++++++++++++++++++sfirsit av [%d] minimizare+++++++++++++++++++++++++++\n", i);
		i++;
	}
	ft_del_nume_id(&term);
}
