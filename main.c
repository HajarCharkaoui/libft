#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    // char *arr;

    // arr = ft_strdup("hello");
    

    // if (arr == NULL) {
    //     printf("Memory allocation failed.\n");
    //     return 1;
    // }

    // else 
    // {
    //      printf("%s\n", arr);
    //     free(arr);
    //  }

    
    int i = 1337;
    
    ft_memset(&i, 42, 4);
    printf("      %d\n", i);
    //ft_memcpy(&i, &nb, 4);

    return 0;
}