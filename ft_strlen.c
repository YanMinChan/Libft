#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("ori:%lu func:%lu\n", strlen("Hello"), ft_strlen("Hello"));
}*/
