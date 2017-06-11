/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variabile_asem_total.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 21:16:20 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/12 21:16:22 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				variabile_asem_total(t_list *tmp)
{
	t_list			*asemanare;
	char			*asem;
	size_t			size1;
	size_t			size2;

	while (tmp)
	{
		asemanare = tmp->next;
		while (asemanare)
		{
			size1 = ft_strlen((char*)tmp->content);
			size2 = ft_strlen((char*)asemanare->content);
			asem = ft_strncmp_asemanare((char*)tmp->content,
				(char*)asemanare->content, size1, size2);
			if (asem)
			{
				if (size1 == ft_strlen(asem))
					tmp->content_size++;
				else
					asemanare->content_size++;
			}
			asemanare = asemanare->next;
		}
		tmp = tmp->next;
	}
}
