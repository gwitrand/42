/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:14:45 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/12 17:14:46 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef	int(*t_operand)(int, int, char);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int			ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
		(str[i] == ' '))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int			ft_calculator(int n, int m, char operator)
{
	if (operator == '+')
		return (n + m);
	else if (operator == '-')
		return (n - m);
	else if (operator == '*')
		return (n * m);
	else if (operator == '/')
	{
		if (m == 0)
			return (0);
		return (n / m);
	}
	else if (operator == '%')
	{
		if (m == 0)
		{
			write(1, "Stop : modulo by zero\n", 24);
			return (0);
		}
		return (n % m);
	}
	else
		return (0);
}

int			main(int argc, char **argv)
{
	int				n;
	int				m;
	int				result;
	char			operator;
	t_operand		f;

	if (argc != 4)
		return (0);
	f = &ft_calculator;
	operator = argv[2][0];
	n = ft_atoi(argv[1]);
	m = ft_atoi(argv[3]);
	result = f(n, m, operator);
	if (result == 0 && (operator == '/' || operator == '%'))
	{
		if (operator == '/')
			write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
