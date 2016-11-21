#include "libft.h"

char    *ft_itoa(int n)
{
    char    *arr;

    arr = (char *)malloc(sizeof(char) * (sizeof(int) / 3 + 1));
    arr += ft_strlen(arr);
    arr = '\0';
    while ((*--arr = n % 10 + '0') && (n = n / 10))
        ;
    return (arr);
}
