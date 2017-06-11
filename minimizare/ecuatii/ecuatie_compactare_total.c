/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ecuatie_compactare_total.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 16:55:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/09 16:55:40 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

char				*ecuatie_compactare_total(char **ec)
{
	t_list			*tmp;
	char			*compact;
	char			*del1;
	char			*del2;
	char			*del3;
	char			f;
	int				size1;
	int				size2;

	tmp = creare_lst_term(*ec);
	printf("Ecuatie compactare +++++++++++++++++++++++++++++++++++compactare++++++++++++++++\n");
	print_id_form(*ec);
	ft_strClrDel(ec);
	ft_lst_sort_content(tmp);
	del1 = ecuatie_compacta(&tmp);
	del2 = 0;
	compact = ft_strsub_nou(del1, 0, (size1 = ft_strlen_var(del1, 7) + 1));//(  = 7
	// printf("Compact nou = $%s$ del2 = $%s$ size1 = %d strlen del = %zu comp = %c , %d\n",
	// 	compact, del2, size1, ft_strlen(del1), compact[size1 - 1], compact[size1 - 1]);
	if (compact[size1 - 1])
	{
		del2 = ft_strsub(del1, size1, (size2 = ft_strlen_var(del1 + size1, 3)));//)  = 3
		del3 = ft_strsub(del1 , size1 + size2, ft_strlen(del1 + size1 + size2));
	}
	//printf("inainte de delete del1 del1 = $%s$ del2 = $%s$\n", del1, del2);
	ft_strClrDel(&del1);
	//printf("inainte de while del1 = $%s$ del2 = $%s$\n", del1, del2);
	if (!del2)
	{
		reducere_unu(&compact);
		return (compact);
	}
	//printf("dupa return del1 = $%s$ del2 = $%s$ ++++++++\n", del1, del2);
	printf("\n\nEcuatie_compacta total++++++while+++\n");
	while (1)
	{
		//printf("while del1 = $%s$ del2 = $%s$ del3 = $%s$++++++++\n", del1, del2, del3);
		del1 = ecuatie_compactare_total(&del2);
		//printf("return del1 = $%s$ del2 = $%s$ del3 = $%s$++++++++\n", del1, del2, del3);
		//printf("return EC+++++++++size1 = %zu\n", ft_strlen_var(del3, '(') + 1);
		f = 0;
		if (!del1)
		{
			compact[ft_strlen(compact) - 1] = 0;
			f = 1;
		}
		del2 = ft_strsub_nou(del3, f, (size1 = ft_strlen_var(del3, 7) + 1));//(  = 7
		//printf("dupa ec while del1 = $%s$ del2 = $%s$ del3 = $%s$++++++++\n", del1, del2, del3);
		*ec = compact;
		compact = ft_str_three_concat(compact, del1, del2);
		//printf("compact = $%s$ ++++++++\n", compact);
		ft_strClrDel(&del1);
		ft_strClrDel(ec);
		if (!*del2)
			break ;
		ft_strClrDel(&del2);
		//printf("sterge del2+=+=+=+=\n");
		if (!(del2 = ft_strsub_nou(del3, size1, (size2 = ft_strlen_var(del3 + 1, 3) + 1) - size1)))//)  = 3
			return (compact);
		*ec = del3;
		del3 = ft_strsub_nou(del3, size2, ft_strlen(del3) - size2);
		ft_strClrDel(ec);
		// printf("size1 = %d size2 = %d s(1 + 2) = %d len del3 = %zu min = %lu\n", size1, size2, size1 + size2,
		// 	ft_strlen(del3), ft_strlen(del3) - (size1 + size2));
	}
	ft_strClrDel(&del1);
	ft_strClrDel(&del2);
	ft_strClrDel(&del3);
	printf("\nsfirsit Ecuatie_compacta total++++++fun+++\n");
	return (compact);
}
