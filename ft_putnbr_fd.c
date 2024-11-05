/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:52:34 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/05 21:37:19 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char *s;
    int i;

    if(n == -2147483648)
    {
        write (fd, "-2147483648", 11);
    }
    else if (n < 0)
    {
        n *= -1;
        ft_putnbr_fd(n, fd);
    }
    else if (n >= 10)
    {
         ft_putnbr_fd(n / 10, fd);
         ft_putnbr_fd(n % 10, fd);
    }
    
    
    
}