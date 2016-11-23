/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:24:17 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:25:03 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}

int		main(void)
{
	char	buff[128];
	char	src[64] = "123456789-098765432asdfghjklzxcvftgb";

	ft_memcpy(buff, src, 10);
	printf ("%s\n", buff);
	return (0);
}