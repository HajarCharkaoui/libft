/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:43:32 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/12 16:38:28 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	// size_t	len;
	int i;
	
	i = 0;
	if (!s)
		return;
	if (fd < 0)
		return;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	// len = ft_strlen(s);
	// write(fd, s, len);
}
