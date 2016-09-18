/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:59:37 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/06 21:59:38 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*table;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		table = argv[j];
		while (table[i])
		{
			ft_putchar(table[i]);
			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
