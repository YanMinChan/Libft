int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isalnum(48));
	printf("%d\n", isalnum(60));
	printf("%d\n", isalnum(70));
	printf("%d\n", isalnum(95));
	printf("%d\n", ft_isalnum(48));
	printf("%d\n", ft_isalnum(60));
	printf("%d\n", ft_isalnum(70));
	printf("%d\n", ft_isalnum(95));
}*/
