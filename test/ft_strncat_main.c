/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:59:39 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:30:53 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dstlen;
	size_t	i;

	i = -1;
	dstlen = ft_strlen(dst);
	while ((++i < n) && (src[i] != '\0'))
		dst[dstlen + i] = src[i];
	dst[dstlen + i] = '\0';
	return (dst);
}

int		main(void)
{
	char	buff[128] = "START VALUE ";
	char	add[64] = "12345678900987654321";

	ft_strncat(buff, add, 1000);
	printf ("%s\n", buff);
	return (0);
}