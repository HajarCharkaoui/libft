/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:44:13 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/22 22:40:23 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenofstring(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	long	num;

	len = lenofstring(n);
	num = n;
	itoa = malloc((len + 1) * sizeof(char));
	if (itoa == NULL)
		return (NULL);
	itoa[len] = '\0';
	len--;
	if (num == 0)
		itoa[0] = 48;
	if (num < 0)
	{
		itoa[0] = '-';
		num = (-1) * num;
	}
	while (num != 0)
	{
		itoa[len--] = num % 10 + 48;
		num /= 10;
	}
	return (itoa);
}
