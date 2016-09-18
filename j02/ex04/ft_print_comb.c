/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 15:13:23 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/01 21:28:12 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 48 - 1;
	while (a++ <= 56)
	{
		b = a;
		while (b++ <= 57)
		{
			c = b;
			while (c++ < 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < 55 || b < 56 || c < 57)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
			}
		}
	}
}
