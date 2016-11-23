/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:52:53 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:44:37 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strclr(char *str)
{
	if (str)
		ft_bzero(str, ft_strlen(str));
}

int		main(void)
{
	char	buff[128] = "1234567890§12345678908bafhdayvas0";

	ft_strclr(buff);
	printf ("%s\n", buff);
	return (0);
}