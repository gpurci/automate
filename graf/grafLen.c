/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grafLen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 20:04:38 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 20:07:33 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

size_t				grafLen(t_muchie *nucleu)
{
	t_muchie		*much;
	size_t			i;

	i = 0;
	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		while (much)
		{
			i++;
			much = much->dr;
		}
		i++;
		nucleu = nucleu->dr;
	}
	return (i);
}
