#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char s1[] = "salut,comment tu vas?42motsquarante-deux;cinquante+et+un";
	printf("%s", ft_strcapitalize(s1));
	return (0);
}