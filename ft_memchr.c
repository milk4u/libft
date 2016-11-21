/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:20:10 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 14:20:36 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *src, int c, size_t n)
{
    size_t  i;

    i = -1;
    while (++i < n)
    {
        if ((unsigned char *)src[i] == (unsigned char)c)
            return (&src[i]);
    }
    return (NULL);
}
