#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_printable(char *str);

int main(void)
{
	char s1[] = "FDGHdfhdf9090()()^^^^$$%";
	char s2[] = "FDHJFHJDHjdf\vhjdfHJ";
	char s3[] = "DFJHDFH145";
	char s4[] = "";

	printf("%d\n", ft_str_is_printable(s1));
	printf("%d\n", ft_str_is_printable(s2));
	printf("%d\n", ft_str_is_printable(s3));
	printf("%d\n", ft_str_is_printable(s4));
	return (0);
}