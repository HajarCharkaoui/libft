/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:15:31 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/07 16:51:13 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main()
// {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC , 0644);
//     ft_putchar_fd('H', fd);
//     ft_putchar_fd('\n', fd);

//     close(fd);
//     return 0;
// }