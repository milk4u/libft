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
#define SIZE 12

char	*ft_itoa(int n)
{
	char	*arr;
	char	sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	arr = ft_strnew(SIZE);
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
