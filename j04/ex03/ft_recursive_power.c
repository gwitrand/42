/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 09:10:47 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/03 09:10:49 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (0);
}
