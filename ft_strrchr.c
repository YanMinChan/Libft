static int	ft_charcnt(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	j;
	int	cnt;

	j = ft_charcnt(s, c);
	cnt = 0;
	while (*s)
	{
		if (*s == c)
		{
			cnt++;
			if (j == cnt)
				return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "I don't know what's happening!";
	char c = 'P';

	printf("ori:%s func:%s\n", strrchr(str, c), ft_strrchr(str, c));
}*/
