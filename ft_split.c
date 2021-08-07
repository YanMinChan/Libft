#include <stdlib.h>

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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(*arr) * (ft_wrdnbr(s, c) + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s != c)
		{
			arr[i] = (char *)malloc(sizeof(arr) * (ft_wrdlen(s, c) + 1));
			if (!arr[i])
				break ;
			ft_strlcpy(arr[i], s, ft_wrdlen(s, c) + 1);
			s += ft_wrdlen(s, c);
			i++;
		}
	}
	arr[i] = 0;
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	const char *s = "      Hello      its me leh eh      ";
	char	c = ' ';

	while (*s)
	{
	   if (*s == c)
		   s++;
	   if (*s != c)
	   {
		   printf("%d\n", ft_wrdlen(s, c));
		   s += ft_wrdlen(s, c);
	   }
	}
}

int	main(void)
{
	const char *s = "Hello its me";
	char	c = ' ';
	char	**arr;

	arr = ft_split(s, c);
	for(int i = 0; i < ft_wrdnbr(s, c); i++)
		printf("%s    ", arr[i]);
}*/
