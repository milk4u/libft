#include "libft.h"

void    ft_putstr(char const *s)
{
    size_t i;

    i = -1;
    while (s[++i] != '\0')
        ft_putchar(s[i]);
}
