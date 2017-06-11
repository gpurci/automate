/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verilog_txt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:40:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/29 19:40:20 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				*verilog_txt(char *var, char *init, char *fin)
{
	char			*standart;

	//printf("verilog_txt\n");
	if (!(standart = (char*)malloc(sizeof(char) * (ft_strlen(var) + 
		ft_strlen(init) + ft_strlen(fin) + 1))))
		return (0);
	ft_strcpy(standart, init);
	ft_strcpy(standart + ft_strlen(init), var);
	ft_strcpy(standart + ft_strlen(standart), fin);
	//printf("sfirsit verilog_txt\n");
	return (standart);
}
