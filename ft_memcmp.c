#include "libft.h"

int ft_memcmp(const void* m1, const void* m2, size_t n)
{
    size_t i;

    i = -1;
    while (++i < n)
        if ((unsigned char *)m1[i] != (unsigned char *)m2[i])
            return ((unsigned char *)m1[i] - (unsigned char *)m2[i]);
    return (0);
}
