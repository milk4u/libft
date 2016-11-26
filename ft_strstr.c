/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:07:51 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:05:47 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	if (s2[0] == '\0')
		return ((char*)&s1[0]);
	while (s1[++i] != '\0')
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && (s2[j] != '\0'))
			j++;
		if (s2[j] == '\0')
			return ((char*)&s1[i]);
	}
	return (NULL);
}