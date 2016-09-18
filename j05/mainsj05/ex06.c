#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(const char *s1, const char *s2);

int main(void)
{
	char s1[] = "bonjour";
	char s2[] = "bonjour ";

	printf("%d", ft_strcmp(s2, s1));
	return (0);
}