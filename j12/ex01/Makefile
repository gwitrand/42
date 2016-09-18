# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 12:09:30 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/14 12:09:31 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c
O_FILE = ft_cat.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) $(O_FILE)

clean:
	/bin/rm -f $(O_FILE)

fclean: clean
	/bin/rm -f $(NAME)
