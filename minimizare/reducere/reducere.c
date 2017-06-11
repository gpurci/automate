/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 14:49:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/15 14:49:09 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere(char **term, char xor)
{
	t_list			*tmp;

	tmp = creare_lst_term(*term);
	ft_strClrDel(term);
	ft_lst_delete_egal_content_all(tmp);
	ft_lst_sort_content_size_crtr(tmp);
	reducere_si(&tmp);
	tmp = reducere_term_sau_prime(tmp);
	if (!tmp)
		return ;
	*term = reducere_term_sau(tmp, xor);
	if (*term )
		if (**term != 4)
			(*term)[ft_strlen(*term) - 1] = 0;
	printf("REDUCERE++++++++++++++++++++++++++++++++++++++++++\n");
	print_id_form(*term);
	printf("++++++++term++++++++++++++++++++++++++++++++++++++++++\n");
}
