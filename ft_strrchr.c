/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:19:43 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/28 10:19:44 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last_occ = NULL;

    while(*s!= '\0')
    {

        if (*s == (char)c)
        {
           last_occ = (char *) s;

        }
        s++;
       
    }
    if(c == '\0')
        return ((char *) s);

    return (last_occ);
}