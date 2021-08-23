#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char    a[2] = "";
    char    b[2] = "";
    const char    *ft_src = "Hello!";
    const char    *src = "Ola!";

    memcpy(a, src, 2);
	ft_memcpy(b, ft_src, 2);
	printf("Default: %s\nYours: %s\n", a, b);
	printf("Res: %s\n", strcmp(a, b) == 0 ? "OK" : "KO");
	printf("\n");
    return (0);
}
