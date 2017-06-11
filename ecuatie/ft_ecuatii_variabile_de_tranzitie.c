/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatii_variabile_de_tranzitie.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 17:17:55 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 16:20:07 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

// char				*ft_three_concat_graf(char *init, char *var)///nu este folosita nu functioneaza corect
// {
// 	char			*del;
// 	char			*find;

// 	del = init;
// 	if (*var != '-')
// 	{
// 		if (*var == '~')
// 			var++;
// 		find = ft_strstr(init, var);
// 		if (!find || *(find - 1) != ',')
// 		{	
// 			if (!(init = ft_str_three_concat(del, var, ",")))
// 			{
// 				ft_strClrDel(&del);
// 				return (0);
// 			}
// 			ft_strClrDel(&del);
// 		}
// 	}
// 	return (init);
// }
// //concateneaza doua siruri de caractere si adauga virgula la sfirsit
//daca pointerul var nu se gaseste intre virgule si var[0] != '-'

char				*ft_ecuatii_variabile_de_tranzitie(t_muchie *nucleu)
{
	t_muchie		*much;
	char			*c;
	char			*del;

	printf("Ecuatie_valori_de_tranzitie\n");
	c = 0;
	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		while (much)
		{
			if (!(ft_str_three_concat_varDifNo(&c, much->nume, ",", '-')))
				return (0);
			much = much->dr;
		}
		nucleu = nucleu->dr;
	}
	if (!c)
		return (0);
	c[ft_strlen(c) - 1] = 0;
	del = c;
	printf("c valori_de_tranzitie = |%s|\n", c);
	if (!(c = ft_strswich_string(c, "~", "")))
		return (0);
	if (c != del)
		ft_strClrDel(&del);
	if (!(c = ft_str_trim_repeat_until_char(c, ',')))
		return (0);
	printf("c valori_de_tranzitie swich = |%s|\n", c);
	del = c;
	if (!(c = ft_strswich_string(c, ",", ", ")))
		return (0);
	if (c != del)
		ft_strClrDel(&del);
	printf("Ecuatie_valori_de_tranzitie+++++++++++++++++++++++++++++++++++\n");
	return (c);
}
