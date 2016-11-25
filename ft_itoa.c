/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:41 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/24 20:35:13 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
		{
			size++;
			n /= 10;
		}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*arr;
	char	sign;

	sign = n >= 0 ? 0 : 1;
	if (!(arr = ft_strnew(get_size(n))))
		return (0);
	arr += ft_strlen(arr);
	*arr = '\0';
	if (n == 0)
		*--arr = '0';
	while (n != 0)
	{
		if (n > 0)
			*--arr = n % 10 + '0';
		if (n < 0)
			*--arr = ':' - (10 + (n % 10));
		n /= 10;
	}
	if (sign)
		*--arr = '-';
	return (arr);
}
