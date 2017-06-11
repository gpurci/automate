/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 16:48:06 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/23 20:24:58 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDEF_HEADER_H
# define TYPEDEF_HEADER_H

typedef struct 		s_comand
{
	char			*init;
	char			*fin;
}					t_comand;

typedef struct 		s_id
{
	int				i;
	int				j;
	int				k;
}					t_id;

typedef struct			s_coord
{
	int					x;
	int					y;
}						t_coord;

typedef	struct			s_string
{
	char				i;
	char				c[50];
	char				*graf;
	char				*nume;
	char				*stare;
	char				dir[50];
	t_coord				init;
	t_coordonate		coord;
}						t_string;

typedef	struct			s_two_char
{
	char			**var;
	char			**standart;
}						t_twoDchar;

typedef struct 		s_mealy
{
	t_string		string;
	t_graf			graf;
	t_mlx_frame		mlw;
	t_twoDchar		twoDchar;
	void			**q;
	int				key;
	char			buton;
	char			sterge;
	char			stare;
	int				tasta;
	int				shift;
	int				capslock;
	int				ctrl;
}					t_mealy;

typedef struct 		s_function_alloc
{
	char			(*f)(char, size_t);
}					t_function_alloc;

typedef struct		s_button_funct
{
	void			(*f)(t_mealy *);
}					t_button_func;

#endif
