#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	ar s1[] = "Salut je m'appelle Theo.";
	char s2[] = "je";

	printf("%s", ft_strstr(s1, s2));
	printf("%s", strstr(s1, s2));
	return (0);
}