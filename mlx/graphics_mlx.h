/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_mlx.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 17:45:18 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:05:41 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICS_MLX_H
# define GRAPHICS_MLX_H
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <time.h>
# include <mlx.h>
# include <unistd.h>
# define PI 3.14
# define PTR_MOTION (1L << 6)
# define MOTION_NOTIFY 6
//# define KEY_PRESS_MASK (1L << 6)
# define KEY_PRESS_MASK (1L << 6)
# define KEY_RELEASE_MASK (1L << 1)
# define MOUSE_PRESS_MASK (1L << 6)
# define MOUSE_PRESS 5
//# define MOUSE_PRESS 2
//# define KEY_PRESS 2
# define KEY_PRESS 2
# define KEY_RELEASE 3
//# define LINUX
# define MAC

typedef	struct	s_mlx
{
	void		*mlx;
	void		*win;
	int			sizeX;
	int			sizeY;
	int			color;
	int			scara;
	int			color_txt;
}				t_mlx_frame;

//-----------------graphic
void				line(int xo, int yo, int xu, int yu);
void				circle(int xo, int yo, int r);
void				arc(int xo, int yo, int r, long double init, long double arc);
void				barMlx(int xo, int yo, int xu, int yu, int color);
void				bezierNou(int xo, int yo, int xv, int yv, int xu, int yu);
//-----------------graphic

//-----------------calcule
double				radian(double unghi);
double				grade(double unghi);
double				angle_point(int xo, int yo, int xu, int yu, int s);
void				arc_coord(int xo, int yo, int xu, int yu);
int					distanta_doua_puncte(int xo, int yo, int xu, int yu);
void				curb_coord(int xo, int yo, int xu, int yu, int h);
void				curb_one_point(int xo, int yo, int h);
//-----------------calcule

//-----------------setari
void				set_color_t_graphics_mlx(int color);
void				set_scale_t_graphics_mlx(int scara);
void				set_color_txt_t_graphics_mlx(int color);
void				set_standart_graphics_mlx();
void				set_TxtColorScale_graphics_mlx(int txt, int color, int scara);
//-----------------setari

//-----------------get
int					getColorGraphicsMlx(void);
int					getScaleGraphicsMlx(void);
int					getColorTxtGraphicsMlx(void);
int					*getTxtColorScaleGraphicsMlx(int *i);
//-----------------get

//-----------------clear
void				clearMlx(void);
void				clearAriaMlx(int xo, int yo, int xu, int yu);
//-----------------clear

//-----------------string
void				stringGraphicsMlx(int x, int y, char *txt);
void				string_t_graphics_mlx(int x, int y, char *txt);
//-----------------string

//-----------------init
void				init_graphic_mlx(t_mlx_frame *mlw, int x, int y, char *name);
//-----------------init

//-----------------
#endif