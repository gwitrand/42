/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:09:35 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/06 21:09:37 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*table;
	int		i;

	table = argv[0];
	i = 0;
	if (argc != 0)
	{
		while (table[i])
		{
			ft_putchar(table[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
