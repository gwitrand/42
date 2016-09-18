/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 20:52:54 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/03 20:52:55 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc(int nb, int num)
{
	if (!(nb % num) && num == nb)
		return (1);
	if ((num < nb) && (nb % num))
	{
		return (calc(nb, num + 1));
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (!(calc(nb, 2)))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
