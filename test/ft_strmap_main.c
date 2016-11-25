/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:04:55 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 14:05:14 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	toup(char c)
{
	if (c>= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int		main(void)
{
	char	start[128] = "abcdefgHIGKLMNOpqrstuvWXYZ";
	char	*ans;
	void	*f;
	
	f = toup;
	ans = ft_strmap(start, f);
	printf ("\tstart - %s\n\tans - %s\n", start, ans);
	return(0);
}