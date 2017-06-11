/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_bakspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 18:48:53 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/28 18:48:57 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void					string_bakspace(t_mealy *mealy, int *key)
{
	mealy->string.i--;
	if (mealy->string.i < 0)
		mealy->string.i = 0;
	*key = 0;
}
