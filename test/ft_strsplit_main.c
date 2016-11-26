#include "../libft.h"
#include <stdio.h>

int main(void)
{
	 size_t	i;
	char	**ans;
	char	buff[256] = "123***321***456***";

	i = -1;
	ans = ft_strsplit(buff, '1');
	while (*ans != '\0')
	{
	 	ft_putstr(*ans);
	 	ft_putchar('\n');
		ans++;
	}
	return (0);
}