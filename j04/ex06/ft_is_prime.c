/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 12:53:20 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/03 12:53:22 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int prime;

	prime = 3;
	if (-2 < nb && nb < 2)
	{
		return (0);
	}
	if (nb < 0)
		nb = (nb * -1);
	if (nb % 2 == 0)
		return (0);
	while (prime * prime <= nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}
