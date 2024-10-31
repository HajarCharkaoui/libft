/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:20:48 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/31 15:42:21 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *s1)
{
    char *copy;
    size_t len;
    size_t i;

    len = ft_strlen(s1);
    
    copy = malloc(len + 1);
    if (copy == NULL)
    {
        return (NULL);
    }
       
    i = 0;
    while (s1[i] != '\0')
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
    // hello World
    
}