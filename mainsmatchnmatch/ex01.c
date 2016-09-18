/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 15:15:53 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/11 19:52:48 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	nmatch(char *a, char *b);

int	main(void)
{
	char a[100];
	char b[100];

	strcpy(a, "est");
	strcpy(b, "t");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "test");
	strcpy(b, "*t");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "test");
	strcpy(b, "*t*");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "test");
	strcpy(b, "*test*");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "abcbd");
	strcpy(b, "*b*");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "abc");
	strcpy(b, "a**");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));

	strcpy(a, "abababababababababababababababababababababababababababababababababababab");
	strcpy(b, "a**");
	printf("%s, %s: %i\n", a, b, nmatch(a, b));
}
