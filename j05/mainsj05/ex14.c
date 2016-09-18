#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	char s1[] = "FDGHGFHDGHFGD";
	char s2[] = "FDHJFHJDHjdfhjdfHJFJDH";
	char s3[] = "DFJHDFH145";
	char s4[] = "";

	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d\n", ft_str_is_uppercase(s2));
	printf("%d\n", ft_str_is_uppercase(s3));
	printf("%d\n", ft_str_is_uppercase(s4));
	return (0);
}