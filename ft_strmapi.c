#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	newstr = ft_strdup(s);
	if (!newstr)
		return (newstr = NULL);
	while (s[i])
	{
		newstr[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (newstr);
}
