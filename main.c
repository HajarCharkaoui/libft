#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    const char s1[] ="hello, ";
    const char s2[] = "World!";

    char *s3 = ft_strjoin(s1, s2);
    printf("%s\n", s3);

    return 0;
}