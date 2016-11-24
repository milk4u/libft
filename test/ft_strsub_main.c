/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:06:05 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:06:56 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (ft_strlen(s) < start || s == NULL)
		return (NULL);
	if (!(new = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len && s[i])
		new[i] = s[start + i];
	return (new);
}

int		main(void)
{
	char	tmp[256] = "111222333444555666777888999000";

	printf ("%s\n", ft_strsub(tmp, 10, 1));
	return (0);
}