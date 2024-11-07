#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


// char my_transform(unsigned int index, char c) {
//     if (index % 2 == 0)
//         return ((char)ft_toupper(c)); // Convert to uppercase if index is even
//     else
//         return ((char)ft_tolower(c)); // Convert to lowercase if index is odd
// }

// int main() {
//     char *s = "Hello World!";
//     char *result = ft_strmapi(s, my_transform);

//     if (result != NULL) {
//         printf("Original: %s\n", s);
//         printf("Transformed: %s\n", result);
//         free(result); // Free allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
// int main()
// {
// 	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC , 0644);
	
// 	ft_putnbr_fd(-224, fd);
// 	//ft_putchar_fd('\n', fd);

// 	close(fd);
// 	return 0;
// }

int main()
{
	char str[15] = "hello world";


    printf("Original string: %s\n", str);

    // Move part of the string to an overlapping region
    ft_memset(str, 'h', 5);
  

    printf("After memset: %s\n", str);
	return 0;
}