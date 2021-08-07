#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;	

	i = 0;
	p1 = dst;
	p2 = src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		p1[i] = (char)p2[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *dst = 0;
	char *src = "HELLO";
	size_t	n = 10;

	printf("ori dst:%s\n", dst);
	printf("ori:%s\n", memcpy(dst, src, n));
	printf("func:%s\n", ft_memcpy(dst, src, n));
	printf("new dst:%s\n", dst);
}*/
