#include "libft.h"

static	int	is_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(char const *s)
{
	char	*cp;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (is_space(str[len - 1]) && len-- > 0)
		;
	while (is_space(*s++) && len-- > 0)
		;
	if (!(cp = ft_strnew(len)))
		return (NULL);
	ft_strncpy(cp, s, len);
	return (cp);
}