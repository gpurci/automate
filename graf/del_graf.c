/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_graf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 18:50:52 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 19:14:14 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				del_graf(t_muchie **nucleu)
{
	t_muchie		*tmp;

	while (*nucleu)
	{
		tmp = (*nucleu)->dr;
		del_one_nod(nucleu);
		free(*nucleu);
		*nucleu = tmp;
	}
	nucleu = 0;
}
