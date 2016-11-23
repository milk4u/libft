/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:20:50 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:10:27 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int			ft_memcmp(const void *m1, const void *m2, size_t n)
{
	size_t	i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char*)m1;
	tmp2 = (unsigned char*)m2;
	i = -1;
	while (++i < n)
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
	return (0);
}

int			main(void)
{
	char	buff1[16] = "1234567890";
	char	buff2[16] = "123456090-"; 
	int		p;
	
	p = ft_memcmp(buff1, buff2, 10);
	printf ("%d\n", p);
	return (0); 
}