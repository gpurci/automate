/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:51:59 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/14 19:52:00 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				print_id_form(char *term)
{
	printf("print_id_form___________adres = %p\nterm = ", term);
	if (!term)
		return ;
	while (*term)
	{
		printf("%d,", *term);
		term++;
	}
	printf("\nSfirsit+++print_id_form\n");
}
