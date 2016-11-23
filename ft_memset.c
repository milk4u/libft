/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:24 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/23 18:23:52 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
