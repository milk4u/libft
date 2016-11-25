/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:02:48 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:02:50 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	*dst = ft_strnew(256);
	ft_strcpy(dst, "123"); 
	char	src[128] = "123asdasdasdasdadasd";

	printf ("%zu, - %s\n", ft_strlcat(dst, src, 1), dst);
	return(0);
}