/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:15:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/01 20:08:26 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_del(const char *split, char c)
{
    int count ;
    int i;
    
    count = 0;
    i = 0;
    while (split[i] != '\0')
    {
        if (split[i] == c)
            count++;
        i++;
    }
    return count + 1;
}

size_t count_len(const char *str, char c)
{
    size_t len;
    
    len = 0;
    while (str[len] != c && str[len] != '\0') len++;
    return len;
}
void print_string(char *strs, const char *s1, char c)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (s1[j] != '\0' && s1[j] != c)
    {
        strs[i] = s1[j];
        i++;
        j++;
    }
    strs[i] = '\0';
}

char **ft_split(char const *s, char c)
{
    char **arr;
    int i;
    size_t m;
    
    
    arr = (char **)malloc (count_del(s, c) * sizeof(char *));
    if (!arr) return NULL;
    i = 0;
    while (i++ < count_del(s, c) && *s != '\0')
    {
        while (*s == c) s++;
        m = count_len(s, c);
        arr[i] = malloc (m + 1);
        if(!arr[i])
        {
            while (i > 0) free(arr[--i]);
            free(arr);
            return NULL;
        }
        print_string(arr[i], s, c);
        s += m;
    }
    arr[i] = NULL;
    return arr;
}