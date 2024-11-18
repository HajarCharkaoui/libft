/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:33 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/18 21:34:16 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;
	size_t			totalsize;

	i = 0;
	if (size == 0 || count == 0)
	{
		count = 1;
		size = 1;
	}
	totalsize = size * count;
	if (totalsize / size != count)
		return (NULL);
	s = (unsigned char *)malloc(totalsize);
	if (!s)
		return (NULL);
	while (i < totalsize)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int main()
// {
// // 	char *str = (char *)ft_calloc(0, 0);
// // 	char *str1 = (char *)calloc(0, 0);
// // 	printf("%p \n%p", str, str1);
// // //     // Free allocated memory
// //     free(str);
// // 	free(str1);
// }