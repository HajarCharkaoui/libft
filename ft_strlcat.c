/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:40:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/17 06:55:44 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	if (!dst && dstsize == 0)
		return (0);
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
// 	printf("%zu", ft_strlcat("hello", 0, 2));
// 	// printf("%zu", strlcat("hello", 0, 2));
// 	return (0);
// }
