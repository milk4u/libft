#include "libft.h"

void    ft_putstr_fd(char const *s, int fd)
{
    size_t i;

    i = -1;
    while (s[++i] != '\0')
        ft_putchar_fd(s[i], fd);
}
