# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 21:38:44 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/15 21:38:47 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAGS = -Wall -Werror -Wextra
CCc = gcc -c
CCo = gcc -o

all: $(NAME)

$(NAME):
	$(CCc) ft_tail.c main.c
	$(CCo) $(NAME) ft_tail.o main.o

clean:
	/bin/rm -f ft_tail.o main.o

fclean: clean
	/bin/rm -f $(NAME)

re:
	fclean all