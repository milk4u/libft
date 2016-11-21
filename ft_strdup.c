#include "libft.h"

char    *ft_strdup(const char *str)
{
    char *tmp;

    if !(tmp = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1)))
        return (NULL):    
    ft_strcpy(temp, str);
    return (str);
}
