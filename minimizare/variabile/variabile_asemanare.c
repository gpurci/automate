/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variabile_asemanare.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 20:13:44 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 20:13:46 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

t_list				*variabile_asemanare(t_list *tmp)
{
	t_list			*ecuatii;
	t_list			*find;
	t_list			*asemanare;
	char			*asem;

	asemanare = 0;
	while (tmp)
	{
		ecuatii = tmp->next;
		while (ecuatii)
		{
			asem = ft_strncmp_asemanare((char*)tmp->content,
				(char*)ecuatii->content, tmp->content_size, ecuatii->content_size);
			//printf("asemanare asem =  $%s$\n", asem);
			if (asem)
			{
				if (!(find = ft_lst_find_string_content(asemanare, asem)))
				{
					//printf("asemanare $%s$\n", asem);
					ft_lstadd(&asemanare, ft_lstnew(0, 0));
					asemanare->content = asem;
					asemanare->content_size = 1;
				}
				else
					find->content_size++;
			}
			ecuatii = ecuatii->next;
		}
		tmp = tmp->next;
	}
	variabile_asem_total(asemanare);
	return (asemanare);
}
