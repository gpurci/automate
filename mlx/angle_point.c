/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:45:37 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/20 15:45:42 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics_mlx.h"

double				angle_cadran(int cadran, double angle)
{
	return (radian(cadran) + acos(angle));
}

double				angle_point(int xo, int yo, int xu, int yu, int s)
{
	if (xo < xu)
	{
		if (yo > yu)
			return (angle_cadran(270, ((double)(yo - yu) / s)));//cadran unu
		return (angle_cadran(0, ((double)(xu - xo) / s)));//cadran patru
	}
	if (yo > yu)
		return (angle_cadran(180, ((double)(xo - xu) / s)));//cadran doi
	return (angle_cadran(90, ((double)(yu - yo) / s)));//cadran trei
}
