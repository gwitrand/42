#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_str_is_alpha(char *str);

int main(void)
{
	char s1[] = "lololdkfijsjfjzzzaaa";
	char s2[] = "lololdkfijsjfjz'zzaaa";

	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d", ft_str_is_alpha(s2));
	return (0);
}