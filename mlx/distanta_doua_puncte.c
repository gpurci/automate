/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distanta_doua_puncte.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:56:10 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 15:56:12 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

int					distanta_doua_puncte(int xo, int yo, int xu, int yu)
{
	return (pow(pow(abs(xu - xo), 2) + pow(abs(yu - yo), 2), 0.5));
}
