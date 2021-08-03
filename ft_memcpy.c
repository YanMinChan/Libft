#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*p1;
	const char	*p2;	

	i = 0;
	p1 = dst;
	p2 = src;
	while ((*p1 || *p2) && i < n)
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
	char dst[] = "Harry Potter and the Goblet of Fire";
	char src[] = "Henry Pottah end tha Gabble of Fiya";
	size_t	n = 7;

	printf("ori dst:%s\n", dst);
	printf("ori:%s\n", memcpy(dst, src, n));
	printf("func:%s\n", ft_memcpy(dst, src, n));
	printf("new dst:%s\n", dst);
}*/
