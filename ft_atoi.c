/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:21 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/26 16:49:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	ft_atoi(const char *str)
{
	int i;
    int d;

	i = 0;
    d = 1;

	while (str[i] == '\0')
        str++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
        else if (str[i] >= '0' && str[i] <= '9')
        {
            return (str >= '0' && str <= '9');
            i++;
        }
		else
	return (0);
}

int	main(void)
{
	const char str[] = " 42BKK";

	printf ("%d\n", ft_atoi(str));
	return (0);
}