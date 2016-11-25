/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:50:36 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:44:09 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	buff[128] = "12345678909876543ertyuiokhgfcxzzzlWEAREHEREaseqwecsasd";
	char	*ans;

	ans = ft_strchr(buff, '0');
	printf ("%s\n", ans);
	return (0);
}