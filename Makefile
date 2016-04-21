# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: savincen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/06 13:24:14 by savincen          #+#    #+#              #
#    Updated: 2016/04/06 14:19:02 by savincen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC		=	fillit.c		\
			ft_tolst.c		\
			ft_freelst.c	\

OBJ		=	$(SRC:.c=.o)

INCLUDE	=	-I.
CFLAGS	=	-Wall -Wextra -Werror
LIB		=	-L. -lft
CCLIB	=	make -C ./libft/

CC		=	gcc
RM		=	/bin/rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CCLIB)
			$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(INCLUDE) $(LIB)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)
			$(RM) libft.a

re		:	fclean all

.PHONY	:	all clean fclean re
