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
#define SIZE 12

char	*ft_itoa(int n)
{
	char	*arr;

	arr = ft_strnew(SIZE);
	arr += ft_strlen(arr);
	*arr = '\0';
	while (n > 0)
	{
		*--arr = n % 10 + '0';
		n /= 10;
	}
	return (arr);
}
