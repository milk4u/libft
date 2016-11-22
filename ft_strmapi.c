#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *new;

    if (!s || !f)
        return (NULL);
    new = ft_strnew(ft_strlen(s));
    i = -1;
    while (s[++i])
        new[i] = f(i, s[i]);
    return (new);
}
