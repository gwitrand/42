/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 02:07:17 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 02:07:17 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alerte(void)
{
	write(1, "Alert!!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	trouv_alert(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		alerte();
	if (ft_strcmp(str, "attack") == 0)
		alerte();
	if (ft_strcmp(str, "Powers") == 0)
		alerte();
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		temp = argv[i];
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				temp[k] = argv[i][j];
				k++;
			}
			j++;
		}
		temp[j] = '\0';
		trouv_alert(temp);
		i++;
	}
	return (0);
}
