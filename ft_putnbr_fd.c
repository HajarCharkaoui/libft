/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:52:34 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/06 13:14:15 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        write (fd, "-2147483648", 11);
    }
    else if (n < 0)
    {
        n = -n;
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n, fd);
    }
    else if (n >= 10)
    {
         ft_putnbr_fd(n / 10, fd);
         ft_putnbr_fd(n % 10, fd);
    }
    else if (n >= 0 && n <= 9)
        ft_putchar_fd(n + '0', fd);
}