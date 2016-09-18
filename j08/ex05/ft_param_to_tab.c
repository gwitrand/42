/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 00:14:45 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/09 00:14:47 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdlib.h>

void					ft_putchar(char c);

char					**ft_split_whitespaces(char *str);

void					ft_show_tab(struct s_stock_par *par);

struct		s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*stock;
	int					i;
	int					k;

	stock = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	if (stock)
	{
		while (i < ac)
		{
			k = 0;
			while (av[i][k])
			{
				k++;
			}
			stock[i].size_param = ac;
			stock[i].str = av[i];
			stock[i].copy = av[i];
			stock[i].tab = ft_split_whitespaces(av[i]);
			i++;
		}
		stock[i].str = 0;
		return (stock);
	}
	return (0);
}
