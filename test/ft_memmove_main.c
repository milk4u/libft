/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:21:55 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:26:40 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	
	i = -1;
	if (dst < src)
		while (++i < n)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	else
		while (++i < n)
			((unsigned char*)dst)[n - i - 1] = ((unsigned char*)src)[n - i -1];
	return (dst);
}

int		main(void)
{
	char	first[255] = "1234567890098765432111111111122222222223333333333";
	//void	*p = &first[7];

	ft_memmove(first, &first[20], 20);
	printf ("%s\n", first);
	return (0);
}
