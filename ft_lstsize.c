#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list) * 3);
	t->content = "heyy";
	t->next = 0;
	printf("%d\n", ft_lstsize(t));
}*/
