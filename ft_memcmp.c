#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello it's me";
	char s2[] = "Hello it's me";
	size_t	n = 0;

	printf("ori:%d\n", memcmp(s1, s2, n));
	printf("func:%d\n", ft_memcmp(s1, s2, n));
}*/
