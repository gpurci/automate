/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standartNumeFisierGraf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 14:48:59 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:57:51 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				standartNumeFisierGraf(char *nume)
{
	printf("standartNumeFisierGraf+nume = +%s+\n", nume);
	nume = ft_strchr(nume, '.');
	printf("standartNumeFisierGraf+nume = +%s+\n", nume);
	if (ft_strlen(nume) != 3)
	{
		stringGraphicsMlx(100, 100, "Error name (No .ig)");
		return (0);
	}
	printf("standartNumeFisierGraf+nume = +%s+\n", nume);
	if (nume[1] == 'i' && nume[2] == 'g' && nume[3] == 0)
		return (1);
	stringGraphicsMlx(100, 100, "Error name (No .ig)");
	return (0);
}
