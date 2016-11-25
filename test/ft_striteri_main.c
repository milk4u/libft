/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:00:13 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:01:03 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	toup(unsigned int q,char *c)
{
	if (*c>= 'a' && *c <= 'z' && (q % 2))
		*c = *c - 'a' + 'A';
	else
		if (*c>= 'A' && *c <= 'Z')
			*c = *c - 'A' + 'a';
}

int		main(void)
{
	char tmp[128] = "AbcdeFFFFFgh23456789098765432abs";
	void *f;

	f = &toup;
	ft_striteri(tmp, f);
	printf ("%s\n", tmp);
	return (0);
}