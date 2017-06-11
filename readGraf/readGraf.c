/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readGraf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpurci <gpurci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 17:54:45 by gpurci            #+#    #+#             */
/*   Updated: 2017/04/25 15:17:44 by gpurci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mealy.h"

char				readCreareNod(t_muchie **nucleu, char *line)
{
	char			id;
	char			*nume;
	char			*stare;
	t_coordonate	coord;

	id = ft_atoi(line);
	line = ft_strchr(line, ' ') + 1;
	if (!(nume = ft_strsub(line, 0, ft_strlen_var(line, ' '))))
		return (0);
	line = ft_strchr(line, ' ') + 1;
	if (!(stare = ft_strsub(line, 0, ft_strlen_var(line, ' '))))
		return (0);
	line = ft_strchr(line, ' ') + 1;
	coord.x = ft_atoi(line);
	line = ft_strchr(line, ' ') + 1;
	coord.y = ft_atoi(line);
	graf_back_muchie(nucleu, graf_cre_nod(&coord, nume, stare, id), 0, 0);
	return (1);
}

t_muchie			*readNucleu(char *graf)
{
	t_muchie		*nucleu;
	char			*line;
	int				fd;

	nucleu = 0;
	if ((fd = open(graf, O_RDONLY)) == -1)
		return (0);
	while ((get_next_line(fd, &line)) == 1)
	{
		if (*line == 'o')
		{
			if (!(readCreareNod(&nucleu, &line[2])))
				return (0);
		}
	}
	close(fd);
	return (nucleu);
}

char				readCreareMuch(t_muchie *nucleu, char *line, char ord)
{
	void			**much;
	t_nod			*nod;
	char			id;
	char			*nume;
	char			*stare;

	id = ft_atoi(line);
	line = ft_strchr(line, ' ') + 1;
	if (!(nume = ft_strsub(line, 0, ft_strlen_var(line, ' '))))
		return (0);
	line = ft_strchr(line, ' ') + 1;
	if (!(stare = ft_strsub(line, 0, ft_strlen_var(line, ' '))))
		return (0);
	if (!(nod = cautareGrafId(nucleu, ord)))
		return (0);
	much = &nod->much;
	graf_back_muchie((t_muchie**)much, cautareGrafId(nucleu, id), nume, stare);
	return (1);
}

t_muchie			*readGraf(char *graf)
{
	t_muchie		*nucleu;
	char			*line;
	int				fd;
	char			id;

	if (!(nucleu = readNucleu(graf)))
		return (0);
	if ((fd = open(graf, O_RDONLY)) == -1)
		return (0);
	while ((get_next_line(fd, &line)) == 1)
	{
		if (*line == 'o')
			id = ft_atoi(&line[2]);
		else
		{
			if (!(readCreareMuch(nucleu, &line[2], id)))
				return (0);
		}
	}
	close(fd);
	return (nucleu);
}
