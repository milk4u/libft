/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:41 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:18:27 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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

int		main(void)
{
	int min = -2147483648;
	int max = 2147483647;
	int rand = 0;

	printf ("MININT : %s\n", ft_itoa(min));
	printf ("MAXINT : %s\n", ft_itoa(max));
	printf ("Rand : %s\n", ft_itoa(rand));
	return (0);
}