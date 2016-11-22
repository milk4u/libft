#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t i;

    if (ft_strlen(s) < start || s == NULL)
        return (NULL);

    if (!(new = ft_strnew(len)))
        return (NULL);
    i = -1;
    while (++i < len && s[i])
        new[i] = s[start + i];
    return (new);
}
