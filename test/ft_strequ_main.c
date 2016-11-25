/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apisotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:58:58 by apisotsk          #+#    #+#             */
/*   Updated: 2016/11/22 13:59:13 by apisotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	test[100] = "1234567890";
	char	test2[100] = "asdfghjkl;";
	char	test3[100] = "";
	char	test4[100];

	if (ft_strequ(test, test2))
		printf ("F*ck you\n");
	if (ft_strequ(test, test3))
		printf ("F*ck you\n");
	if (ft_strequ(test, test4))
		printf ("F*ck you\n");
	if (ft_strequ(test2, test3))
		printf ("F*ck you\n");
	if (ft_strequ(test2, test4))
		printf ("F*ck you\n");
	if (ft_strequ(test3, test4))
		printf ("F*ck me\n");
	if (ft_strequ(test3, test3))
		printf ("F*ck me\n");
	if (ft_strequ(test4, test4))
		printf ("F*ck me\n");
	if (ft_strequ(test2, test2))
		printf ("F*ck me\n");
}