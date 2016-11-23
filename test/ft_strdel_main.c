/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:54:28 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:48:02 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	as = NULL;
}

int		main(void)
{
	char	a;
	void	*p;
	void	**vp;

	a = (char)malloc(sizeof(char));
	a = 50;
	printf ("%d\n", a);
	p = &a;
	vp = &p;
	ft_strdel(p);
	printf ("%d\n", a);
	return (0);
}