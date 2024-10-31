/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:33 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/31 11:25:48 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    
    sub = malloc(len + 1);
    i = 0;
    
    if (sub == NULL)
        return NULL;
    
    while (i < len && s[start] != '\0')
    {
        sub[i] = s[start];
        start++;
        i++;
    }
    sub[i] = '\0';
    return sub;
    
}