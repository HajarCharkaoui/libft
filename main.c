#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	const char sr[] = "hello ";
	 char ds[20] = "hajar ";

	printf("->%zu\n", ft_strlcat(ds, sr, 20));
    printf("->%s\n", ds);
	// printf("->%zu\n", strlcat(ds ,sr, 20));
    // printf("->%s\n", ds);
	
	return 0;
}
