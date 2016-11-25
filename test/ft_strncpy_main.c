/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:01:48 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 15:01:22 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	buff[256];
	char	*src = "jadskjhadhqwuoehjaahsdpyah\n";

	ft_strncpy(buff, src, 0);
	printf("%s\n", buff);
	return (0);
}