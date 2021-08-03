#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = b;
	i = 0;
	while (i < len)
		p[i++] = c;
	return (b);
}

/*#include <stdio.h>
#include <string.h>

// will not work if len bytes exceed *b (overflow buffer)
int	main(void)
{
	char str[] = "Welcome to Hogwarts!";

	printf("ori:%s\n", memset(str, '.', 8*sizeof(char)));
	printf("func:%s\n", ft_memset(str, '.', 8*sizeof(char)));
}*/
