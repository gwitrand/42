/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 21:36:42 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/15 21:36:43 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include "ft_tail.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_nb(char *str)
{
	int i;
	int nbr;

	nbr = 0;
	i = 2;
	if (str[0] == '-' && str[1] == 'c')
	{
		while (str[i] == ' ')
			i++;
		while (str[i] > 47 && str[i] < 58)
		{
			nbr *= 10;
			nbr += str[i] - '0';
			i++;
		}
	}
	return (nbr);
}

void	ft_errno(char *argv)
{
	ft_putstr("ft_tail: ");
	ft_putstr(argv);
	if (errno == 2)
		ft_putstr(": No such file or directory\n");
	else if (errno == 11)
		ft_putstr(": Try again\n");
	else if (errno == 12)
		ft_putstr(": Out of memory\n");
	else if (errno == 13)
		ft_putstr(": Permission denied\n");
	else if (errno == 21)
		ft_putstr(": Is a directory\n");
	else if (errno == 27)
		ft_putstr(": File too large\n");
	else if (errno == 36)
		ft_putstr(": File name too long\n");
}

void	ft_tail(char *content, int n_option)
{
	int		ret;
	int		fd;
	int		i;
	char	buf[BUF_SIZE];

	i = 0;
	ret = 0;
	fd = open(content, O_RDONLY);
	if (fd == -1)
		ft_errno(content);
	else
		ft_readwrite(ret, fd, n_option, buf);
}

void	ft_tail_2(char *content, int n_option)
{
	int		ret;
	int		fd;
	char	buf[BUF_SIZE];

	ret = 0;
	fd = open(content, O_RDONLY);
	if (fd == -1)
		ft_errno(content);
	else
	{
		write(1, "==> ", 4);
		write(1, content, ft_strlen(content));
		write(1, " <==\n", 5);
		ft_readwrite(ret, fd, n_option, buf);
	}
}
