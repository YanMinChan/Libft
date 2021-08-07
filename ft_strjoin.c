#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tlen;
	char	*newstr;

	tlen = (int)(ft_strlen(s1) + ft_strlen(s2));
	newstr = (char *)malloc(sizeof(newstr) * (tlen + 1));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, (size_t)(tlen + 1));
	return (newstr);
}

//check if "" work for both strlcpy and strlcat
