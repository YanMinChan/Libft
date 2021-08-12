#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len < ft_strlen(s) - start)
		sub = (char *)malloc(sizeof(char) * len + 1);
	else
		sub = (char *)malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	if (!sub)
		return (sub = 0);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char const	s[] = "\0";

	printf("%s %p\n", ft_substr(s, 10, 10), ft_substr(s, 10, 10));
	printf("%p\n", s);
}*/
