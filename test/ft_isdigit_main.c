/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:19:00 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:26:17 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./%123A*fF4$";
	
	while (*str)
	{
		if (ft_isdigit(*str))
			printf ("Yes, %c is digit\n", *str);
		else
			printf ("No\n");
		str++;
	}
}