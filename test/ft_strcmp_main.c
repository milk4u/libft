/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:46:36 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:46:54 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *s1 = "111";
	char *s2 = "1";

	printf ("%d\n", ft_strcmp(s1, s2));
	printf ("%d\n", strcmp(s1, s2));
	return (0);
}