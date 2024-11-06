/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:44:13 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/06 15:44:00 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenofstring(int n)
{
	int	count;

	count = 0;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	if (n < 0)
		return (count + 2);
	else
		return (count + 1);
}

void	pos_number(char *str, int n, int lenght)
{
	int	s;
	int	e;

	str[lenght] = '\0';
	s = 0;
	str[s] = '-';
	n *= -1;
	e = --lenght;
	while (e > 0)
	{
		str[e] = n % 10 + 48;
		n /= 10;
		e--;
	}
}

void	neg_number(char *str, int n, int length)
{
	int	e;

	e = --length;
	while (e >= 0)
	{
		str[e] = n % 10 + 48;
		n /= 10;
		e--;
	}
}

void	fill_the_string(char *str, int n, int length)
{
	if (n < 0)
		pos_number(str, n, length);
	else
		neg_number(str, n, length);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;

	len = lenofstring(n);
	itoa = malloc ((len + 1) * sizeof(char));
	if (itoa == NULL)
		return (NULL);
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
	{
		fill_the_string(itoa, n, len);
	}
	return (itoa); 
}
