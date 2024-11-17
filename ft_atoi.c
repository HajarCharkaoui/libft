/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:28:10 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/15 18:57:32 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int		i;
	long	nbr;
	int		sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		if (nbr > LONG_MAX && sign == 1)
			return (-1);
		if (nbr > LONG_MAX && sign == -1)
			return (0);
		i++;
	}
	return ((int)(nbr * sign));
}

// #include <stdio.h>
// int main()
// {
// 	const char nbr[] = "9223372036854775807998";

// 	printf("%d\n", ft_atoi(nbr));
// 	printf("%d", atoi(nbr));
// 	return (0);
// }
