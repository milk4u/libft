#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *m;

    if !(m = malloc(size))
        return (NULL);
    ft_memset(mem, 0, size);
    return (m);
}
