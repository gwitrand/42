#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_numeric(char *str); 
int main(void)
{
	char s1[] = "02154563151";
	char s2[] = "15554564\\454";
	char s3[] = "";

	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d\n", ft_str_is_numeric(s2));
	printf("%d", ft_str_is_numeric(s3));
	return (0);
}