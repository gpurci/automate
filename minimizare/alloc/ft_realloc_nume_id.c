/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_nume_id.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:20:57 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 14:20:59 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

t_nume_id			*ft_realloc_nume_id(t_nume_id *term_id, size_t size)
{
	t_nume_id		*term;

	printf("ft_realloc_t_nume_id_____________ size = %zu\n", size);
	term = term_id;
	if (!(term_id = (t_nume_id*)malloc(sizeof(t_nume_id) * (size + 1))))
		return (0);
	printf("aloc\n");
	term_id[size].id = -1;
	ft_copy_nume_id(term_id, term);
	printf("while\n");
	if (term)
		free(term);
	printf("sfirsit ft_realloc_t_nume_id_____________\n");
	return (term_id);
}