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

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
		while (*s)
			f(i++, s++);
}

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