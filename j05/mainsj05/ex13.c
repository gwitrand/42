#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_lowercase(char *str);

int main(void)
{
	char s1[] = "dshdhsazazsjd";
	char s2[] = "fdsfdsazazZAZAZfdsf";
	char s3[] = "54455454SDSDAZAfdkodk";
	char s4[] = "";

	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
	printf("%d\n", ft_str_is_lowercase(s4));
	return (0);
}