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

#include <stdio.h>
#include "libft.h"

char		*ft_strrchr(const char *src, int c)
{
	size_t	lenght;

	lenght = ft_strlen(src);
	while (lenght > 0)
		if (src[--lenght] == c)
			return ((char*)&src[lenght]);
	return (NULL);
}

int		main(void)
{
	char	buff[256] = "darsf7wqei jbcvpcbyagfqw7rt13  yd iugadgad	q as adasd 7134b43247asl";
	
	printf ("%s\n", ft_strrchr(buff, 'q'));
	return (0);
}