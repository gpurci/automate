/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initTypeString.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 21:17:51 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/02 21:17:52 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				initTypeString(t_string *string)
{
	string->i = 0;
	string->c[0] = 0;
	string->graf = 0;
	string->nume = 0;
	string->stare = 0;
	string->dir[0] = 0;
	string->init.x = 0;
	string->init.y = 0;
	string->coord.x = 0;
	string->coord.y = 0;
}
