#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
     char const *s = "hello,,,,,world,,";
    char delimiter = ',';

    // Call ft_split
    char **result = ft_split(s, delimiter);

    // Print each split string in the result
    if (result) {
        int i = 0;
        while (result[i]) {
            printf("result[%d]: %s\n", i, result[i]);
            i++;
        }

        // Free allocated memory
        i = 0;
        while (result[i]) {
            free(result[i]);
            i++;
        }
        free(result);
    } else {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}