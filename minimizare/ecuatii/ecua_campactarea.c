/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecua_campactarea.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:37:32 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:37:34 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ecua_campactarea(t_list **tmp, char *asem)
{
	t_list			*beg;
	t_list			*ap;
	char			*compact;
	char			*del1;
	char			*del2;
	char			*del3;
	char			schimb[8];

	init_schimb(schimb);
	compact = ft_strjoin(asem, &schimb[2]);//( == 7
	del3 = ft_strdup(asem);
	printf("ecua_campactarea\n");
	asem = ft_str_add_char(ft_strdup(asem), 1);
	//printf("asem = $%s$\n", asem);
	beg = 0;
	ap = (*tmp);
	//printf("ecua_campactarea\n");
	while (ap)
	{
		if (match_nou((char*)ap->content, asem, 1))
		{
			//printf("exista asemanare\n");
			del1 = compact;
			del2 = ft_del_char_in_src(ft_strdup((char*)ap->content), del3);
			if (*del2)
				compact = ft_str_three_concat(compact, del2, schimb);//| = 1 
			else
				compact = ft_str_three_concat(compact, &schimb[6], schimb);//1 = 4 // | = 1
			ft_strClrDel(&del1);
			ft_strClrDel(&del2);
			//printf("beg\n");
			if (!beg)
			{
				//printf("123\n");
				(*tmp) = (*tmp)->next;
				ft_lstdelone(&ap, &ft_lstdel_str_function);
				ap = (*tmp);
				//printf("1\n");
			}
			else
			{
				//printf("223\n");
				beg->next = ap->next;
				ft_lstdelone(&ap, &ft_lstdel_str_function);
				ap = beg->next;
				//printf("2\n");
			}
		}
		else
		{
			beg = ap;
			ap = ap->next;
		}
	}
	//printf("sfirsit ecua_campactarea\n");
	ft_strClrDel(&del3);
	ft_strClrDel(&asem);
	compact[ft_strlen(compact) - 1] = 3;//) = 3
	printf("sfirsit ecua_campactarea\n");
	return (compact);
}
