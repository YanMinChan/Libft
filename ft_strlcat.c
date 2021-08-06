#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (i < dstsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (src_len + dst_len);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[30] = "";
	char	src[] = "";
	size_t	n = 4;

	printf("%zu\n", strlcat(dst, src, n));
	printf("%s\n", dst);
}*/
