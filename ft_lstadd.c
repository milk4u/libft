#include "libft.h"

void    ft_listadd(t_list **lst, t_list *new)
{
    if (lst && *lst && new)
    {
        new->next = *lst;
        *lst = mew;
    }    
}