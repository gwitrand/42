/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:27:19 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/07 14:27:20 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (src != 0)
	{
		str = (char*)malloc(sizeof(*str) * i + 1);
		if (str != 0)
		{
			while (src[j] != '\0')
			{
				str[j] = src[j];
				j++;
			}
			str[j] = '\0';
			return (str);
		}
	}
	return (0);
}
