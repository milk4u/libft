#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] == s2[i]) && (i < n))
    {
        if (s2[i] == '\0')
            return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}
