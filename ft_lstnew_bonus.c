/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:43:38 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/15 11:41:48 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>
// int main(void)
// {
//     char *data = "Hello, world!";
// 	int data1 = 2024;
//     t_list *node = ft_lstnew(data);
// 	t_list *node1 = ft_lstnew(&data1);

// 	node->next = node1;

//     if (node)
//     {
// 		while (node)
// 		{
// 			if (node->content == data)
// 			{
// 				printf("Node content: %s\n", (char *)node->content);
// 			}
// 			else
// 			{
// 				printf("Node content: %d\n", *(int *)node->content);
// 			}

//        		printf("Node next: %p\n", node->next);
// 			node = node->next;

// 		}

//         free(node); // Free allocated memory
// 		free(node1);
//     }
//     else
//     {
//         printf("Failed to create a new list node.\n");
//     }

//     return (0);
// }