#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dstlen;
    size_t  i;

    i = 0;
    dstlen = ft_strlen(dst);
    while (((dstlen + i) < (size - 1)) && src[i] != '\0')
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (dstlen + i);
}
