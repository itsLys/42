#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int slen = strlen(src);
	unsigned int dlen = strlen(dest);
	// printf("%d %d %d", slen, dlen, size);

	int i = 0;

	if (size <= dlen)
		return slen + size;
	while (src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return slen + dlen;
}
