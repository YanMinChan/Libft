#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		next = (*lst)->next;
		*lst = next;
	}
	*lst = 0;
}
