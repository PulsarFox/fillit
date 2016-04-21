/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:38:07 by savincen          #+#    #+#             */
/*   Updated: 2016/04/05 17:15:04 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

static void		add_list(t_block *list, t_block *new)
{
	while (list->next)
		list = list->next;
	list->next = new;
}

t_block			*ft_tolst(int fd)
{
	t_block		*new;
	t_block		*list;
	char		buf[21];
	int			k;

	new = 0;
	list = 0;
	buf[0] = 0;
	while ((k = read(fd, buf, 21)) != 0)
	{
		if (k > 0)
		{
			if ((new = malloc(sizeof(t_block))) == NULL)
				return (NULL);
			buf[k] = 0;
			new->block = ft_strdup(buf);
			new->type = 0;
			new->next = 0;
			if (list == 0)
				list = new;
			else
				add_list(list, new);
		}
	}
	return (list);
}
