#include "libft.h"

char    *ft_strncat(char *dst, const char *src, size_t n)
{
    size_t  dstlen;
    size_t  i;

    i = -1;
    dstlen = ft_strlen(dst);
    while((++i < n) && (src[i] != '\0'))
        dst[dstlen + i] = src[i];
    dst[dstlen + i] = '\0';
    return (dest);
}
