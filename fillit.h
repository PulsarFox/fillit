/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:24:29 by savincen          #+#    #+#             */
/*   Updated: 2016/04/06 14:14:10 by savincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FILLIT_H
# define	FILLIT_H

# define	TRUE 1
# define	FALSE -1

# define	SQUARE 1
# define	HLINE 2
# define	VLINE 3
# define	L_UPLEFT 4
# define	L_UPRIGHT 5
# define	L_VERUP 6
# define	L_VERDOWN 7
# define	IL_UPLEFT 8
# define	IL_UPRIGHT 9
# define	IL_VERUP 10
# define	IL_VERDOWN 11
# define	TRI_UP 12
# define	TRI_DOWN 13
# define	TRI_LEFT 14
# define	TRI_RIGHT 15
# define	WIG_LEFT 16
# define	WIG_RIGH 17
# define	WIG_VLEFT 18
# define	WIG_VRIGHT 19
# define	IWIG_LEFT 20
# define	IWIG_RIGH 21
# define	IWIG_VLEFT 22
# define	IWIG_VRIGHT 23

typedef int				T_BOOL;

typedef struct			s_block
{
	char				*block;
	int				type;
	char				c;
	struct s_block		*next;
}						t_block;

t_block					*ft_tolst(int fd);
void					ft_freelst(t_block *block);

#endif
