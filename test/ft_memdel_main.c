/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:21:28 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:25:30 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	int		a;
	void	*p;
	void	**vp;

	a = (int)malloc(sizeof(int));
	a = 32;
	printf ("%d\n", a);
	p = &a;
	vp = &p;
	ft_memdel(p);
	printf ("%d\n", a);
	return (0);
}