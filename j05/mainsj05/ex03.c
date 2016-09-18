#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char s1[] = "abcdef";
	char s2[] = "Ce message doit s'afficher correctement";
	
	ft_strcpy(s1, s2);
	printf("s1=%s  s2=%s\n", s1, s2);
	printf("%s\n", ft_strcpy(s1, s2));
	return (0);
}