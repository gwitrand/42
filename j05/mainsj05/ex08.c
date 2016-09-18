#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char s1[] = "abcDef";
	printf("%s", ft_strupcase(s1));
	return (0);
}