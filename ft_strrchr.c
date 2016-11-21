#include "libft.h"

char    *ft_strrchr(const char *src, int c)
{
    size_t lenght;

    lenght = ft_strlen(src);
    while (--lenght >= 0)
        if (src[lenght] == c)
            return (&src[lenght]);
    return (NULL);
}
