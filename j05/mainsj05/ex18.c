/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:58:34 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 11:58:42 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dst[] = "helfogfd";
	char src[] = "fd fdfdf";
	int nb = 3;
	unsigned int entier;
	entier = ft_strlcat(dst, src, nb);
	printf("%u, ", entier);
	printf("src = %s, ", src);
	printf("dst = %s ", dst);
	return (0);
}

