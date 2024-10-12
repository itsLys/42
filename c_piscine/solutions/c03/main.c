#include "./ft_strlcat.c"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void test_strlcat(char *src, unsigned int size)
{
	char *dest = malloc(sizeof(char) * size);
	char *ft_dest = malloc(sizeof(char) * size);
	strcpy(dest, "");
	strcpy(ft_dest, "");
	printf("strcat return: %lu\n", strlcat(dest, src, size));
	printf("ft_strcat return: %u\n", ft_strlcat(ft_dest, src, size));
	printf("dest content: '%s'\n", dest);
	printf("ft_dest content: '%s'\n", ft_dest);
	
	free(dest);
	free(ft_dest);
}

int main()
{
	test_strlcat("World!", 4);
	
}
