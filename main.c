#include "libft.h"
#include <stdio.h>
#include <string.h>

char my_transform(unsigned int index, char c) {
    if (index % 2 == 0)
        return ((char)ft_toupper(c)); // Convert to uppercase if index is even
    else
        return ((char)ft_tolower(c)); // Convert to lowercase if index is odd
}

int main() {
    char *s = "Hello World!";
    char *result = ft_strmapi(s, my_transform);

    if (result != NULL) {
        printf("Original: %s\n", s);
        printf("Transformed: %s\n", result);
        free(result); // Free allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}