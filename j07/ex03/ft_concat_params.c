/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:55:44 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/07 21:55:46 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][k] != '\0')
		{
			k++;
			j++;
		}
		j++;
		k = 0;
		i++;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;
	char	*str;

	j = ft_length(argc, argv);
	str = (char*)malloc(sizeof(char*) * j + 1);
	k = -1;
	i = 0;
	j = 0;
	if (str != 0)
	{
		while (++i < argc)
		{
			while (argv[i][k++])
			{
				str[j++] = argv[i][k];
			}
			str[j++] = '\n';
			k = -1;
		}
		str[j] = '\0';
		return (str);
	}
	return (0);
}
