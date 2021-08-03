int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ori:%c func:%c\n", toupper('a'), ft_toupper('a'));
	printf("ori:%c func:%c\n", toupper('A'), ft_toupper('A'));
	printf("ori:%c func:%c\n", toupper('.'), ft_toupper('.'));
	printf("ori:%c func:%c\n", toupper(100), ft_toupper(100));
}*/
