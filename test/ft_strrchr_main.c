/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:07:25 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:04:49 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	buff[256] = "darsf7wqei jbcvpcbyagfqw7rt13  yd iugadgad	q as adasd 7134b43247asl";
	
	printf ("%s\n", ft_strrchr(buff, 'q'));
	return (0);
}