
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 13:27:04 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 14:20:43 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAF_H
# define GRAF_H
# include "libft.h"
# include <stdio.h>

typedef struct			s_graf_coord
{
	int					x;
	int					y;
}						t_coordonate;

typedef struct			s_gr_nod
{
	t_coordonate		coord;
	char				id;
	char				*nume;
	char				*stare;
	void				*much;
}						t_nod;

typedef struct			s_gr_muchie
{
	struct s_gr_muchie	*dr;
	t_nod				*nd;
	char				*nume;
	char				*stare;
}						t_muchie;

typedef struct			s_table
{
	t_muchie			*nucleu;
	t_nod				*nod1;
	t_nod				*nod2;
}						t_graf;

//---------------------del
void					del_graf(t_muchie **nucleu);
void					del_muchie(t_muchie **much);
void					del_nod_id(t_muchie **nucleu, char id);
void					del_nod_name(t_muchie **nucleu, char *nume);
void					del_one_much(t_muchie **much);
void					del_one_much_id(void **much, char id);
void					del_one_much_name(void **much, char *nume);
void					del_one_nod(t_muchie **nucleu);
void					del_value_muchie(t_muchie *much);
void					del_value_nod(t_nod *nd);
//---------------------del

//---------------------cautare
t_muchie				*cautare_much_name(void *much, t_muchie **find, char *nume);
t_muchie				*cautare_nod_id(void *much, t_muchie **prev, char id);
t_muchie				*cautare_nod(void *much, t_muchie **find, char *nume);
//---------------------cautare

//---------------------creare
void					graf_add_much(t_muchie **much, t_nod *nod, char *nume, char *stare);
void					graf_back_muchie(t_muchie **much, t_nod *nod, char *nume, char *stare);
t_muchie				*graf_cre_muchie(t_nod *nod, char *nume, char *stare);
t_nod					*graf_cre_nod(t_coordonate *coord, char *nume, char *stare, char id);
//---------------------creare

//---------------------numar de noduri
size_t					graf_len(t_muchie *much);
void					print_graf(t_muchie *nucleu);
size_t					grafLen(t_muchie *nucleu);
size_t					numarNod(t_muchie *nucleu);
//---------------------numar de noduri

//---------------------swap
void					swap_muchie(t_muchie *much1, t_muchie *much2);
void					swap_nod(t_nod *nod1, t_nod *nod2);
//---------------------swap

//---------------------
#endif
