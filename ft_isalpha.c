int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/*
//input is ascii of alpha
   
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isalpha(65));
	printf("%d\n", isalpha(90));
	printf("%d\n", isalpha(95));
	printf("%d\n", isalpha(122));
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", ft_isalpha(90));
	printf("%d\n", ft_isalpha(95));
	printf("%d\n", ft_isalpha(122));
}*/
