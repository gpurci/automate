/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_Comand_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 18:19:33 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/29 18:19:35 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				init_Comand_name(char **comand)
{
	comand[0] = "";
	comand[1] = "sterge";
	comand[2] = "salveaza";
	comand[3] = "deschide";
	comand[4] = "deplaseaza";
	comand[5] = "modifica";
	comand[6] = "nou";
}
