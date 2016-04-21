/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:53:44 by savincen          #+#    #+#             */
/*   Updated: 2016/04/06 14:16:15 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void		ft_freelst(t_block *list)
{
	t_block		*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp->block);
		free(tmp);
	}
}
