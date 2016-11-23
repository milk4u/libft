/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:46:36 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:46:54 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		if (s2[i++] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *s1 = "111";
	char *s2 = "1";

	printf ("%d\n", ft_strcmp(s1, s2));
	printf ("%d\n", strcmp(s1, s2));
	return (0);
}