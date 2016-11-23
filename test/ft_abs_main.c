/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:14:53 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:10:34 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_abs(int num)
{
	return ((num > 0) ? (num) : (-num));
}

int	main(void)
{
	if (ft_abs(-3))
		printf ("Yea\n");
	if (!(ft_abs(0)))
		printf ("Yea\n");
	if (ft_abs(2))
		printf ("Yea\n");
	return (0);	
}