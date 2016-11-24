/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:58:01 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 17:17:35 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int		main(void)
{
	char	s1[] = "1234567890";
	char	s2[] = "";
	char	s3[20];
	char	s4[] = "abcdefg8";

	printf ("%zu %zu %zu %zu\n", ft_strlen(s1), ft_strlen(s2), ft_strlen(s3), ft_strlen(s4));

	return(0);
}