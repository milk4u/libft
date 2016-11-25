/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:15:08 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 16:20:45 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char min[] = "-2147483648";
	char max[] = "2147483647";
	char other[] = "      12345poiut";

	printf ("MININT : %d\n", ft_atoi(min));
	printf ("MAXINT : %d\n", ft_atoi(max));
	printf ("Other : %d\n", ft_atoi(other));
	return (0); 
}
