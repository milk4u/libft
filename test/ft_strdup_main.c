/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:54:43 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:54:13 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	ft_strcpy(tmp, str);
	return (tmp);
}

int		main(void)
{
	char	*str1 = "";
	char	*str2 = "asd";
	char	*str3 = NULL;
	char 	*ans;

	ans = ft_strdup(str1);
	printf ("%s\n", ans);
	ans = ft_strdup(str2);
	printf ("%s\n", ans);
	ans = ft_strdup(str3);
	printf ("%s\n", ans);
	return (0);
}