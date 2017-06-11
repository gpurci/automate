/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nume_id.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:34:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 13:34:53 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				ft_print_nume_id(t_nume_id *term)
{
	size_t			i;

	i = 0;
	printf("ft_print_t_nume_id___________\n");
	while (term[i].id != -1)
	{
		printf("Nume $%s$ id = %d len = %d\n", term[i].nume, term[i].id, term[i].len);
		i++;
	}
	printf("Sfirsit+++ft_print_t_nume_id\n");
}
