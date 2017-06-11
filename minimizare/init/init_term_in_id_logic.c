/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_term_in_id_logic.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:22:46 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/04 15:22:47 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimizare.h"

void				init_term_in_id_logic(t_nume_id *term_id)
{
	ft_strcpy(term_id[0].nume, " | ");
	term_id[0].id = 1;
	term_id[0].len = 3;
	ft_strcpy(term_id[1].nume, " ^ ");
	term_id[1].id = 2;
	term_id[1].len = 3;
	ft_strcpy(term_id[2].nume, ")");
	term_id[2].id = 3;
	term_id[2].len = 2;
	ft_strcpy(term_id[3].nume, "1");
	term_id[3].id = 4;
	term_id[3].len = 1;
	ft_strcpy(term_id[4].nume, "~");
	term_id[4].id = 5;
	term_id[4].len = 1;
	ft_strcpy(term_id[5].nume, " & ");
	term_id[5].id = 6;
	term_id[5].len = 3;
	ft_strcpy(term_id[6].nume, "(");
	term_id[6].id = 7;
	term_id[6].len = 2;
}
