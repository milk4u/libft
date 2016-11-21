#include "libft.h"

int strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i])
        if (s2[i++] == '\0')
            return (0);
    return (s1[i] - s2[i]);
}
