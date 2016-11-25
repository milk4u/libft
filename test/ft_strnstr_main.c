/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:03:07 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:03:51 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char big[256] = "12345678900987654321";
	char little[64] = "21";

	printf ("%s\n", ft_strnstr(big, little, 20));
	return (0);
}
