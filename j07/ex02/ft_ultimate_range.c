/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:41:05 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/07 20:41:07 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int nb;

	i = 0;
	if (max <= min)
		return (0);
	else
	{
		nb = max - min;
		tab = (int*)malloc(sizeof(*tab) * nb + 1);
		if (tab != 0)
		{
			while (min < max)
			{
				tab[i] = min;
				min++;
				i++;
			}
			*range = tab;
			return (i);
		}
	}
	return (0);
}
