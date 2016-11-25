/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:16:40 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:25:00 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_isascii(*str))
			printf ("Yes, %c is ascii\n", *str);
		else
			printf ("No\n");
		str++;
	}
}
