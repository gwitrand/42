/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 09:51:52 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/05 09:51:53 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_extreme(void)
{
	char	*min_value;
	int		i;

	i = 0;
	min_value = "-2147483648";
	while (min_value[i] != '\0')
	{
		ft_putchar(min_value[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int x;

	x = 0;
	if (nb == -2147483648)
	{
		ft_extreme();
		x++;
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (x == 0)
		ft_putchar(nb + '0');
}

int     main(void)
{
    ft_putnbr(512);
    return (0);
}
