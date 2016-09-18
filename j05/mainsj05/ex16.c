#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src);

int main(void)
{
	char src[50], dest[50];

    strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	
	printf("Final destination string : |%s|\n", strcat(dest, src));

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	printf("Final destination string : |%s|\n", ft_strcat(dest, src));
	return (0);
}