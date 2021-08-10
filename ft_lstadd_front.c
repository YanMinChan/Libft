#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*l = ft_lstnew("heyy");
	t_list	*add = ft_lstnew("ey");

	printf("ori first: %s\n", l->content);
	printf("ori null: %p\n", l->next);
	ft_lstadd_front(&l, add);
	printf("first: %s\n", l->content);
	printf("second: %s\n", l->next->content);
	printf("null: %p\n", l->next->next);
}*/
