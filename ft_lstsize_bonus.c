/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:45:06 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/15 12:09:11 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     int a = 99;
//     char    *str = "hello !";
//     int     b = 1999;

//     t_list *node = ft_lstnew(&a);
//     t_list *node1 = ft_lstnew(str);
//     t_list *node2 = ft_lstnew(&b);

//     node->next = node1;
//     node1->next = node2;
//     int len_list = ft_lstsize(node);
//     printf("Numbers of nodes : %d\n", len_list);
//     return (0);
// }