/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:24 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:57:22 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *m, int c, size_t n)
{
	unsigned char *pointer;

	pointer = (unsigned char*)m;
	while (n--)
	{
		*pointer = c;
		pointer++;
	}
	return (m);
}

int		main(void)
{
	char	buff[128] = "12345678900987654321";
	
	ft_memset(buff, 50, 10);
	printf("%s\n", buff);
	return (0);
}