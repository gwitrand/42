/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:47:56 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 16:47:58 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int i;
	int k;
	int count;

	count = 0;
	i = 0;
	k = 0;
	while (i++ <= lenght)
	{
		while (k <= lenght)
		{
			if (tab[i] == tab[k])
			{
				count++;
			}
			if (k == lenght && count == 1)
			{
				return (tab[i]);
			}
			k++;
		}
		k = 0;
		count = 0;
	}
	return (0);
}
