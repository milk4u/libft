/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:30:17 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:30:19 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}

int	main(void)
{
	char *str = "ab./%123A*fF4$\n\n\n\n";
	
	while (*str)
	{
		if (ft_isprint(*str))
			printf ("Yes, %c is print\n", *str);
		else
			printf ("No\n");
		str++;
	}
}