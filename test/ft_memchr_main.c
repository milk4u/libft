/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:20:10 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:23:48 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void		*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char*)src;
	i = -1;
	while (++i < n)
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
	return (NULL);
}

int			main(void)
{
	char	buff[128];
	void	*p;
	
	p = buff;
	for(int i = 0; i < 128; i++)
		buff[i] = 32 + (i % 64);
	p = ft_memchr(buff, '9', 50);
	printf ("%p\n%p\n", p, &buff[16]);
	return (0); 
}
