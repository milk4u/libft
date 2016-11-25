/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:01:48 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:01:22 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dst[i] = src[i];
		i++;
	}
	while (i++ < n)
		dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char	buff[256];
	char	*src = "jadskjhadhqwuoehjaahsdpyah\n";

	ft_strncpy(buff, src, 0);
	printf("%s\n", buff);
	return (0);
}