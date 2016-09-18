# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 10:08:11 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/12 10:08:14 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_FILES = ./srcs/
HEADER = ./includes/

FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)

SRC =	$(SRC_FILES)ft_putchar.c \
		$(SRC_FILES)ft_putstr.c \
		$(SRC_FILES)ft_strcmp.c \
		$(SRC_FILES)ft_strlen.c \
		$(SRC_FILES)ft_swap.c

O_FILES =	ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(O_FILES)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
