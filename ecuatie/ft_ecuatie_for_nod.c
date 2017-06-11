/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ecuatie_for_nod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 19:54:07 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/09 19:54:15 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				*ft_ecuatie_for_nod(char *nume, int len, char ord)
{
	char			*ecuatie;
	char			c1[] = "~D[0]";
	char			*c2;
	char			*ec;
	int				i;

	c2 = " & ";
	i = 0;
	ecuatie = verilog_txt(nume, "+ ", " = ");
	while (i < len)
	{
		//printf("ecuatie = %s\n", ecuatie);
		//printf("ecuatie = %s\n", ecuatie);
		ec = ecuatie;
		//printf("ecuatie = %s\n", ecuatie);
		if (i + 1 == len)
			c2 = "";
		//printf("c1 = %s c2 = %s\n", c1, c2);
		if ((ord & 1) == 0)
			ecuatie = verilog_txt(c1, ecuatie, c2);
		else
			ecuatie = verilog_txt(&c1[1], ecuatie, c2);
		//printf("ecuatie = |%s|\nec = |%s|\n", ecuatie, ec);
		ft_str_clear_and_delete(ec);
		ord >>= 1;
		c1[3]++;
		i++;
	}
	return (ecuatie);
}