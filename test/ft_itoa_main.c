/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:41 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:18:27 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	int min = (-2147483648);
	int max = 2147483647;
	int rand = -0;

	printf ("MININT : %s\n", ft_itoa(min));
	printf ("MAXINT : +%s\n", ft_itoa(max));
	printf ("Rand : %s\n", ft_itoa(rand));
	return (0);
}