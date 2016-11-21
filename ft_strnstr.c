#include "libft.a"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (s2[0] == '\0')
        return ((char*)s1[0]);
    while ((s1[i] != '\0') && (i < n))
    {
        j = 0;
        while (s1[i + j] = s2[j] && s2[j] && s1[i + j] && i + j < n)
            j++;
        if (s2[j] == '\0')
            return ((char*)s1[i]);
        i++;
    }
    return (NULL);
}
