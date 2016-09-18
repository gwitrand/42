/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:55:18 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/07 16:55:19 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int nb;
	int *minmax;
	int i;

	i = 0;
	if (max <= min)
		return (0);
	else
	{
		nb = max - min;
		minmax = (int*)malloc(sizeof(*minmax) * nb + 1);
		if (minmax != 0)
		{
			while (min < max)
			{
				minmax[i] = min;
				min++;
				i++;
			}
			minmax[i] = '\0';
			return (minmax);
		}
	}
	return (0);
}
