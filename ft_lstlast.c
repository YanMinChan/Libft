#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*l = ft_lstnew("ehh");
	t_list	*last = ft_lstnew("what time");
	t_list	*ret;

	ft_lstadd_front(&last, l);
	ret = ft_lstlast(last);
	printf("%s\n", ret->content);
}*/
