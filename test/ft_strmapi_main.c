/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:06:04 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:06:06 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	i = -1;
	while (s[++i])
		new[i] = f(i, s[i]);
	return (new);
}

char	toup(unsigned int i, char c)
{
	if (c>= 'a' && c <= 'z' && (i % 2))
		return (c - 'a' + 'A');
	return (c);
}

int		main(void)
{
	char	start[128] = "aaaaaaaaaaaaaaaaaaaaaaa";
	char	*ans;
	void	*f;
	
	f = toup;
	ans = ft_strmapi(start, f);
	printf ("\tstart - %s\n\tans - %s\n", start, ans);
	return(0);
}
