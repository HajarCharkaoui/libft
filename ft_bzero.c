/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:37:56 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/16 12:13:32 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		src[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s[] = "hello";

// 	//ft_bzero(s, 3);
// 	bzero(s, 3);
// 	for (int i = 0; i < sizeof(s); i++)
//     {
//         if (s[i] == '\0')
//             printf("\\0");
//         else
//             printf("%c", s[i]);
//     }
//     printf("\n");

// 	return (0);
// }