/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:07:32 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/08 10:07:34 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wordnb(char *str)
{
	int		i;
	int		reset;
	int		count;

	i = 0;
	count = 0;
	reset = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			reset = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			count += (reset == 1) ? 1 : 0;
			reset = 0;
			i++;
		}
	}
	return (count);
}

int		wordsize(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**str_2;

	i = 0;
	j = 0;
	if ((str_2 = malloc(sizeof(char*) * wordnb(str) + 1)) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((str_2[j] = malloc(sizeof(char) * wordsize(str, i) + 1)) == 0)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				str_2[j][k++] = str[i++];
			str_2[j++][k] = '\0';
		}
	}
	str_2[j] = NULL;
	return (str_2);
}
