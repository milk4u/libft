/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:19:57 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:41:17 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *str = "ab./\n%12\t3A* fF4$";
	
	while (*str)
	{
		if (ft_isspace(*str))
			printf ("Yes, %c is space\n", *str);
		else
			printf ("No\n");
		str++;
	}
}