#include "libft.a"

char    *ft_strstr(const char *s1, const char *s2)
{
    size_t i;
    size_t j;

    i = -1;
    if (s2[0] == '\0')
        return ((char*)s1[0]);
    while (s1[++i] != '\0')
    {
        j = 0;
        while ((s1[i + j] = s2[j]) && (s2[j] != '\0'))
            j++;
        if (s2[j] == '\0')
            return ((char*)s1[i]);
    }
    return (NULL);
}
