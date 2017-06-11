/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii_caracter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 16:12:15 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/21 16:12:17 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "key_code.h"

char				ascii_caracter(int tasta, int c)
{
	#ifdef MAC
	char			*as;

	if (tasta == kVK_Shift || tasta == kVK_RightShift || tasta == kVK_CapsLock)
	{
		as = "ASDFHGZXCV.BQWERYT!@#$^%+(&_*)}OU{IP\nLJ\"K;|<?NM>\t ~\b";
		//primul \n = 10 # = 20 } = 30 k = 40 ~ = 50
		return (*(as + c));
	}
	as = "asdfhgzxcv.bqweryt123465=97-80]ou[ip\nlj'k:\\,/nm.\t `\b";
	//primul \n = 10 3 = 20 [ = 30 k = 40 ` = 50 \b = bacspace
	return (*(as + c));
	#endif
	#ifdef LINUX
	if (c == kVK_ANSI_KeypadEnter)
		return (10);
	if (c == kVK_Backspace)
		return (8);
	if (tasta == kVK_Shift || tasta == kVK_RightShift || tasta == kVK_CapsLock)
	{
		if (c == 96)
			return (126);
		if (ft_isalpha_lower(c))
			return (c - 32);
	}
	return (c);
	#endif
}
