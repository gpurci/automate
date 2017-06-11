/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_id_in_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 21:14:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/14 21:14:31 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*transform_id_in_str(t_nume_id *term, char *string)
{
	char			*c;
	char			*del;
	char			nou[2];
	char			granita[2];
	int				i;
	int				j;

	printf("ft_transform_term_in_id____________\n");
	i = 0;
	nou[1] = 0;
	granita[0] = 0x80;
	granita[1] = 0;
	c = ft_strdup(string);
	while (term[i].id != -1)
	{
		*nou = ~term[i].id;
		del = ft_str_five_concat(granita, "~", term[i].nume, granita, 0);
		ft_strswich_string_del(&c, nou, del);
		ft_strClrDel(&del);
		i++;
	}
	//print_id_form(c);
	j = i;
	i = 0;
	while (c[i])
	{
		if (c[i] == -128)
			i += ft_strlen_var(&c[i + 1], -128) + 1;
		//printf("c = %d i = %d\n", c[i], i);
		c[i] |= 0x80;
		i++;
	}
	//print_id_form(c);
	printf("ft_transform_term_in_id+++++++++++++++++++++++\n");
	while (--j != -1)
	{
		*nou = term[j].id | 0x80;
		ft_strswich_string_del(&c, nou, term[j].nume);
		// print_id_form(c);
		// printf("term = $%s$ j = %d nou = %d,%d id = %d\n", term[j].nume, j, nou[0], nou[1], term[j].id);
	}
	printf("ft_transform_term_in_id+++++++++++++++++++++++\n");
	ft_strswich_string_del(&c, granita, "");
	return (c);
}
