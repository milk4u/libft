#include "libft.h"

void    *ft_memchr(const void *src, int c, size_t n)
{
    size_t  i;

    i = -1;
    while (++i < n)
    {
        if ((unsigned char *)src[i] == (unsigned char)c)
            return (&src[i]);
    }
    return (NULL);
}
