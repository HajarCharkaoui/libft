/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:03:13 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/30 11:20:55 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;
    size_t i;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    i = 0;
    while (i < n && p1[i] == p2[i])
        i++;
    return (p1[i] - p2[i]);
    
}