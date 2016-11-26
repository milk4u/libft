#include "libft.h"

static size_t   ft_cwords(const char *s, char sep)
{
    size_t  cwords;

    cwords = 0;
    while (*s)
    {
        if (*s != sep)
        {
            cwords++;
            while (*s != sep && *s)
                s++;
            if (*s == '\0')
                break ;
        }
        s++;
    }
    return (cwords);
}

static size_t   ft_clenght(const char *s, char sep)
{
    size_t  clenght;

    clenght = 0;
    while (*s != sep && *s)
    {
        clenght++;
        s++;
    }
    return (clenght);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **ans;
    size_t  cc;
    size_t  i;

    if (!s)
        return (NULL);
    if(!(ans = (char**)ft_strnew(ft_cwords(s, c))))
        return (NULL);
    i = 0;
    while (*s != '\0')
    {
        if (*s != c)
        {
            cc = ft_clenght(s, c);
            ans[i] = ft_strnew(cc);
            ft_strncpy(ans[i++], s, cc);
            s += cc;
        }
        s++;
    }
    ans[i] = '\0';
    return (ans);
}