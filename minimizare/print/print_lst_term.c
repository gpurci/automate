/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst_term.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 15:15:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/09 15:15:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				print_lst_term(t_list *tmp)
{
	printf("print_lst_term\n");
	while (tmp)
	{
		printf("content = $%s$ size = %zu\n", tmp->content, tmp->content_size);
		tmp = tmp->next;
	}
	printf("sfirsit print_lst_term\n");
}
