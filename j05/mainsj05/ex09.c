#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char s1[] = "ABCdef";
	printf("%s", ft_strlowcase(s1));
	return (0);
}