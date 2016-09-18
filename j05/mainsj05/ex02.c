#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str);

int main(void)
{
	char  *s;
	s = " aa 23 aa";
	printf("string: %s  | ft_atoi: %d | atoi: %d\n", s, ft_atoi(s), atoi(s));
	
	s = " -158 -23";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "abc 22 abc";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "abc 22 abc";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "2147483647";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "-2147483648";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "0";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));

	s = "1";
	printf("string: %s  | ft_atoi: %d  | atoi: %d\n", s, ft_atoi(s), atoi(s));
	return (0);
}