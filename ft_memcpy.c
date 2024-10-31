/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:24:50 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/30 10:25:40 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i ;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    d = (unsigned char *) dest;
    s = (unsigned char *) src;

    if (!dest || !src)
        return (NULL);
    while (s[i] != '\0' && i < n)
    {
        d[i] = s[i];
        i++;
            
    }
    d[i] = '\0';
    
    return (dest);
}