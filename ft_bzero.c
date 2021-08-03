#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
		p[i++] = '\0';
}

/*#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	pass[] = "This is my password.";

	printf("%s\n", pass);
	bzero(pass + 4, 5);
//	ft_bzero(pass + 4, 5);
	printf("%s . . \n", pass + 8);
	printf("%s . . \n", pass + 9);
}*/
