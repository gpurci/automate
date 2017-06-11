/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_sau.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:51:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/16 19:51:04 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_sau(t_list *tmp, t_list *beg, char *asem)
{
	char			*del1;

	printf("IIIIIINNNNNNNtrare++++RRRRRRReducere_term_sau++++++reducere_sau++++++++++++++\n");
	printf("Adres TMP = %p Adres BEG = %p\n", tmp, beg);
	print_id_form((char*)tmp->content);
	print_id_form((char*)beg->content);
	printf("+++++++RRRRRRReducere_term_sau++++++reducere_sau++++++++++++++\n");
	if (tmp->content_size > beg->content_size)
	{
		del1 = (char*)tmp->content;
		tmp->content = (void*)ft_strswich_string(del1, asem, "");
		tmp->content_size--;
	}
	else
	{
		del1 = (char*)beg->content;
		beg->content = (void*)ft_strswich_string(del1, asem, "");
		beg->content_size--;
	}
	printf("IIIIIINNNNNNNtrare++++RRRRRRReducere_term_sau++++++reducere_sau++++++++++++++\n");
	printf("Adres TMP = %p Adres BEG = %p\n", tmp, beg);
	print_id_form((char*)tmp->content);
	print_id_form((char*)beg->content);
	printf("+++++++RRRRRRReducere_term_sau++++++reducere_sau++++++++++++++\n");
	ft_strClrDel(&del1);
}
