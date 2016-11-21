#include "libft.h"

void    *ft_memccopy(void *dst, const void *src, int c, size_t n)
{
    size_t          i;
    
    i = -1;
    while (++i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        if (((unsigned char *)dst)[i] == (unsigned char)c)
            return (&dst[i + 1]); 
    }
    return (NULL);
}
