/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:21:55 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 15:11:03 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char tmp[n];

    ft_memcpy(tmp, src, n);
    ft_memcpy(dst, tmp, n);
    return (dst);
}
