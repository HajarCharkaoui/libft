/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:37:56 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/06 14:06:31 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		src[i] = 0;
		i++;
	}
}
