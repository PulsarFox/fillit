/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfischof <pfischof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 17:40:19 by pfischof          #+#    #+#             */
/*   Updated: 2016/01/21 15:16:25 by pfischof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issquare(const char *tab, int len)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (tab[k] != '\0' && j++ < 26)
	{
		i = 0;
		while (tab[k] != '\0' && i++ < 4)
		{
			k += 4;
			if (tab[k] != '\n')
				return (0);
			k++;
		}
		if (tab[k] != '\n' && tab[k] != '\0')
			return (0);
		k++;
	}
	if ((k - 1) != len)
		return (0);
	return (1);
}

static int	hasfour(const char *tab)
{
	int i;
	int j;
	int k;
	int n;

	j = 0;
	k = 0;
	while (tab[k] != '\0' && j++ < 4)
	{
		i = 0;
		n = 0;
		while (tab[k] != '\0' && i++ < 21)
		{
			if (tab[k] == '#')
				n++;
			k++;
		}
		if (n != 4)
			return (0);
	}
	return (1);
}

static int	ischar(const char *tab)
{
	int k;

	k = 0;
	while (tab[k] != '\0')
	{
		if (tab[k] != '\n' && tab[k] != '.' && tab[k] != '#')
			return (0);
		k++;
	}
	return (1);
}

static int	doestouch(const char *tab)
{
	int i;
	int j;
	int k;
	int l;

	k = 0;
	l = 0;
	while (tab[k] != '\0' && l < 26)
	{
		i = 0;
		j = 0;
		while (i++ < 21)
		{
			if (tab[k] == '#')
				j += ft_howmany(tab, k, l);
			k++;
		}
		if (j != 6 && j != 8)
			return (0);
		l++;
	}
	return (1);
}

int			ft_isvalid(const char *tab, int len)
{
	if (!issquare(tab, len) || !hasfour(tab) || !ischar(tab) || !doestouch(tab))
		return (0);
	return (1);
}
