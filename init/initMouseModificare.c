/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initMouseModificare.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 15:59:40 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 15:59:42 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				initMouseModificare(t_button_func *comand)
{
	comand[0].f = &sterge_nod;
	comand[1].f = &sterge_much;
	comand[2].f = &stare_modificare_iesire;
	comand[3].f = &stare_modificare_tranzitie;
	comand[4].f = &stare_modificare_control;
}
