#include "libft.h"

char    *ft_strmap(const char *s, char (*f)(char))
{
    char *new;
    size_t i;
    
    if (!s && !f)
        return (NULL)
    new = ft_strnew(ft_strlen(s));
    i = -1;
    while (s[++i])
        new[i] = f(s[i]);
    return (new);
}
