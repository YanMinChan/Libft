#include "libft.h"

static int	ft_trimstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == *set)
			break ;
		i++;
	}
	return (i);
}

static int	ft_trimend(char const *s1, char const *set)
{
	int	j;

	j = (int)ft_strlen(s1) - 1;
	while (s1[j])
	{
		if (s1[j] == *set)
			break ;
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;
	int		k;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = ft_trimstart(s1, set);
	end = ft_trimend(s1, set);
	k = 0;
	if (start >= end)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(*trim) * (end - start + 1));
	if (!trim)
		return (0);
	ft_strlcpy(trim, s1 + start, end - start + 1);
	return (trim);
}
