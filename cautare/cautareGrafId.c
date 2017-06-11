/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cautareGrafId.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:00:06 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 19:03:37 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

t_nod				*cautareGrafId(t_muchie *nucleu, char id)
{
	while (nucleu)
	{
		if (nucleu->nd->id == id)
			return (nucleu->nd);
		nucleu = nucleu->dr;
	}
	return (0);
}
