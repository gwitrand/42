/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:53:03 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 11:53:04 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char src[50], dest[50];

    strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	
	printf("Final destination string : |%s|\n", strncat(dest, src, 4));

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	printf("Final destination string : |%s|\n", ft_strncat(dest, src, 4));
}
