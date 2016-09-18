/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:51:48 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/11 19:52:06 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	match(char *a, char *b);

int	main(void)
{
	char a[100];
	char b[100];

	strcpy(a, "est");
	strcpy(b, "t");
	printf("%s, %s: %i\n", a, b, match(a, b));
	strcpy(a, "test");
	strcpy(b, "*t");
	printf("%s, %s: %i\n", a, b, match(a, b));
	strcpy(a, "test");
	strcpy(b, "*t*");
	printf("%s, %s: %i\n", a, b, match(a, b));
	strcpy(a, "test");
	strcpy(b, "*test*");
	printf("%s, %s: %i\n", a, b, match(a, b));
}
