/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nume_id_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:58:11 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/15 13:58:12 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				ft_print_nume_id_int(t_nume_id *term)
{
	size_t			i;

	i = 0;
	printf("ft_print_nume_id_int+++++++++++++++++++++++++++++++++++++++++++++++++\n");
	while (term[i].id != -1)
	{
		printf("Nume $%s$ id = %d id negat = %d id int = %d\n", term[i].nume, term[i].id, ~term[i].id, (unsigned char)~term[i].id);
		i++;
	}
	printf("Sfirsit+++ft_print_nume_id_int\n");
}
