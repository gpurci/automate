/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecuatie_compacta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 19:41:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 19:41:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ecuatie_compacta(t_list **tmp)
{
	t_list			*asemanare;
	t_list			*del;
	char			*compact;
	char			*asem;
	char			*del1;
	char			*del2;
	char			schimb[2];

	schimb[0] = 1;// = |
	schimb[1] = 0;//
	compact = 0;
	printf("ecuatie_compacta\n");
	while (*tmp)
	{
		if ((asemanare = variabile_asemanare(*tmp)))
		{
			del = asemanare;
			//print_lst_term(del);
			asemanare = ft_lst_maxim_size(asemanare);
			//printf("mai mic ca 2ecuatie_campactarea = $%s$\n", compact);
			asem = ft_strdup((char*)asemanare->content);
			asemanare = 0;
			ft_lstdel(&del, &ft_lstdel_str_function);
			del1 = ecua_campactarea(tmp, asem);
			del2 = compact;
			compact = ft_str_three_concat(del1, schimb, compact);
			//printf("ecuatie_campactarea = $%s$\n", compact);
			ft_strClrDel(&asem);
			ft_strClrDel(&del1);
			ft_strClrDel(&del2);
		}
		else
		{
			del1 = ecua_comansare(tmp);
			asem = compact;
			//printf("mai mic ca 2 compact = $%s$ del = $%s$\n", compact, del1);
			compact = ft_str_two_concat(compact, del1);
			//printf("mai mic ca 2 ecuatie_campactarea = $%s$\n", compact);
			ft_strClrDel(&asem);
			ft_strClrDel(&del1);
		}
	}
	compact[ft_strlen(compact) - 1] = 0;
	printf("sfirsit ecuatie_compacta\n");
	return (compact);
}
