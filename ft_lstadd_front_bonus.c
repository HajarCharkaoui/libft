/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:02:16 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/18 17:49:03 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *list;
// 	char *str = "hajar";
// 	int b = 76;
// 	int c = 77;	
// 	t_list *node1 = ft_lstnew("str");
// 	t_list *node2 = ft_lstnew("&b");
// 	t_list *new = ft_lstnew("&c");
// 	list = node1;
// 	node1->next = node2;
// 	// write(1, "X", 1);
// 	ft_lstadd_front(NULL, new);
// 	while(list)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 	}
// 	list = node1;
// 	return (0);
// }