/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mealy.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:35:20 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:28:58 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEALY_H
# define MEALY_H
# include <stdio.h>
# include <unistd.h>
# include <math.h>
# include "libft.h"
# include "graf.h"
# include "graphics_mlx.h"
# include "key_code.h"
# include "minimizare.h"
# include "typedef_header.h"

# define CL 6 //comandLine
//# define LINUX
# define MAC

//---------------------calcule
int					ft_round_log(double lg);
double				ld(double lg);
//---------------------calcule

//---------------------creare
void				creare_muchie(t_mealy *mealy);
void				creare_nod(t_mealy *mealy);
void				creare_nume_stare(t_mealy *mealy);
//---------------------creare

//---------------------ecuatie
char				**ft_ecuatie_create(t_muchie *nucleu);
char				*ft_ecuatie_for_nod(char *nume, int len, char ord);
char				*ft_ecuatii_valori_de_stare(t_muchie *nucleu);
char				*ft_ecuatii_valori_de_tranzitie(t_muchie *nucleu);
char				ft_ecuatii_iesire(char **ecuatii, char *intern,
	char *tranzitie, char *stare, int len);
char				ft_ecuatii_de_tranzitie(t_muchie *nucleu, char **ecuatii, int len);
void				ft_ecuatiiControl(t_muchie *nucleu, char **intern,
	char **control, int size);
char				ft_ecuatii_deIesire(t_muchie *nucleu, char **ecuatii, int len);
char				*ft_ecuatii_variabile_de_iesire(t_muchie *nucleu);
char				*ft_ecuatii_variabile_de_tranzitie(t_muchie *nucleu);
//---------------------ecuatie

//---------------------init
void				init_comenzi_verilog(t_comand *comand);
void				init_graf(t_graf *graf);
void				init_mousePres_stare(t_button_func *stare);
void				init_stare_function_graf(t_button_func *stare);
void				init_t_mealy(t_mealy *mealy);
void				initTotal(t_mealy *mealy);
void				init_Comand_name(char **comand);
void				initMouseModificare(t_button_func *comand);
void				initTypeTwoDchar(t_twoDchar *twoDchar);
void				initTypeMlx(t_mlx_frame *mlw);
void				initTypeString(t_string *string);
void				initTypeGraf(t_graf *graf);
//---------------------init

//---------------------mouse_motion
int					mouse_motion(int x, int y, void *q);
//---------------------mouse_motion

//---------------------mouse_pres
int					mouse_pres(int k, int x, int y, void *q);
//---------------------mouse_pres

//---------------------my_key_fun
int					my_key_fun(int keycode, void *param);
int					key_pres(int k, void *q);
void				key_tast_function(t_mealy *mealy);
void				ctrl_tast_function(t_mealy *mealy);
void				shift_tast_function(t_mealy *mealy);
char				key_tast_special(t_mealy *mealy, int k, int val);
//---------------------my_key_fun

//---------------------my_mouse_fun
int					my_mouse_fun(int pres, int x, int y, void *param);
//---------------------my_mouse_fun

//---------------------stare
void				stare_creare_muchie(t_mealy *mealy);
void				stare_creare_nod(t_mealy *mealy);
void				stare_zero_graf(t_mealy *mealy);
void				stare_citire_fisier(t_mealy *mealy);
void				stare_scriere_fisier(t_mealy *mealy);
void				stare_scriere_verilog_program(t_mealy *mealy);
void				stare_comand_line(t_mealy *mealy);
void				stare_modificare_iesire(t_mealy *mealy);
void				stare_modificare_control(t_mealy *mealy);
void				stare_modificare_tranzitie(t_mealy *mealy);
void				stare_modificare_nume_stare(t_mealy *mealy, t_string *string, char **nume);
void				stare_minimizare(t_mealy *mealy);
//---------------------stare

//---------------------string
void				string(t_mealy *mealy, int key);
void				string_nume(t_mealy *mealy);
void				string_put(t_mealy *mealy, char key);
void				string_stare(t_mealy *mealy);
void				string_bakspace(t_mealy *mealy, int *key);
//---------------------string

//---------------------verilog
void				verilog_always(char **standart, char **var, t_comand *comand, t_id *id);
void				verilog_assign(char **standart, char **var, t_comand *comand, t_id *id);
char				**verilog_tablou(char **var);
char				*verilog_txt(char *var, char *init, char *fin);
void				verilog_program(t_mealy *mealy);
void				verilogWrite(t_mealy *mealy);
void				verilogWriteMinimizare(t_mealy *mealy);
//---------------------verilog

//---------------------graphic
void				graphicGraph(t_muchie *nucleu);
//---------------------graphic

//---------------------exit
void				exitGraph(t_mealy *mealy);
//---------------------exit

//---------------------cautare
int					ft_cautareIesireInDoubleChar(char **ecuatii, char *find, int len);
t_nod				*cautareGrafId(t_muchie *nucleu, char id);
t_nod				*cautare_coord_nod(t_muchie *nucleu, int x, int y);
t_muchie			*cautare_coord_much(t_muchie *much, t_muchie **prev,
	t_coordonate *init, t_coordonate *coord);
//---------------------cautare

//---------------------openGraf
void				openGraf(t_mealy *mealy);
//---------------------openGraf

//---------------------readGraf
t_muchie			*readGraf(char *graf);
//---------------------readGraf

//---------------------writeGraf
void				writeGraf(t_mealy *mealy);
//---------------------writeGraf

//---------------------standart
char				standartNumeFisierGraf(char *nume);
//---------------------standart

//---------------------comand
void				comandLine(t_mealy *mealy);
int					comenzi_cautare(char *comand);
//---------------------comand

//---------------------afisare
//---------------------afisare

//---------------------sterge
void				sterge_graf(t_mealy *mealy);
void				sterge_much(t_mealy *mealy);
void				sterge_nod(t_mealy *mealy);
//---------------------sterge

//---------------------modificare
void				modifica_iesire(t_mealy *mealy);
void				modificare_tranzitie_control(t_mealy *mealy);
//---------------------modificare

//---------------------
#endif
