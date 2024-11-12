/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:40:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/12 21:28:14 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t s;
	size_t d;
	
	if (dstsize != 0)
	{
		d = ft_strlen(dst);
		s = 0;
		while (src != '\0' && s + 1 < dstsize && d + 1 < dstsize)
		{
			dst[d] = (char)src[s];
			d++;
			s++;
		}
		dst[d] = '\0';
		return (dstsize + ft_strlen(&src[s]));
	}
	return (ft_strlen(src));
}
