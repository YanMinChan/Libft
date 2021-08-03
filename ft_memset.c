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

int	main(void)
{
	char str[] = "Hello welcome to core programme.";

	printf("ori:%s\n", memset(str, '.', 3*sizeof(char)));
	printf("func:%s\n", ft_memset(str, '.', 3*sizeof(char)));
}*/
