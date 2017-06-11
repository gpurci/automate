/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_sau_multi_term.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:34:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/18 16:34:05 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_sau_multi_term(t_list **tmp, t_list **beg,
	t_list *pre, char *asem)
{
	char			*del;

	// printf("IIIIIINNNNNNNtrare++++RRRRRRReducere_term_sau++++++reducere_sau_multi_term++++++++++++++\n");
	// print_id_form((char*)(*tmp)->content);
	// print_id_form((char*)(*beg)->content);
	// printf("+++++++RRRRRRReducere_term_sau++++++reducere_sau_multi_term++++++++++++++\n");
	ft_str_invers_dif_char((char*)(*tmp)->content, *asem);
	// print_id_form((char*)(*tmp)->content);
	// print_id_form((char*)(*beg)->content);
	// printf("+++++++RRRRRRReducere_term_sau++++++reducere_sau_multi_term++++++++++++++\n");
	del = ft_strncmp_asemanare((char*)(*tmp)->content, (char*)(*beg)->content,
		(*tmp)->content_size, (*beg)->content_size);
	if (ft_strlen(del) == ft_strlen((char*)(*tmp)->content))
	{
		printf("RRRRRRReducere_term_sau++++++reducere_sau_multi_term_____________________________________________________\n");
		if ((*tmp)->next == (*beg))
		{
			ft_lst_del_mijloc(pre, beg);
			(*tmp)->next = (*beg);
			if ((*beg))
				(*beg) = (*beg)->next;
		}
		else
			ft_lst_del_mijloc(pre, beg);
		ft_strClrDel(&del);
		del = (char*)(*tmp)->content;
		(*tmp)->content = (void*)ft_strswich_string(del, asem, "");
		(*tmp)->content_size--;
	}
	ft_str_invers_dif_char((char*)(*tmp)->content, *asem);
	// printf("+++++++RRRRRRReducere_term_sau++++++reducere_sau_multi_term++++++++++++++\n");
	// printf("Adres TMP = %p Adres BEG = %p\n", (*tmp), (*beg));
	// if ((*tmp))
	// 	print_id_form((char*)(*tmp)->content);
	// if ((*beg))
	// 	print_id_form((char*)(*beg)->content);
	// printf("IIIIIIIEEEEEEEEEsire RRRRRRReducere_term_sau++++++reducere_sau_multi_term++++++++++++++\n");
	ft_strClrDel(&del);
}
