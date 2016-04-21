/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:03:14 by savincen          #+#    #+#             */
/*   Updated: 2016/04/06 14:28:53 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"
#include <fcntl.h>

void		ft_disploy_lst(t_block *tab)
{
	if (tab == NULL)
	{
		ft_putstr("LISTE VIDE\n");
		return ;
	}
	while (tab != NULL)
	{
		if (tab->block != NULL)
			ft_putstr(tab->block);
		tab = tab->next;
	}
}

int		main(int argc, char **argv)
{
	int			fd;
	t_block		*tableau;

	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	tableau = ft_tolst(fd);
	ft_disploy_lst(tableau);
	ft_freelst(tableau);
	return (0);
}
