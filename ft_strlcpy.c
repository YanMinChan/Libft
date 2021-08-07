#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (i < ((int)dstsize - 1) && src[i] && dstsize)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello Hello";
	char	dest[30];
	unsigned int	size = 0;

	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/
