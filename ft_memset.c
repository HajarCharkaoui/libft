/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:32:53 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/18 21:21:52 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	size_t			i;

	arr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char a[]= "p";
// 	char b[]= "p";
// 	int k = 48;
// 	ft_memset(a, k ,1);
// 	memset(b, k ,1);
// 	printf("%s", b);
// 	printf("\n%s", b);
// }