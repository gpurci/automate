/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_one_nod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 13:56:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 19:15:24 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void					del_one_nod(t_muchie **nucleu)
{
	t_muchie			*tmp;

	tmp = (t_muchie*)(*nucleu)->nd->much;//adresa la prima muchie a unui nod
	del_muchie(&tmp);//sterge muchiile
	del_value_nod((*nucleu)->nd);
	free((*nucleu)->nd);
	(*nucleu)->dr = 0;
	(*nucleu)->nd = 0;
}
