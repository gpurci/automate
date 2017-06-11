/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_si.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 16:38:48 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/16 16:38:49 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_si(t_list **prime)
{
	t_list			*pre1;
	t_list			*tmp;

	tmp = *prime;
	pre1 = 0;
	while (tmp)
	{
		if ((reducere_term_si((char*)tmp->content)))
		{
			ft_lst_del_mijloc(pre1, &tmp);
			if (!pre1)
				(*prime) = tmp;	
		}
		pre1 = tmp;
		if (tmp)
			tmp = tmp->next;
	}
}
