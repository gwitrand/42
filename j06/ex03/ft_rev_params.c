/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 22:25:26 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/06 22:25:28 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*table;
	int		i;
	int		j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		table = argv[j];
		while (table[i])
		{
			ft_putchar(table[i]);
			i++;
		}
		j--;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
