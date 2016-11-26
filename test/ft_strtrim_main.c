#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char buff[256] = "sd ";
	char *ans;

	ans = ft_strtrim(buff);
	printf("%s\n", ans);
	return (0);
}