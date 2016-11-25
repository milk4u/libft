/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:59:34 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:00:55 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	toup(char *c)
{
	if (*c>= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';	
}

int		main(void)
{
	char tmp[128] = "AbcdeFFFFFgh23456789098765432abs";
	void *f;

	f = &toup;
	ft_striter(tmp, f);
	printf ("%s\n", tmp);
	return (0);
}