/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:00:31 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:01:39 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
	{
		if (s2[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char	buff[128] = "1234567890o987654321";
	char	add[64] =   "12345678900987654321";

	printf ("%d\n", ft_strncmp(buff, add, 10));
	return (0);
}