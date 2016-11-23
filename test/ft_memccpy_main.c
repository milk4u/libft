/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:16:40 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:22:22 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		*ft_memccopy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char *)dst)[i] == (unsigned char)c)
			return (&dst[i + 1]);
	}
	return (NULL);
}

int			main(void)
{
	char p1[] = "ABCDEFG";
	char p2[] = "1234567";
	void *vp1 = p1;
	void *vp2 = p2;
	size_t size = 5;

	ft_memccopy(vp1, vp2, '0', size);
	printf ("%s\n", p1);
	return (0);
}
