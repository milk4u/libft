/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:28:14 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:42:13 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isxdigit(int c)
{
	return (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'f'))
			|| ((c >= 'A') && (c <= 'F')));
}

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_isxdigit(*str))
			printf ("Yes, %c is Xdigit\n", *str);
		else
			printf ("No\n");
		str++;
	}
}
