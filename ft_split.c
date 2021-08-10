#include "libft.h"

//function to count how many word//
//function to extract word
//function to count wordlen
//malloc to assign mem
//put word to arr

static int	ft_wrdnbr(char const *s, char c)
{
	int	wrdnbr;

	if (!s)
		return (0);
	wrdnbr = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			wrdnbr++;
			while (*s && *s == c)
				s++;
			continue ;
		}
		s++;
	}
	if (*(s - 1) != c)
		wrdnbr++;
	return (wrdnbr);
}

static int	ft_wrdlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_alloc_arr(char const *s, char c, char **arr)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			arr[i] = (char *)malloc(sizeof(arr) * ft_wrdlen(s, c) + 1);
			if (!arr[i] || !ft_wrdlen(s, c))
				break ;
			ft_strlcpy(arr[i], s, ft_wrdlen(s, c) + 1);
			s += ft_wrdlen(s, c);
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (arr = 0);
	arr = (char **)malloc(sizeof(*arr) * ft_wrdnbr(s, c) + 1);
	if (!arr)
		return (arr = 0);
	ft_alloc_arr(s, c, arr);
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	const char *s = "split  this for me !";
	char	c = ' ';
	char	**arr;

	arr = ft_split(s, c);
	for(int i = 0; i < 6; i++)
		printf("|%s|", arr[i]);
}*/
