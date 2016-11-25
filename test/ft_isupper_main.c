/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:26:27 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:41:36 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_isupper(*str))
			printf ("Yes, %c is upper\n", *str);
		else
			printf ("No\n");
		str++;
	}
}
