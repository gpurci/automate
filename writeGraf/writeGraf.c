/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeGraf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 19:54:03 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 16:06:30 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				**WriteGrafDoubleChar(t_muchie *nucleu)
{
	t_muchie		*much;
	char			**graf;
	char			*del1;
	char			*del2;
	char			*del3;
	size_t			len;

	len = grafLen(nucleu) + 1;
	printf("WriteGrafDoubleChar  len = %zu+++++\n", len);
	if (!(graf = (char**)malloc(sizeof(char*) * len)))
		return (0);
	graf[len - 1] = 0;
	len = 0;
	while (nucleu)
	{
		del1 = ft_itoa(nucleu->nd->id);
		del2 = ft_itoa(nucleu->nd->coord.x);
		del3 = ft_itoa(nucleu->nd->coord.y);
		graf[len] = ft_str_six_concat("o ", del1, " ", nucleu->nd->nume, " ", nucleu->nd->stare);
		del1 = graf[len];
		graf[len] = ft_str_six_concat(graf[len], " ", del2, " ", del3, "\n");
		ft_str_clear_and_delete(del1);
		ft_str_clear_and_delete(del2);
		ft_str_clear_and_delete(del3);
		much = (t_muchie*)nucleu->nd->much;
		while (much)
		{
			len++;
			del1 = ft_itoa(much->nd->id);
			graf[len] = ft_str_seven_concat("> ", del1, " ", much->nume, " ", much->stare, "\n");
			del2 = graf[len];
			ft_str_clear_and_delete(del1);
			much = much->dr;
		}
		len++;
		nucleu = nucleu->dr;
	}
	return (graf);
}

void				writeGraf(t_mealy *mealy)
{
	char			*line;
	int				fd;
	char			**graf;

	mealy->stare = 0;
	printf("writeGraf+++++++++++++++++++++++++++++++++++++++++\n");
	if (!(standartNumeFisierGraf(mealy->string.c)))
		return ;
	printf("standart+++++++++++++++++++++++++++++++++++++++++\n");
	line = ft_strjoin("txtGraf/", mealy->string.c);
	fd = open(line, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);
	printf("line = $%s$ fd = %d\n", line, fd);
	if (fd == -1)
	{
		printf("aaa line = $%s$ fd = %d\n", line, fd);
		stringGraphicsMlx(mealy->string.init.x, mealy->string.init.y - 10, "Eroare la creare fisier");
	}
	printf("open www\n");
	ft_strClrDel(&line);
	if (!(graf = WriteGrafDoubleChar(mealy->graf.nucleu)))
		return ;
	printf("writeGraf+++++++++++++++++++++++++++++++++++++++++\n");
	afisareTwoDchar(graf);
	ft_putstrDoubleChar_fd(graf, fd);
	close(fd);
}
