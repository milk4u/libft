#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (alst && *alst)
	{
		current = *alst;
		while (current)
		{
			next = current->next;
			del(current->content, current->content_size)
			free(current);
			current = next;
		}
		*alst = NULL;
	}
}