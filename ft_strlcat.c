/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:40:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/25 18:40:54 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    
    if (size <= ft_strlen(dst))
    {
        return (ft_strlen(dst) + ft_strlen(src));
    }

    size_t s = 0;
    size_t d = ft_strlen(dst);
    
    while (src != '\0' && s + 1 < size)
    {
        dst[d] = src[s];
        d++;
        s++;
    } 
    dst[d] = '\0';
    return (size + ft_strlen(&src[s]));

}