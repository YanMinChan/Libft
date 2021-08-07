#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	newstr = (char *)malloc(sizeof(*newstr) * (ft_strlen(s) + 1));
	if (!newstr)
		return (0);
	while (s[i])
	{
		newstr[i] = f(i, (char)s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
