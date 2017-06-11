/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_graf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 21:46:33 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/24 19:21:44 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graf.h"

void				print_graf(t_muchie *nucleu)
{
	t_muchie		*much;

	while (nucleu)
	{
		much = (t_muchie*)nucleu->nd->much;
		printf("Id nod = %d Nume Nod |%s| Stare Nod |%s| x = %d y = %d\n", nucleu->nd->id, nucleu->nd->nume, nucleu->nd->stare,
			nucleu->nd->coord.x, nucleu->nd->coord.y);
		while (much)
		{
			printf("MUCHII\n-Id nod = %d Nume |%s| Stare |%s| x = %d y = %d\n", much->nd->id, much->nd->nume, much->nd->stare,
				much->nd->coord.x, much->nd->coord.y);
			printf("+Nume muchie|%s| Stare muchie|%s|\n", much->nume, much->stare);
			much = much->dr;
		}
		nucleu = nucleu->dr;
	}
}
