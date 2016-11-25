/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:16:59 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:25:27 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./%123A*fF4$\t\n\v\r\0";
	
	while (*str)
	{
		if (ft_iscntrl(*str))
			printf ("Yes, %c is cntrl\n", *str);
		else
			printf ("No\n");
		str++;
	}
}