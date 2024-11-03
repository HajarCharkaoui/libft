#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
   int n = -123456;
   char *result;

   result = ft_itoa(n);
   printf("    %s\n", result);

    return 0;
}