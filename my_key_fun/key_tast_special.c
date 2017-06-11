/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_tast_special.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 18:34:15 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/01 18:34:19 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char			key_tast_special(t_mealy *mealy, int k, int val)
{
	printf("key_tast_special = %d\n", k);
	if ((k == kVK_Shift || k == kVK_RightShift || k == kVK_CapsLock
		|| k == kVK_RighCommand || k == kVK_LeftCommand))
	{
		mealy->tasta = val;
		if (k == kVK_Shift || k == kVK_RightShift)
			mealy->shift = val;
		else if (k == kVK_CapsLock)
			mealy->capslock = val;
		else if (k == kVK_RighCommand || k == kVK_LeftCommand)
			mealy->ctrl = val;
		return (0);
	}
	return (1);
}
