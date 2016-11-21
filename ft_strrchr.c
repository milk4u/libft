/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:07:25 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 15:07:38 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *src, int c)
{
    size_t lenght;

    lenght = ft_strlen(src);
    while (--lenght >= 0)
        if (src[lenght] == c)
            return (&src[lenght]);
    return (NULL);
}
