/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reducere_totala.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 19:21:16 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/16 19:21:18 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				reducere_totala(char **term, char xor)
{
	char			*c;
	char			*del1;
	char			*del2;
	char			*del3;
	char			*del4;
	char			nou[2];
	int				size1;
	int				size2;

	c = *term;
	nou[1] = 0;
	nou[0] = 3;
	del2 = 0;
	del1 = ft_strsub_nou(c, 0, (size1 = ft_strlen_var(c, 7) + 1));//(  = 7
	if (del1[size1 - 1])
	{
		del2 = ft_strsub(c, size1, (size2 = ft_strlen_var(c + size1, 3)));//)  = 3
		del3 = ft_strsub(c, size1 + size2 + 1, ft_strlen(c + size1 + size2 + 1));
	}
	if (!del2)
	{
		ft_strClrDel(&del1);
		reducere(term, xor);
		return ;
	}
	ft_strClrDel(term);
	ft_strClrDel(&c);
	while (1)
	{
		del4 = ft_strsub(del1, 0, (ft_strlen(del1) - 1));
		if (reducere_term_si(del4))///variabilele de inaintea parantezei sunt egale cu (0 logic) 
		{
			ft_strClrDelThree(&del1, &del2, &del4);
			c = ft_strdup(del3 + 1);
			ft_strClrDel(&del3);
		}///variabilele de inaintea parantezei sunt egale cu 0
		else
		{
			reducere_totala(&del2, xor);
			if (!del2)
			{
				c = del3;
				ft_strClrDel(&del1);
			}
			else
			{
				if (*del2 == 4)
				{
					c = *term;
					*term = ft_str_two_concat(*term, del4);
					ft_strClrDelThree(&del1, &del2, &del4);
					ft_strClrDel(&c);
					c = del3;
				}///variabilele din paranteza sunt egale cu 1 (1 logic = 4)
				else
				{
					ft_strClrDel(&del4);
					del4 = *term;
					*term = ft_str_five_concat(*term, del1, del3, nou, 0);
				}///variabilele din paranteza sunt diferite
			}
			ft_strClrDel(&del4);
		}
		del1 = ft_strsub_nou(c, 0, (size1 = ft_strlen_var(c, 7) + 1));//(  = 7
		if (del1[size1 - 1])
		{
			del2 = ft_strsub(c, size1, (size2 = ft_strlen_var(c + size1, 3)));//)  = 3
			del3 = ft_strsub(c, size1 + size2 + 1, ft_strlen(c + size1 + size2 + 1));
		}
		if (!del2)
		{
			ft_strClrDel(&del1);
			return ;
		}
		ft_strClrDel(&c);
	}
}
