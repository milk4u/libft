/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:19:16 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:26:38 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isgraph(int c)
{
	return ((c >= 33) && (c <= 126));
}

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_isgraph(*str))
			printf ("Yes, %c is graph\n", *str);
		else
			printf ("No\n");
		str++;
	}
}
