/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creare_lst_term.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:29:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/17 17:29:52 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

t_list				*creare_lst_term(char *c)
{
	t_list			*tmp;
	size_t			size;

	//printf("creare_lst_term\n");
	tmp = 0;
	while (*c)
	{
		//printf("c = $%s$\n", c);
		ft_lstadd(&tmp, ft_lstnew(0, 0));
		tmp->content = ft_strsub(c, 0, (size = ft_strlen_var(c, 1)));
		tmp->content_size = size;
		c += size;
		if (*c == 1)
			c++;
		//printf("c = $%s$\n", c);
	}
	//ft_lst_print(tmp);
	//printf("sfirsit creare_lst_term\n");
	return (tmp);
}
