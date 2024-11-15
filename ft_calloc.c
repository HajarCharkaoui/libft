/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:33 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/15 18:21:17 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;
	size_t			totalsize;

	i = 0;
	if (size < 0 || count < 0)
		return (NULL);
	if (size == 0 || count == 0)
		size = count = 1;
	totalsize = size * count;
    if (totalsize / size != count)
        return (NULL);
	s = (unsigned char *)malloc(size * count);
	if (!s)
		return (NULL);
	while (i < totalsize)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

// int main()
// {
// 	// char *str = "";
// 	// str = (char *)ft_calloc(0, 0);
// 	//str = (char *)calloc(0, 0);
// 	int size = 0;
// 		 void * d1 = ft_calloc(size,0);
//         void * d2 = calloc(size, 0);
// 		printf("%p \n%p", d1, d2);
//     // if (str == NULL) {
//     //     printf("Memory allocation failed\n");
//     //     return (1);
//     // }

//     // Print initialized values (all should be zero)
//     // for (size_t i = 0; i < 5; i++) {
//     //     printf("array[%zu] = %d\n", i, str[i]);
//     // }

//     // Free allocated memory
//     // free(str);
//     return (0);

// }