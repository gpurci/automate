/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comenzi_nu_exista.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 19:47:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 19:47:10 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void					comenzi_nu_exista(t_mealy *mealy)
{
	stringGraphicsMlx(100, 100, "Nu este comanda");
	printf("comenzi_nu_exista adres = %p\n", mealy);
}
