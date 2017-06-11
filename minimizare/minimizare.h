/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimizare.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 15:00:21 by gpurci            #+#    #+#             */
/*   Updated: 2017/05/08 15:00:25 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMIZARE_H
# define MINIMIZARE_H
# include "libft.h"
# include <stdio.h>

typedef struct		s_nume_id
{
	char			nume[10];
	char			id;
	char			len;
}					t_nume_id;

//---------------------del
void				ft_del_nume_id(t_nume_id **term);
void				ft_del_value_nume_id(t_nume_id *term);
//---------------------del

//---------------------cautare
//---------------------cautare

//---------------------creare
t_list				*creare_lst_term(char *c);
void				ft_creare_term_in_id(t_nume_id **term, char **ecuatie);
//---------------------creare

//---------------------minimizare
void				minimizare(char **av);
//---------------------minimizare

//---------------------match
int					match(char *s1, char *s2);
int					match_nou(char *s1, char *s2, int mch);
int					match_ptr(char *s1, char *s2, char **ptr, int mch);
int					nmatch(char *s1, char *s2);
//---------------------match

//---------------------copy
void				ft_copy_nume_id(t_nume_id *dest, t_nume_id *src);
//---------------------copy

//---------------------transform
char				*ft_transform_char_in_id(char **ecuatie, char *id);
char				*ft_transform_term_in_id(t_nume_id *term, char *string);
char				*transform_id_in_str(t_nume_id *term, char *string);
char				*transform_adauga_si(char **string);
//---------------------transform

//---------------------realloc
t_nume_id			*ft_realloc_nume_id(t_nume_id *term_id, size_t size);
//---------------------realloc

//---------------------init
void				init_term_in_id_logic(t_nume_id *term_id);
void				init_schimb(char *schimb);
//---------------------init

//---------------------variabile
t_list				*variabile_asemanare(t_list *tmp);
void				variabile_asem_total(t_list *tmp);
//---------------------variabile

//---------------------ecuatie
char				*ecua_campactarea(t_list **tmp, char *asem);
char				*ecua_comansare(t_list **tmp);
char				*ecuatie_compacta(t_list **tmp);
char				*ecuatie_compactare_total(char **ec);
//---------------------ecuatie

//---------------------print
void				print_lst_term(t_list *tmp);
void				ft_print_nume_id(t_nume_id *term);
void				print_id_form(char *term);
void				ft_print_nume_id_int(t_nume_id *term);
//---------------------print

//---------------------reducere
void				reducere(char **term, char xor);
void				reducere_prime(char **term);
void				reducere_unu(char **reducere);
void				reducere_si(t_list **prime);
char				reducere_term_si(char *c);
void				reducere_sau(t_list *tmp, t_list *beg, char *asem);
char				*reducere_term_sau(t_list *tmp, char xor);
void				reducere_totala(char **term, char xor);
void				reducere_xor(t_list **tmp, t_list **beg, t_list *pre);
t_list				*reducere_term_sau_prime(t_list *tmp);
void				reducere_sau_multi_term(t_list **tmp, t_list **beg,
	t_list *pre, char *asem);
//---------------------reducere

//---------------------
#endif
