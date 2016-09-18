#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char s1[] = "abcdef";
	char s2[8];

	ft_strncpy(s2, s1, 3);
	

	int i = 0;
	while (i <= 8)
	{
		printf("i=%d s2[i]=%x\n", i, s2[i]);

		i++;
	}
	return (0);
}