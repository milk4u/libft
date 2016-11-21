#include "libft.h"

char    *ft_strchr(char *str, int c)
{
    while (*str++ != c)
        if (*str == '\0')
            return (NULL);
    return (&str[size]);
}
