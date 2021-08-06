#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (!count || !size)
		return (0);
	p = malloc(count * size);
	ft_bzero(p, (count * size));
	return (p);
}
