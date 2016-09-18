/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:09:50 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 15:09:51 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int count;

	count = 0;
	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;
		value >>= 1;
	}
	return (count);
}
