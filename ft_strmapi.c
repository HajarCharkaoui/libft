/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:26:22 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/04 15:12:09 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    unsigned int i;

    result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if(result == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}