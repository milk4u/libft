/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:15:41 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/21 14:15:44 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define SIZE 12 

char    *ft_itoa(int n)
{
    char    *arr;

    arr = (char *)malloc(sizeof(char) * SIZE);
    arr += ft_strlen(arr);
    arr = '\0';
    while ((*--arr = n % 10 + '0') && (n = n / 10))
        ;
    return (arr);
}
