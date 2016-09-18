/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:09:36 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/14 12:09:37 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define LENGTH 28000

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void		ft_strerrno(int i, char **argv)
{
	ft_putstr("cat: ");
	ft_putstr(argv[i]);
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

int			checkup(char **argv, int i)
{
	char	cara[LENGTH + 1];
	int		fd;

	fd = open(argv[i], O_RDONLY);
	if (fd == -1 && errno == 21)
		ft_strerrno(i, argv);
	else
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_strerrno(i, argv);
		else
		{
			cara[read(fd, cara, LENGTH)] = '\0';
			ft_putstr(cara);
			if (close(fd) == -1)
				return (0);
		}
	}
	close(fd);
	return (0);
}

int			main(int argc, char **argv)
{
	int		i;
	char	buff[LENGTH + 1];

	if (argc == 1)
	{
		while (read(0, buff, LENGTH))
		{
			ft_putstr(buff);
		}
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		checkup(argv, i);
		i++;
	}
	return (0);
}
