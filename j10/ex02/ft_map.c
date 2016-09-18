/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 13:40:26 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/12 13:40:27 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *table;

	i = 0;
	table = (int*)malloc(sizeof(int) * length);
	if (table == 0)
		return (0);
	while (i < length)
	{
		table[i] = f(tab[i]);
		i++;
	}
	return (table);
}
