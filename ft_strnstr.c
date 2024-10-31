/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:16:09 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/30 10:26:40 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t k;

    if (!needle)
        return (char *)haystack;
    
    i = 0;
    k = 0;

    while (i < len && needle[k] != '\0' && haystack[i] != '\0')
    {
        if (haystack[i] == needle[k])
        { 
            k++;
        }
        i++;

    }
    return ((char*)&haystack[i - k]);

}