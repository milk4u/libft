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

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	*arr;
	size_t	len;
	size_t	i;

	len = 10;
	arr = ft_memalloc(len);
	i = -1;
	while (++i < len)
		printf ("%d ", arr[i]);
	return (0);
}
