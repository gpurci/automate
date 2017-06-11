/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_nod_id.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 20:56:28 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/30 20:56:30 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				del_nod_id(t_muchie **nucleu, char id)
{
	t_muchie		*drept;
	t_muchie		*del;

	drept = *nucleu;
	while (drept)
	{
		del_one_much_id(&drept->nd->much, id);
		drept = drept->dr;
	}//stergere muchia ce se indreapta spre un nod in proces de stergere
	if (!(del = cautare_nod_id(*nucleu, &drept, id)))
		return ;
	if (!drept)
		*nucleu = del->dr;
	else
		drept->dr = del->dr;
	del_one_nod(&del);
	drept = *nucleu;
	while (drept)
	{
		if (drept->nd->id > id)
			drept->nd->id--;
		drept = drept->dr;
	}
	//sterge nodul ce corespunde cu numele dat ca parametru*/
}
