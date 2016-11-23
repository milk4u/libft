/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:15:22 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:10:45 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

int		main(void)
{
	char tmp[] = "123456789";
	void *s = &tmp[5];

	ft_bzero(s, 1);
	printf ("%s\n", tmp);
	return (0);
}