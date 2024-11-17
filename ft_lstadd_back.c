/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:10:35 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/17 03:59:47 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 55;
//     int c = 8;
//     int d = 12345;
//     t_list *list = NULL;
//     t_list *current;
//     t_list *nod = ft_lstnew(&a);
//     t_list *nod1 = ft_lstnew(&b);
//     t_list *nod2 = ft_lstnew(&c);
//     t_list *nod3 = ft_lstnew(&d);

//     nod->next = nod1;
//     nod1->next = nod2;
//     list = nod;

//     ft_lstadd_back(&list, nod3);
//     current = list;
//     while (current)
//     {
//         printf("%d\n", *(int *)current->content);
//         current = current->next;
//     }
//     return (0);
// }