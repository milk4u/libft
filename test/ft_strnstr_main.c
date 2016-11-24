/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:03:07 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:03:51 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char*)&s1[0]);
	while ((s1[i] != '\0') && (i < n))
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && s1[i + j] && i + j < n)
			j++;
		if (s2[j] == '\0')
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char big[256] = "12345678900987654321";
	char little[64] = "21";

	printf ("%s\n", ft_strnstr(big, little, 20));
	return (0);
}
