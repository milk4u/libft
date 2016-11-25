/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:49:20 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:43:26 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	buff[128] = "1234567890";
	char	add[128] = "abcdefghijk";

	ft_strcat(buff, add);
	printf ("%s\n", buff);
	return (0);
}
