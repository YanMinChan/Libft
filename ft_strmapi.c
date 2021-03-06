#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (!s || !f)
		return (newstr = 0);
	i = 0;
	newstr = ft_strdup(s);
	if (!newstr)
		return (newstr = 0);
	while (s[i])
	{
		newstr[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (newstr);
}
