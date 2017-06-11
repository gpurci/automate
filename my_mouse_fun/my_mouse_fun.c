/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mouse_fun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:58:29 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/22 19:18:45 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

int					my_mouse_fun(int pres, int x, int y, void *param)
{
	static int		time_d;
	static int		time;
	static t_button_func	stare[4];
	static t_button_func	comand[5];
	t_mealy			*mealy;

	time = clock();
	printf("my_Mouse_fun Pres = %d x = %d y = %d time = %d time_d = %d diff = %d add = \n", 
			pres, x, y, time, time_d, time - time_d);
	mealy = (t_mealy*)param;
	printf("Nucleu fun = %p\n", mealy->graf.nucleu);
	mealy->string.coord.x = x;
	mealy->string.coord.y = y;
	printf("Nucleu fun = %p\n", mealy->graf.nucleu);
	if (pres == 1)
	{
		time_d = (time - time_d);
		#ifdef MAC
		time_d = time_d < 1500 ? 1 : time_d < 50000 ? 2 : 0;
		#endif
		#ifdef LINUX
		time_d = time_d < 350 ? 1 : time_d < 1500 ? 2 : 0;
		#endif
		time_d = mealy->mlw.sizeY - 100 < y ? 3 : time_d;
		printf("pres = %d x = %d y = %d stare t = %d sterge = %d\n", 
			pres, x, y, time_d, mealy->sterge);
		if (!stare[0].f)
			init_mousePres_stare(stare);
		if (!comand[0].f)
			initMouseModificare(comand);
		if (!mealy->sterge)
			stare[time_d].f(mealy);
		else
			comand[mealy->sterge - 1].f(mealy);
	}
	#ifdef MAC
	else if (pres == 2)
	{
		if ((mealy->graf.nod1 = cautare_coord_nod(mealy->graf.nucleu, x, y)))
			mealy->buton = pres;
	}
	#endif
	#ifdef LINUX
	else if (pres == 3)
	{
		if ((mealy->graf.nod1 = cautare_coord_nod(mealy->graf.nucleu, x, y)))
			mealy->buton = pres;
	}
	#endif
	time_d = time;
	printf("sfirsit my_mouse_fun\n");
	return (0);
}
