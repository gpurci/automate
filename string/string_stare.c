/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_stare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:12:40 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 18:36:25 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

void				string_stare(t_mealy *mealy)
{
	mealy->string.stare = ((mealy->string.i > 0) ? ft_strjoin("/", mealy->string.c) : "/-");
}
