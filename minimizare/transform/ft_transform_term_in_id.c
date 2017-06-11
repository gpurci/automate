/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_term_in_id.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 20:10:42 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/03 20:10:44 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ft_transform_term_in_id(t_nume_id *term, char *string)
{
	char			*c;
	char			*del;
	char			nou[2];
	int				i;
	int				j;

	printf("ft_transform_term_in_id____________\n");
	i = 0;
	nou[1] = 0;
	c = ft_strdup(string);
	ft_strswich_string_del(&c, " & ", "");
	*nou = 1;
	ft_strswich_string_del(&c, " | ", nou);
	*nou = 2;
	ft_strswich_string_del(&c, " ^ ", nou);
	while (term[i].id != -1)
		i++;
	j = i;
	while (--i != -1)
	{
		*nou = ~term[i].id;
		del = ft_strjoin("~", term[i].nume);
		ft_strswich_string_del(&c, del, nou);
		ft_strClrDel(&del);
	}
	while (--j != -1)
	{
		*nou = term[j].id;
		ft_strswich_string_del(&c, term[j].nume, nou);
	}
	return (c);
}
