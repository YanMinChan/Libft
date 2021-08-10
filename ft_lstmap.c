#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*store;

	if (!lst || !f)
		return (0);
	nlst = 0;
	while (lst)
	{
		store = ft_lstnew((*f)(lst->content));
		if (!store)
		{
			ft_lstclear(&nlst, del);
			return (0);
		}
		ft_lstadd_back(&nlst, store);
		lst = lst->next;
	}
	return (nlst);
}
