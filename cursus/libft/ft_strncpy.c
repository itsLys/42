#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
	while (*src)
	{
		*(dst++) = *(src++);
		dsize--;
	}
	while (dsize--)
	{
		*(dst++) = '\0';
	}
	return (dst);
}
