/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_nod_name.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 15:33:53 by gpurci            #+#    #+#             */
/*   Updated: 2017/03/31 15:33:55 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				del_nod_name(t_muchie **nucleu, char *nume)
{
	t_muchie		*drept;
	t_muchie		*del;

	drept = *nucleu;
	while (drept)
	{
		del_one_much_name(&drept->nd->much, nume);
		drept = drept->dr;
	}//stergere muchia ce se indreapta spre un nod in proces de stergere
	if (!(del = cautare_much_name(*nucleu, &drept, nume)))
		return ;
	if (!drept)
		*nucleu = del->dr;//primul nod corespunde cu nume
	else
		drept->dr = del->dr;//un nod mai mare ca unu ce corespunde cu nume
	del_one_nod(&del);//sterge nodul ce corespunde cu numele dat ca parametru*/
}
