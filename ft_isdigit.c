int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
//input is ascii of digit

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", isdigit(48));
	printf("%d\n", isdigit(49));
	printf("%d\n", isdigit(57));
	printf("%d\n", isdigit(60));
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit(49));
	printf("%d\n", ft_isdigit(57));
	printf("%d\n", ft_isdigit(60));
}*/
