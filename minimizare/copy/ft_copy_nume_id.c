/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_nume_id.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:37:54 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 17:37:56 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				ft_copy_nume_id(t_nume_id *dest, t_nume_id *src)
{
	size_t			i;

	if (src && dest)
	{
		i = 0;
		printf("copy id___\n");
		while (src[i].id != -1)
		{
			ft_strcpy(dest[i].nume, src[i].nume);
			dest[i].id = src[i].id;
			dest[i].len = src[i].len;
			ft_del_value_nume_id(src + i);
			i++;
		}
		printf("sfirsit copy id_________\n");
	}
}
