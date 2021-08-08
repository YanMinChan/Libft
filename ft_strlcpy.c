#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (src_len);
	while (i < dstsize && src[i])
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
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
