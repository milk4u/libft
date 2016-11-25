/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:53:56 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:47:28 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char buff[256] = "ababanogupolamala";
	char add[128] = "some shit :)";

	ft_strcpy(buff, add);
	printf ("%s\n", buff);
	return (0);
}