/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:19:33 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:29:51 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_islower(*str))
			printf ("Yes, %c is lower\n", *str);
		else
			printf ("No\n");
		str++;
	}
}
