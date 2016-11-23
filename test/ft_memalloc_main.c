/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:54 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 17:18:31 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if (!(m = malloc(size)))
		return (NULL);
	ft_memset(m, 0, size);
	return (m);
}

int	main(void)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = 10;
	p = ft_memalloc(len);
	i = -1;
	while (++i < len)
		p[i] = i + '0';
	printf ("%s\n", p);
}
