/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:16:03 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:10:55 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

int	main(void)
{
	
	char *str = "ab./%123A*fF4$";
	while (*str)
	{
		if (ft_isalnum(*str))
			printf ("Yes, %c is alnum\n", *str);
		else
			printf ("No\n");
		str++;
	}
	return (0);
}