/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:28:10 by hacharka          #+#    #+#             */
/*   Updated: 2024/10/30 12:59:26 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    sign = 1;
    nbr = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    return (nbr * sign);
}