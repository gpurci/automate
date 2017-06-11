/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_term_sau.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 20:05:09 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/16 20:05:11 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*reducere_term_sau(t_list *tmp, char xor)
{
	t_list			*pre1;
	t_list			*pre2;
	t_list			*beg;
	t_list			*prime;
	char			*c;
	char			vechi[2];
	char			f;
printf("RRRRRRReducere_term_sau+++++++++++++++++++++++++++++++++++RRRRR++++++++++++++++\n");
	pre1 = 0;
	vechi[1] = 0;
	prime = tmp;
	while (tmp)
	{
		printf("TMP\n");
		print_id_form((char*)tmp->content);
		ft_str_invers((char*)tmp->content);
		beg = tmp->next;
		pre2 = 0;
		while (beg)
		{
			c = ft_strncmp_asemanare((char*)tmp->content, (char*)beg->content,
				tmp->content_size, beg->content_size);
			f = 1;
			if (c)
			{
				if ((f = ft_strlen(c)) == 1 && (tmp->content_size == 1 && beg->content_size == 1))
				{
					ft_lstdel(&prime, &ft_lstdel_str_function);
					vechi[0] = 4;
					return (ft_strdup(vechi));
				}// (returneaza 1 logic = 4)
				else if (f == 1 && tmp->content_size == beg->content_size)
					reducere_sau_multi_term(&tmp, &beg, pre2, c);
				else if (tmp->content_size != beg->content_size && (tmp->content_size == 1 || beg->content_size == 1))
					reducere_sau(tmp, beg, c);//reducere sau (nu returneaza 1 logic = 4)
				else if (tmp->content_size == 2 && beg->content_size == 2 && xor)
					reducere_xor(&tmp, &beg, pre2);//suma modulo 2
				ft_strClrDel(&c);
			}
			//printf("BEG+6\n");
			if (f && beg)
			{
				pre2 = beg;
				beg = beg->next;
			}
			//printf("BEG+7\n");
		}
		printf("TMP+1\n");
		if (tmp)
		{
			pre1 = tmp;
			ft_str_invers((char*)tmp->content);
			tmp = tmp->next;
		}
		printf("TMP+2\n");
	}
	printf("++Sfirsit RRRRRRReducere_term_sau+++++++++++++++++++++++++++++++++++RRRRR++++++++++++++++\n");
	//printf("++Sfirsit  TMPtttttttttttttttttttttttttttttttttttttttt\n");
	//printf("++Sfirsit  TMPtttttttttttttttttttttttttttttttttttttttt\n");
	return (ecua_comansare(&prime));
}
