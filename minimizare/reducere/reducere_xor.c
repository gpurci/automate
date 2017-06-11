/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_xor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 20:12:25 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/17 20:12:27 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_xor(t_list **tmp, t_list **beg, t_list *pre)
{
	char			*c;
	char			nou[3];
	char			vechi[2];
printf("RRRRRRRreducere_xor+++++++++++++++++++++++++++XORRRRRR++++++++++++\n");
	nou[2] = 0;
	nou[1] = 2;
	vechi[1] = 0;
	if ((*tmp)->next == (*beg))
		(*tmp)->next = (*beg)->next;
	ft_lst_del_mijloc(pre, beg);
	printf("RRRRRRR              XORRRRRR++++++++++++\n");
	c = (char*)(*tmp)->content;
	ft_str_pozitiv(c);
	nou[0] = *c;
	vechi[0] = nou[0];
	(*tmp)->content = (void*)ft_strswich_string(c, vechi, nou);
	(*tmp)->content_size = 3;
	(*tmp) = (*tmp)->next;
	if ((*tmp))
		ft_str_invers((char*)(*tmp)->content);
	ft_strClrDel(&c);
	printf("======+++RRRRRRRreducere_xor+++++++++++++++++++++++++++XORRRRRR++++++++++++\n");
}
