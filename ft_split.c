/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:15:28 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/14 21:34:43 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_del(const char *split, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (split[i] != '\0')
	{
		if (split[i] != c && (split[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

size_t	count_len(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] != c && str[len] != '\0')
		len++;
	return (len);
}

void	free_memory(char **str, int j)
{
	while (j > 0)
		free(str[--j]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		j;
	int		start;
	int		word_len;

	if (!s)
		return (NULL);
	arr = (char **)malloc((count_del(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	j = 0;
	start = 0;
	while (j < count_del(s, c) && s[start] != '\0')
	{
		while (s[start] == c)
			start++;
		word_len = count_len(s + start, c);
		arr[j] = ft_substr(s, start, word_len);
		if (!arr[j])
		{
			free_memory(arr, j);
			return (NULL);
		}
		start += word_len;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
