#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	sr[] = "";
	char sep = NULL;

	char **result = ft_split(sr, sep);

	 for (int i = 0; result[i] != NULL; i++)
    {
        printf("result[%d]: %s\n", i, result[i]);
    }

	for (int i = 0; result[i] != NULL; i++)
    {
        free(result[i]);
    }
    free(result);
	return (0);
}
