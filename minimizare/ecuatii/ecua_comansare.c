/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecua_comansare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 14:35:02 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/09 14:35:03 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ecua_comansare(t_list **tmp)
{
	t_list			*ap;
	char			*compact;
	char			*del;
	char			schimb[2];

	schimb[0] = 1;// = |
	schimb[1] = 0;//
	ap = (*tmp);
	printf("ecua_comansare\n");
	compact = 0;
	while (ap)
	{
		(*tmp) = (*tmp)->next;
		del = compact;
		print_id_form((char*)ap->content);
		compact = ft_str_three_concat((char*)ap->content, schimb, compact);
		ft_strClrDel(&del);
		ft_lstdelone(&ap, &ft_lstdel_str_function);
		ap = (*tmp);
	}
	printf("sfirsit ecua_comansare\n");
	return (compact);
}
