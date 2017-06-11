/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_term_sau_prime.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 21:56:26 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/17 21:56:28 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

t_list				*reducere_term_sau_prime(t_list *tmp)
{
	t_list			*pre1;
	t_list			*pre2;
	t_list			*beg;
	t_list			*prime;
	char			*c;
	char			vechi[2];
	char			f;
printf("RRRRRRRterm_sau_prime+++++++++++++++++++++++++++++++++PPPPRIME++++++++++++++\n");
	pre1 = 0;
	vechi[1] = 0;
	prime = tmp;
	while (tmp)
	{
		printf("TMP\n");
		print_id_form((char*)tmp->content);
		beg = tmp->next;
		pre2 = 0;
		while (beg)
		{
			c = ft_strncmp_asemanare((char*)tmp->content, (char*)beg->content,
				tmp->content_size, beg->content_size);
			f = 1;
			if (c)
			{
				// printf("reducere_term_sau_prime +++++++++++++++size_tmp = %zu size_beg = %zu\n",
				// 	tmp->content_size, beg->content_size);
				// printf("Adres TMP = %p Adres BEG = %p\n", tmp, beg);
				// print_id_form((char*)tmp->content);
				// print_id_form((char*)beg->content);
				if (tmp->content_size != beg->content_size &&
					(tmp->content_size == 1 || beg->content_size == 1))
				{
				//	printf("BEG+1+++++++++++++++++++++++++++++++++++++++++++++\n");
					if (tmp->content_size > beg->content_size)
						ft_lst_swich(tmp, beg);
					if (tmp->next == beg)
						tmp->next = beg->next;
					ft_lst_del_mijloc(pre2, &beg);
		//printf("Adres TMP = %p TMP -> next = %p\nAdres BEG = %p\n",
			//			tmp, tmp->next, beg);
					if (tmp && beg)
					{
						print_id_form((char*)tmp->content);
						print_id_form((char*)beg->content);
					}
					//printf("++++++reducere_term_sau_prime ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
					f = 0;
				}
				ft_strClrDel(&c);
			}
			printf("BEG+6\n");
			if (f)
			{
				pre2 = beg;
				beg = beg->next;
			}
			printf("BEG+7\n");
		}
		printf("TMP+1\n");
		if (tmp)
		{
			// printf("Adres TMP = %p Adres content = %p\n", tmp, tmp->content);
			// printf("Adres TMP next = %p\n", tmp->next);
			pre1 = tmp;
			tmp = tmp->next;
			// if (tmp)
			// 	printf("Adres TMP = %p Adres content = %p\n", tmp, tmp->content);
		}
		printf("TMP+2\n");
	}
	printf("++Sfirsit RRRRRRRterm_sau_prime+++++++++++++++++++++++++++++++++PPPPRIME++++++++++++++\n");
	return (prime);
}
