/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:35:52 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 19:35:53 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dst[] = "helfogfd";
	char src[] = "fd fdfdf";
	int nb = 3;
	unsigned int entier;
	entier = ft_strlcpy(dst, src, nb);
	printf("src = %s, ", src);
	printf("dst = %s ", dst);
	return (0);
}


