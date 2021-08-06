#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (!sub)
		return (0);
	while (s[start + i] && i < len)
	{
		sub[i] = (char)s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char const	s[] = "What am I doing";

	printf("%s %p\n", ft_substr(s, 5, 100), ft_substr(s, 5, 100));
	printf("%p\n", s);
}*/
