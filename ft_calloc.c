/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:33 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/06 14:13:26 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)malloc(size);
	if (s == NULL)
		return (NULL);
	else
	{
		while (count--)
		{
			s[i] = 0;
			i++;
		}
		return (s);
	}
}
