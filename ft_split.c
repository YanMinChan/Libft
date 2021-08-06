//#include "libft.h"
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(**arr) * (ft_strlen(s) + 1));
	while (*s)
	{
		arr[i] = (char *)malloc(sizeof(*arr) * (ft_strlen(s) + 1));
		if (*s == c)
		{
			i++;
			j = 0;
		}
		arr[i][j++] = *s++;
	}
	arr[i][j] = '\0';
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	const char s[] = "ABC DEF GHI";
	char	c = ' ';
	char	**arr = ft_split(s, c);

	for(int i = 0; i < 3; i++)
	{
		printf("%s ", arr[i]);
	}
}
