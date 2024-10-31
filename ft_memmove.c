/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:02:11 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/30 10:25:10 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
   unsigned char * d = (unsigned char *)dst;
   unsigned char * s = (unsigned char *) src;
    size_t i;

    i = 0;
     
    if(d == s || len == 0)
        return dst;
    else if (d < s)
    {
         while (i < len)
         {
            d[i] = s[i];
            i++;
         }
       // d[i] = '\0';
    }
    else 
    {
        i = len;
        while(i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }

   
    return dst;
}