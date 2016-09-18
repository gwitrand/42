#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[] = "bonjour";
	char s2[] = "bonjour ";
	
	printf("%d\n", strncmp(s2, s1, 40));
	printf("%d\n", ft_strncmp(s2, s1, 40));
	return (0);
}