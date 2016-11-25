/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:24:17 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:25:03 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	buff[128];
	char	src[64] = "123456789-098765432asdfghjklzxcvftgb";

	ft_memcpy(buff, src, 10);
	printf ("%s\n", buff);
	return (0);
}
