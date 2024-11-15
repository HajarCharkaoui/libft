/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:32:55 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/12 18:08:37 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != '\0' && f != '\0')
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void my_transform(unsigned int index, char *c) {
//     if (index % 2 == 0)
//         *c = ft_toupper(*c); // Convert to uppercase if index is even
//     else
//         *c = ft_tolower(*c); // Convert to lowercase if index is odd
// }
// int main()
// {
// 	char *s = "Hello World!";
// 	unsigned int i = 0;
//         printf("Original: %s\n", s);
// 		while ( s[i] != '\0')
// 		{
// 			my_transform(i, &s[i]);
// 			i++;
// 		}
//         printf("Transformed: %s\n", s);
//     return (0);
// }